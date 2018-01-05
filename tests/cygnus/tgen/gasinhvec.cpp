// --------------------------------------------------------
// genasnhv - generates test vectors for asinh() & asinhf()
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
    {	/* Start    Step 	Stop  */
	{ -525.0, +50.0,      	-75.0 },
	{ -68.0,  +5.0,		 -3.0 },
	{ -2.0,   +0.0625,	 +2.0 },
	{ +3.0,   +5.0,		+68.0 },
	{ +75.0,  +50.0,       +525.0 },
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
	    Expected = xtod(xasinh(Argument));

	    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);
	}
    }

    // --------------
    // SPECIAL VALUES
    // --------------

    Argument = DBL_MAX;
    Expected = xtod(asinh(Argument));
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = DBL_MIN;
    Expected = xtod(asinh(Argument));
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = -infinity();
    Expected = -infinity();
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);
    Argument = infinity();
    Expected = infinity();
    _fpreset();

    WriteVector(DBL_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = nan("");
    Expected = nan("");
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
	    Expected = xtod(xasinh(Argument));

	    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);
	}
    }

    // --------------
    // SPECIAL VALUES
    // --------------

    Argument = FLT_MAX;
    Expected = xtod(asinh(Argument));
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = FLT_MIN;
    Expected = xtod(asinh(Argument));
    _fpreset();

    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = -infinityf();
    Expected = -infinityf();
    _fpreset();
    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = infinityf();
    Expected = infinityf();
    _fpreset();
    WriteVector(FLT_MEAS_BIT, Argument, Expected, __NO_ERROR_);

    Argument = nan("");
    Expected = nan("");
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
    GenDblVector("asinh");
    GenFltVector("asinhf");
    exit(0);
}
