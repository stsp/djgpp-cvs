// --------------------------------------------------------
// genlg10v - generates test vectors for log10() & log10f()
// --------------------------------------------------------
#include <errno.h>
#include <float.h>
#include <math.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <qfloat.h>
#include "test.h"
#include "genmathv.h"

/* INDENT OFF */

LOOP_LIMITS  Ctls[] =
    {	/* Start           Step	 	Stop  */
	{ 1./50.,          1./50.,	1.02, },
	{ 2.0,     	  1./100.,	3.01, },
	{ 10.05,    (100.5-10.05)/50.,  100.5,},
    };

/* INDENT ON */

#define	DBL_MEAS_BIT	62
#define	FLT_MEAS_BIT	34

// -------------------------------------------------------------------
// GenDblVector - Generates Test Vectors for Double Precision Function
// -------------------------------------------------------------------
void
GenDblVector(char *Name)
{
    unsigned J;
    double   K;

    volatile  double  Argument, Expected;

    // Redirect stdout to disk file

    AssignOutputFile(Name);

    // Generate first two lines of file

    GEN_FIRST_TWO_LINES

    // Generate vectors

    for (J = 0; J < (sizeof(Ctls) / sizeof(Ctls[0])); ++J)
    {
	for (K = Ctls[J].Start; K <= Ctls[J].Stop; K += Ctls[J].Step)
	{
	    Argument = K;
	    Expected = xtod(xlog10(Argument));

	    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);
	}
    }

    // --------------
    // SPECIAL VALUES
    // --------------

    Argument = -1.0;
    Expected = -infinity();
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, EDOM);

    Argument = 0.0;
    Expected = -infinity();
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, ERANGE);

    Argument = 1.0;
    Expected = 0.0;

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = DBL_MAX;
    Expected = xtod(xlog10(Argument));

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = DBL_MIN;
    Expected = xtod(xlog10(Argument));

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = -infinity();
    Expected = -infinity();
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, EDOM);

    Argument = +infinity();
    Expected = +infinity();
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = nan("");
    Expected = nan("");
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = -nan("");
    Expected = -nan("");
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    // Generate last lines (code lines) of file

    printf("0,};\nvoid\ntest_%s(int m)\t{ run_vector_1(m, %s_vec,(char *)"
	"(%s),\"%s\",\"dd\");}\n", Name, Name, Name, Name);
}
// -------------------------------------------------------------------
// GenFltVector - Generates Test Vectors for Float Precision Function
// -------------------------------------------------------------------
void
GenFltVector(char *Name)
{
    unsigned J;
    float    K;

    volatile  float  Argument, Expected;

    // Redirect stdout to disk file

    AssignOutputFile(Name);

    // Generate first two lines of file

    GEN_FIRST_TWO_LINES

    // Generate vectors

    for (J = 0; J < (sizeof(Ctls) / sizeof(Ctls[0])); ++J)
    {
	for (K = Ctls[J].Start; K <= Ctls[J].Stop; K += Ctls[J].Step)
	{
	    Argument = K;
	    Expected = xtod(xlog10(Argument));
	    if (Expected > FLT_MAX)
	    {
		errno = ERANGE;
	    }
	    else
	    {
		errno = __NO_ERROR_;
	    }
	    WriteVector(FLT_MEAS_BIT, Argument, Expected, errno);
	}
    }

    // --------------
    // SPECIAL VALUES
    // --------------

    Argument = -1.0;
    Expected = -infinityf();
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, EDOM);

    Argument = 0.0;
    Expected = -infinityf();
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, ERANGE);

    Argument = 1.0;
    Expected = 0.0;

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = FLT_MAX;
    Expected = xtod(xlog10(Argument));

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = FLT_MIN;
    Expected = xtod(xlog10(Argument));

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = -infinityf();
    Expected = -infinityf();
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, EDOM);

    Argument = +infinityf();
    Expected = +infinityf();
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = nan("");
    Expected = nan("");
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = -nan("");
    Expected = -nan("");
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    // Generate last lines (code lines) of file

    printf("0,};\nvoid\ntest_%s(int m)\t{ run_vector_1(m, %s_vec,(char *)"
	"(%s),\"%s\",\"ff\");}\n", Name, Name, Name, Name);
}
int
main()
{
    signal(SIGINT, exit);
    GenDblVector("log10");
    GenFltVector("log10f");
    exit(0);
}
