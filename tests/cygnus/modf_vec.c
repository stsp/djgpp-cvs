#include "test.h"
 one_line_type modf_vec[] = {
{62, 0, 0,__LINE__, {{0x80000000, 0x00000000}, {0xc0544000, 0x00000000}, {0xc0544000, 0x00000000}}},	/* -0.0000E+00=F(     -81,     -81) */
{62, 0, 0,__LINE__, {{0xbfc851eb, 0x851eb800}, {0xc0540c28, 0xf5c28f5c}, {0xc0540000, 0x00000000}}},	/* -1.9000E-01=F(  -80.19,     -80) */
{62, 0, 0,__LINE__, {{0xbfd851eb, 0x851eb800}, {0xc053d851, 0xeb851eb8}, {0xc053c000, 0x00000000}}},	/* -3.8000E-01=F(  -79.38,     -79) */
{62, 0, 0,__LINE__, {{0xbfe23d70, 0xa3d70a00}, {0xc053a47a, 0xe147ae14}, {0xc0538000, 0x00000000}}},	/* -5.7000E-01=F(  -78.57,     -78) */
{62, 0, 0,__LINE__, {{0xbfe851eb, 0x851eb800}, {0xc05370a3, 0xd70a3d70}, {0xc0534000, 0x00000000}}},	/* -7.6000E-01=F(  -77.76,     -77) */
{62, 0, 0,__LINE__, {{0xbfee6666, 0x66666600}, {0xc0533ccc, 0xcccccccc}, {0xc0530000, 0x00000000}}},	/* -9.5000E-01=F(  -76.95,     -76) */
{62, 0, 0,__LINE__, {{0xbfc1eb85, 0x1eb85000}, {0xc05308f5, 0xc28f5c28}, {0xc0530000, 0x00000000}}},	/* -1.4000E-01=F(  -76.14,     -76) */
{62, 0, 0,__LINE__, {{0xbfd51eb8, 0x51eb8400}, {0xc052d51e, 0xb851eb84}, {0xc052c000, 0x00000000}}},	/* -3.3000E-01=F(  -75.33,     -75) */
{62, 0, 0,__LINE__, {{0xbfe0a3d7, 0x0a3d7000}, {0xc052a147, 0xae147ae0}, {0xc0528000, 0x00000000}}},	/* -5.2000E-01=F(  -74.52,     -74) */
{62, 0, 0,__LINE__, {{0xbfe6b851, 0xeb851e00}, {0xc0526d70, 0xa3d70a3c}, {0xc0524000, 0x00000000}}},	/* -7.1000E-01=F(  -73.71,     -73) */
{62, 0, 0,__LINE__, {{0xbfeccccc, 0xcccccc00}, {0xc0523999, 0x99999998}, {0xc0520000, 0x00000000}}},	/* -9.0000E-01=F(   -72.9,     -72) */
{62, 0, 0,__LINE__, {{0xbfb70a3d, 0x70a3d000}, {0xc05205c2, 0x8f5c28f4}, {0xc0520000, 0x00000000}}},	/* -9.0000E-02=F(  -72.09,     -72) */
{62, 0, 0,__LINE__, {{0xbfd1eb85, 0x1eb85000}, {0xc051d1eb, 0x851eb850}, {0xc051c000, 0x00000000}}},	/* -2.8000E-01=F(  -71.28,     -71) */
{62, 0, 0,__LINE__, {{0xbfde147a, 0xe147ac00}, {0xc0519e14, 0x7ae147ac}, {0xc0518000, 0x00000000}}},	/* -4.7000E-01=F(  -70.47,     -70) */
{62, 0, 0,__LINE__, {{0xbfe51eb8, 0x51eb8400}, {0xc0516a3d, 0x70a3d708}, {0xc0514000, 0x00000000}}},	/* -6.6000E-01=F(  -69.66,     -69) */
{62, 0, 0,__LINE__, {{0xbfeb3333, 0x33333200}, {0xc0513666, 0x66666664}, {0xc0510000, 0x00000000}}},	/* -8.5000E-01=F(  -68.85,     -68) */
{62, 0, 0,__LINE__, {{0xbfa47ae1, 0x47ae0000}, {0xc051028f, 0x5c28f5c0}, {0xc0510000, 0x00000000}}},	/* -4.0000E-02=F(  -68.04,     -68) */
{62, 0, 0,__LINE__, {{0xbfcd70a3, 0xd70a3800}, {0xc050ceb8, 0x51eb851c}, {0xc050c000, 0x00000000}}},	/* -2.3000E-01=F(  -67.23,     -67) */
{62, 0, 0,__LINE__, {{0xbfdae147, 0xae147800}, {0xc0509ae1, 0x47ae1478}, {0xc0508000, 0x00000000}}},	/* -4.2000E-01=F(  -66.42,     -66) */
{62, 0, 0,__LINE__, {{0xbfe3851e, 0xb851ea00}, {0xc050670a, 0x3d70a3d4}, {0xc0504000, 0x00000000}}},	/* -6.1000E-01=F(  -65.61,     -65) */
{62, 0, 0,__LINE__, {{0xbfe99999, 0x99999800}, {0xc0503333, 0x33333330}, {0xc0500000, 0x00000000}}},	/* -8.0000E-01=F(   -64.8,     -64) */
{62, 0, 0,__LINE__, {{0xbfefae14, 0x7ae14600}, {0xc04ffeb8, 0x51eb8518}, {0xc04f8000, 0x00000000}}},	/* -9.9000E-01=F(  -63.99,     -63) */
{62, 0, 0,__LINE__, {{0xbfc70a3d, 0x70a3d000}, {0xc04f970a, 0x3d70a3d0}, {0xc04f8000, 0x00000000}}},	/* -1.8000E-01=F(  -63.18,     -63) */
{62, 0, 0,__LINE__, {{0xbfd7ae14, 0x7ae14400}, {0xc04f2f5c, 0x28f5c288}, {0xc04f0000, 0x00000000}}},	/* -3.7000E-01=F(  -62.37,     -62) */
{62, 0, 0,__LINE__, {{0xbfe1eb85, 0x1eb85000}, {0xc04ec7ae, 0x147ae140}, {0xc04e8000, 0x00000000}}},	/* -5.6000E-01=F(  -61.56,     -61) */
{62, 0, 0,__LINE__, {{0xbfe7ffff, 0xfffffe00}, {0xc04e5fff, 0xfffffff8}, {0xc04e0000, 0x00000000}}},	/* -7.5000E-01=F(  -60.75,     -60) */
{62, 0, 0,__LINE__, {{0xbfee147a, 0xe147ac00}, {0xc04df851, 0xeb851eb0}, {0xc04d8000, 0x00000000}}},	/* -9.4000E-01=F(  -59.94,     -59) */
{62, 0, 0,__LINE__, {{0xbfc0a3d7, 0x0a3d6800}, {0xc04d90a3, 0xd70a3d68}, {0xc04d8000, 0x00000000}}},	/* -1.3000E-01=F(  -59.13,     -59) */
{62, 0, 0,__LINE__, {{0xbfd47ae1, 0x47ae1000}, {0xc04d28f5, 0xc28f5c20}, {0xc04d0000, 0x00000000}}},	/* -3.2000E-01=F(  -58.32,     -58) */
{62, 0, 0,__LINE__, {{0xbfe051eb, 0x851eb600}, {0xc04cc147, 0xae147ad8}, {0xc04c8000, 0x00000000}}},	/* -5.1000E-01=F(  -57.51,     -57) */
{62, 0, 0,__LINE__, {{0xbfe66666, 0x66666400}, {0xc04c5999, 0x99999990}, {0xc04c0000, 0x00000000}}},	/* -7.0000E-01=F(   -56.7,     -56) */
{62, 0, 0,__LINE__, {{0xbfec7ae1, 0x47ae1200}, {0xc04bf1eb, 0x851eb848}, {0xc04b8000, 0x00000000}}},	/* -8.9000E-01=F(  -55.89,     -55) */
{62, 0, 0,__LINE__, {{0xbfb47ae1, 0x47ae0000}, {0xc04b8a3d, 0x70a3d700}, {0xc04b8000, 0x00000000}}},	/* -8.0000E-02=F(  -55.08,     -55) */
{62, 0, 0,__LINE__, {{0xbfd147ae, 0x147adc00}, {0xc04b228f, 0x5c28f5b8}, {0xc04b0000, 0x00000000}}},	/* -2.7000E-01=F(  -54.27,     -54) */
{62, 0, 0,__LINE__, {{0xbfdd70a3, 0xd70a3800}, {0xc04abae1, 0x47ae1470}, {0xc04a8000, 0x00000000}}},	/* -4.6000E-01=F(  -53.46,     -53) */
{62, 0, 0,__LINE__, {{0xbfe4cccc, 0xccccca00}, {0xc04a5333, 0x33333328}, {0xc04a0000, 0x00000000}}},	/* -6.5000E-01=F(  -52.65,     -52) */
{62, 0, 0,__LINE__, {{0xbfeae147, 0xae147800}, {0xc049eb85, 0x1eb851e0}, {0xc0498000, 0x00000000}}},	/* -8.4000E-01=F(  -51.84,     -51) */
{62, 0, 0,__LINE__, {{0xbf9eb851, 0xeb84c000}, {0xc04983d7, 0x0a3d7098}, {0xc0498000, 0x00000000}}},	/* -3.0000E-02=F(  -51.03,     -51) */
{62, 0, 0,__LINE__, {{0xbfcc28f5, 0xc28f5000}, {0xc0491c28, 0xf5c28f50}, {0xc0490000, 0x00000000}}},	/* -2.2000E-01=F(  -50.22,     -50) */
{62, 0, 0,__LINE__, {{0xbfda3d70, 0xa3d70400}, {0xc048b47a, 0xe147ae08}, {0xc0488000, 0x00000000}}},	/* -4.1000E-01=F(  -49.41,     -49) */
{62, 0, 0,__LINE__, {{0xbfe33333, 0x33333000}, {0xc0484ccc, 0xccccccc0}, {0xc0480000, 0x00000000}}},	/* -6.0000E-01=F(   -48.6,     -48) */
{62, 0, 0,__LINE__, {{0xbfe947ae, 0x147ade00}, {0xc047e51e, 0xb851eb78}, {0xc0478000, 0x00000000}}},	/* -7.9000E-01=F(  -47.79,     -47) */
{62, 0, 0,__LINE__, {{0xbfef5c28, 0xf5c28c00}, {0xc0477d70, 0xa3d70a30}, {0xc0470000, 0x00000000}}},	/* -9.8000E-01=F(  -46.98,     -46) */
{62, 0, 0,__LINE__, {{0xbfc5c28f, 0x5c28e800}, {0xc04715c2, 0x8f5c28e8}, {0xc0470000, 0x00000000}}},	/* -1.7000E-01=F(  -46.17,     -46) */
{62, 0, 0,__LINE__, {{0xbfd70a3d, 0x70a3d000}, {0xc046ae14, 0x7ae147a0}, {0xc0468000, 0x00000000}}},	/* -3.6000E-01=F(  -45.36,     -45) */
{62, 0, 0,__LINE__, {{0xbfe19999, 0x99999600}, {0xc0464666, 0x66666658}, {0xc0460000, 0x00000000}}},	/* -5.5000E-01=F(  -44.55,     -44) */
{62, 0, 0,__LINE__, {{0xbfe7ae14, 0x7ae14400}, {0xc045deb8, 0x51eb8510}, {0xc0458000, 0x00000000}}},	/* -7.4000E-01=F(  -43.74,     -43) */
{62, 0, 0,__LINE__, {{0xbfedc28f, 0x5c28f200}, {0xc045770a, 0x3d70a3c8}, {0xc0450000, 0x00000000}}},	/* -9.3000E-01=F(  -42.93,     -42) */
{62, 0, 0,__LINE__, {{0xbfbeb851, 0xeb850000}, {0xc0450f5c, 0x28f5c280}, {0xc0450000, 0x00000000}}},	/* -1.2000E-01=F(  -42.12,     -42) */
{62, 0, 0,__LINE__, {{0xbfd3d70a, 0x3d709c00}, {0xc044a7ae, 0x147ae138}, {0xc0448000, 0x00000000}}},	/* -3.1000E-01=F(  -41.31,     -41) */
{62, 0, 0,__LINE__, {{0xbfdfffff, 0xfffff800}, {0xc0443fff, 0xfffffff0}, {0xc0440000, 0x00000000}}},	/* -5.0000E-01=F(   -40.5,     -40) */
{62, 0, 0,__LINE__, {{0xbfe6147a, 0xe147aa00}, {0xc043d851, 0xeb851ea8}, {0xc0438000, 0x00000000}}},	/* -6.9000E-01=F(  -39.69,     -39) */
{62, 0, 0,__LINE__, {{0xbfec28f5, 0xc28f5800}, {0xc04370a3, 0xd70a3d60}, {0xc0430000, 0x00000000}}},	/* -8.8000E-01=F(  -38.88,     -38) */
{62, 0, 0,__LINE__, {{0xbfb1eb85, 0x1eb83000}, {0xc04308f5, 0xc28f5c18}, {0xc0430000, 0x00000000}}},	/* -7.0000E-02=F(  -38.07,     -38) */
{62, 0, 0,__LINE__, {{0xbfd0a3d7, 0x0a3d6800}, {0xc042a147, 0xae147ad0}, {0xc0428000, 0x00000000}}},	/* -2.6000E-01=F(  -37.26,     -37) */
{62, 0, 0,__LINE__, {{0xbfdccccc, 0xccccc400}, {0xc0423999, 0x99999988}, {0xc0420000, 0x00000000}}},	/* -4.5000E-01=F(  -36.45,     -36) */
{62, 0, 0,__LINE__, {{0xbfe47ae1, 0x47ae1000}, {0xc041d1eb, 0x851eb840}, {0xc0418000, 0x00000000}}},	/* -6.4000E-01=F(  -35.64,     -35) */
{62, 0, 0,__LINE__, {{0xbfea8f5c, 0x28f5be00}, {0xc0416a3d, 0x70a3d6f8}, {0xc0410000, 0x00000000}}},	/* -8.3000E-01=F(  -34.83,     -34) */
{62, 0, 0,__LINE__, {{0xbf947ae1, 0x47ad8000}, {0xc041028f, 0x5c28f5b0}, {0xc0410000, 0x00000000}}},	/* -2.0000E-02=F(  -34.02,     -34) */
{62, 0, 0,__LINE__, {{0xbfcae147, 0xae146800}, {0xc0409ae1, 0x47ae1468}, {0xc0408000, 0x00000000}}},	/* -2.1000E-01=F(  -33.21,     -33) */
{62, 0, 0,__LINE__, {{0xbfd99999, 0x99999000}, {0xc0403333, 0x33333320}, {0xc0400000, 0x00000000}}},	/* -4.0000E-01=F(   -32.4,     -32) */
{62, 0, 0,__LINE__, {{0xbfe2e147, 0xae147620}, {0xc03f970a, 0x3d70a3b1}, {0xc03f0000, 0x00000000}}},	/* -5.9000E-01=F(  -31.59,     -31) */
{62, 0, 0,__LINE__, {{0xbfe8f5c2, 0x8f5c2440}, {0xc03ec7ae, 0x147ae122}, {0xc03e0000, 0x00000000}}},	/* -7.8000E-01=F(  -30.78,     -30) */
{62, 0, 0,__LINE__, {{0xbfef0a3d, 0x70a3d260}, {0xc03df851, 0xeb851e93}, {0xc03d0000, 0x00000000}}},	/* -9.7000E-01=F(  -29.97,     -29) */
{62, 0, 0,__LINE__, {{0xbfc47ae1, 0x47ae0200}, {0xc03d28f5, 0xc28f5c04}, {0xc03d0000, 0x00000000}}},	/* -1.6000E-01=F(  -29.16,     -29) */
{62, 0, 0,__LINE__, {{0xbfd66666, 0x66665d40}, {0xc03c5999, 0x99999975}, {0xc03c0000, 0x00000000}}},	/* -3.5000E-01=F(  -28.35,     -28) */
{62, 0, 0,__LINE__, {{0xbfe147ae, 0x147adcc0}, {0xc03b8a3d, 0x70a3d6e6}, {0xc03b0000, 0x00000000}}},	/* -5.4000E-01=F(  -27.54,     -27) */
{62, 0, 0,__LINE__, {{0xbfe75c28, 0xf5c28ae0}, {0xc03abae1, 0x47ae1457}, {0xc03a0000, 0x00000000}}},	/* -7.3000E-01=F(  -26.73,     -26) */
{62, 0, 0,__LINE__, {{0xbfed70a3, 0xd70a3900}, {0xc039eb85, 0x1eb851c8}, {0xc0390000, 0x00000000}}},	/* -9.2000E-01=F(  -25.92,     -25) */
{62, 0, 0,__LINE__, {{0xbfbc28f5, 0xc28f3900}, {0xc0391c28, 0xf5c28f39}, {0xc0390000, 0x00000000}}},	/* -1.1000E-01=F(  -25.11,     -25) */
{62, 0, 0,__LINE__, {{0xbfd33333, 0x33332a80}, {0xc0384ccc, 0xccccccaa}, {0xc0380000, 0x00000000}}},	/* -3.0000E-01=F(   -24.3,     -24) */
{62, 0, 0,__LINE__, {{0xbfdf5c28, 0xf5c286c0}, {0xc0377d70, 0xa3d70a1b}, {0xc0370000, 0x00000000}}},	/* -4.9000E-01=F(  -23.49,     -23) */
{62, 0, 0,__LINE__, {{0xbfe5c28f, 0x5c28f180}, {0xc036ae14, 0x7ae1478c}, {0xc0360000, 0x00000000}}},	/* -6.8000E-01=F(  -22.68,     -22) */
{62, 0, 0,__LINE__, {{0xbfebd70a, 0x3d709fa0}, {0xc035deb8, 0x51eb84fd}, {0xc0350000, 0x00000000}}},	/* -8.7000E-01=F(  -21.87,     -21) */
{62, 0, 0,__LINE__, {{0xbfaeb851, 0xeb84dc00}, {0xc0350f5c, 0x28f5c26e}, {0xc0350000, 0x00000000}}},	/* -6.0000E-02=F(  -21.06,     -21) */
{62, 0, 0,__LINE__, {{0xbfcfffff, 0xffffef80}, {0xc0343fff, 0xffffffdf}, {0xc0340000, 0x00000000}}},	/* -2.5000E-01=F(  -20.25,     -20) */
{62, 0, 0,__LINE__, {{0xbfdc28f5, 0xc28f5400}, {0xc03370a3, 0xd70a3d50}, {0xc0330000, 0x00000000}}},	/* -4.4000E-01=F(  -19.44,     -19) */
{62, 0, 0,__LINE__, {{0xbfe428f5, 0xc28f5820}, {0xc032a147, 0xae147ac1}, {0xc0320000, 0x00000000}}},	/* -6.3000E-01=F(  -18.63,     -18) */
{62, 0, 0,__LINE__, {{0xbfea3d70, 0xa3d70640}, {0xc031d1eb, 0x851eb832}, {0xc0310000, 0x00000000}}},	/* -8.2000E-01=F(  -17.82,     -17) */
{62, 0, 0,__LINE__, {{0xbf847ae1, 0x47ad1800}, {0xc031028f, 0x5c28f5a3}, {0xc0310000, 0x00000000}}},	/* -1.0000E-02=F(  -17.01,     -17) */
{62, 0, 0,__LINE__, {{0xbfc99999, 0x99998a00}, {0xc0303333, 0x33333314}, {0xc0300000, 0x00000000}}},	/* -2.0000E-01=F(   -16.2,     -16) */
{62, 0, 0,__LINE__, {{0xbfd8f5c2, 0x8f5c2120}, {0xc02ec7ae, 0x147ae109}, {0xc02e0000, 0x00000000}}},	/* -3.9000E-01=F(  -15.39,     -15) */
{62, 0, 0,__LINE__, {{0xbfe28f5c, 0x28f5bea0}, {0xc02d28f5, 0xc28f5bea}, {0xc02c0000, 0x00000000}}},	/* -5.8000E-01=F(  -14.58,     -14) */
{62, 0, 0,__LINE__, {{0xbfe8a3d7, 0x0a3d6cb0}, {0xc02b8a3d, 0x70a3d6cb}, {0xc02a0000, 0x00000000}}},	/* -7.7000E-01=F(  -13.77,     -13) */
{62, 0, 0,__LINE__, {{0xbfeeb851, 0xeb851ac0}, {0xc029eb85, 0x1eb851ac}, {0xc0280000, 0x00000000}}},	/* -9.6000E-01=F(  -12.96,     -12) */
{62, 0, 0,__LINE__, {{0xbfc33333, 0x33332340}, {0xc0284ccc, 0xcccccc8d}, {0xc0280000, 0x00000000}}},	/* -1.5000E-01=F(  -12.15,     -12) */
{62, 0, 0,__LINE__, {{0xbfd5c28f, 0x5c28edc0}, {0xc026ae14, 0x7ae1476e}, {0xc0260000, 0x00000000}}},	/* -3.4000E-01=F(  -11.34,     -11) */
{62, 0, 0,__LINE__, {{0xbfe0f5c2, 0x8f5c24f0}, {0xc0250f5c, 0x28f5c24f}, {0xc0240000, 0x00000000}}},	/* -5.3000E-01=F(  -10.53,     -10) */
{62, 0, 0,__LINE__, {{0xbfe70a3d, 0x70a3d300}, {0xc02370a3, 0xd70a3d30}, {0xc0220000, 0x00000000}}},	/* -7.2000E-01=F(   -9.72,      -9) */
{62, 0, 0,__LINE__, {{0xbfed1eb8, 0x51eb8110}, {0xc021d1eb, 0x851eb811}, {0xc0200000, 0x00000000}}},	/* -9.1000E-01=F(   -8.91,      -8) */
{62, 0, 0,__LINE__, {{0xbfb99999, 0x99997900}, {0xc0203333, 0x333332f2}, {0xc0200000, 0x00000000}}},	/* -1.0000E-01=F(    -8.1,      -8) */
{62, 0, 0,__LINE__, {{0xbfd28f5c, 0x28f5ba60}, {0xc01d28f5, 0xc28f5ba6}, {0xc01c0000, 0x00000000}}},	/* -2.9000E-01=F(   -7.29,      -7) */
{62, 0, 0,__LINE__, {{0xbfdeb851, 0xeb851680}, {0xc019eb85, 0x1eb85168}, {0xc0180000, 0x00000000}}},	/* -4.8000E-01=F(   -6.48,      -6) */
{62, 0, 0,__LINE__, {{0xbfe570a3, 0xd70a3950}, {0xc016ae14, 0x7ae1472a}, {0xc0140000, 0x00000000}}},	/* -6.7000E-01=F(   -5.67,      -5) */
{62, 0, 0,__LINE__, {{0xbfeb851e, 0xb851e760}, {0xc01370a3, 0xd70a3cec}, {0xc0100000, 0x00000000}}},	/* -8.6000E-01=F(   -4.86,      -4) */
{62, 0, 0,__LINE__, {{0xbfa99999, 0x99995700}, {0xc0103333, 0x333332ae}, {0xc0100000, 0x00000000}}},	/* -5.0000E-02=F(   -4.05,      -4) */
{62, 0, 0,__LINE__, {{0xbfceb851, 0xeb850e10}, {0xc009eb85, 0x1eb850e1}, {0xc0080000, 0x00000000}}},	/* -2.4000E-01=F(   -3.24,      -3) */
{62, 0, 0,__LINE__, {{0xbfdb851e, 0xb851e330}, {0xc00370a3, 0xd70a3c66}, {0xc0000000, 0x00000000}}},	/* -4.3000E-01=F(   -2.43,      -2) */
{62, 0, 0,__LINE__, {{0xbfe3d70a, 0x3d709fac}, {0xbff9eb85, 0x1eb84fd6}, {0xbff00000, 0x00000000}}},	/* -6.2000E-01=F(   -1.62,      -1) */
{62, 0, 0,__LINE__, {{0xbfe9eb85, 0x1eb84dc0}, {0xbfe9eb85, 0x1eb84dc0}, {0x80000000, 0x00000000}}},	/* -8.1000E-01=F(   -0.81,      -0) */
{62, 0, 0,__LINE__, {{0x3d40b000, 0x00000000}, {0x3d40b000, 0x00000000}, {0x00000000, 0x00000000}}},	/* +1.1857E-13=F(+1.186e-13,      +0) */
{62, 0, 0,__LINE__, {{0x3fe9eb85, 0x1eb85618}, {0x3fe9eb85, 0x1eb85618}, {0x00000000, 0x00000000}}},	/* +8.1000E-01=F(   +0.81,      +0) */
{62, 0, 0,__LINE__, {{0x3fe3d70a, 0x3d70a804}, {0x3ff9eb85, 0x1eb85402}, {0x3ff00000, 0x00000000}}},	/* +6.2000E-01=F(   +1.62,      +1) */
{62, 0, 0,__LINE__, {{0x3fdb851e, 0xb851f3e0}, {0x400370a3, 0xd70a3e7c}, {0x40000000, 0x00000000}}},	/* +4.3000E-01=F(   +2.43,      +2) */
{62, 0, 0,__LINE__, {{0x3fceb851, 0xeb852f70}, {0x4009eb85, 0x1eb852f7}, {0x40080000, 0x00000000}}},	/* +2.4000E-01=F(   +3.24,      +3) */
{62, 0, 0,__LINE__, {{0x3fa99999, 0x9999dc80}, {0x40103333, 0x333333b9}, {0x40100000, 0x00000000}}},	/* +5.0000E-02=F(   +4.05,      +4) */
{62, 0, 0,__LINE__, {{0x3feb851e, 0xb851efb0}, {0x401370a3, 0xd70a3df6}, {0x40100000, 0x00000000}}},	/* +8.6000E-01=F(   +4.86,      +4) */
{62, 0, 0,__LINE__, {{0x3fe570a3, 0xd70a41a0}, {0x4016ae14, 0x7ae14834}, {0x40140000, 0x00000000}}},	/* +6.7000E-01=F(   +5.67,      +5) */
{62, 0, 0,__LINE__, {{0x3fdeb851, 0xeb852720}, {0x4019eb85, 0x1eb85272}, {0x40180000, 0x00000000}}},	/* +4.8000E-01=F(   +6.48,      +6) */
{62, 0, 0,__LINE__, {{0x3fd28f5c, 0x28f5cb00}, {0x401d28f5, 0xc28f5cb0}, {0x401c0000, 0x00000000}}},	/* +2.9000E-01=F(   +7.29,      +7) */
{62, 0, 0,__LINE__, {{0x3fb99999, 0x9999bb80}, {0x40203333, 0x33333377}, {0x40200000, 0x00000000}}},	/* +1.0000E-01=F(    +8.1,      +8) */
{62, 0, 0,__LINE__, {{0x3fed1eb8, 0x51eb8960}, {0x4021d1eb, 0x851eb896}, {0x40200000, 0x00000000}}},	/* +9.1000E-01=F(   +8.91,      +8) */
{62, 0, 0,__LINE__, {{0x3fe70a3d, 0x70a3db50}, {0x402370a3, 0xd70a3db5}, {0x40220000, 0x00000000}}},	/* +7.2000E-01=F(   +9.72,      +9) */
{62, 0, 0,__LINE__, {{0x3fe0f5c2, 0x8f5c2d40}, {0x40250f5c, 0x28f5c2d4}, {0x40240000, 0x00000000}}},	/* +5.3000E-01=F(  +10.53,     +10) */
{62, 0, 0,__LINE__, {{0x3fd5c28f, 0x5c28fe60}, {0x4026ae14, 0x7ae147f3}, {0x40260000, 0x00000000}}},	/* +3.4000E-01=F(  +11.34,     +11) */
{62, 0, 0,__LINE__, {{0x3fc33333, 0x33334480}, {0x40284ccc, 0xcccccd12}, {0x40280000, 0x00000000}}},	/* +1.5000E-01=F(  +12.15,     +12) */
{62, 0, 0,__LINE__, {{0x3feeb851, 0xeb852310}, {0x4029eb85, 0x1eb85231}, {0x40280000, 0x00000000}}},	/* +9.6000E-01=F(  +12.96,     +12) */
{62, 0, 0,__LINE__, {{0x3fe8a3d7, 0x0a3d7500}, {0x402b8a3d, 0x70a3d750}, {0x402a0000, 0x00000000}}},	/* +7.7000E-01=F(  +13.77,     +13) */
{62, 0, 0,__LINE__, {{0x3fe28f5c, 0x28f5c6f0}, {0x402d28f5, 0xc28f5c6f}, {0x402c0000, 0x00000000}}},	/* +5.8000E-01=F(  +14.58,     +14) */
{62, 0, 0,__LINE__, {{0x3fd8f5c2, 0x8f5c31c0}, {0x402ec7ae, 0x147ae18e}, {0x402e0000, 0x00000000}}},	/* +3.9000E-01=F(  +15.39,     +15) */
{62, 0, 0,__LINE__, {{0x3fc99999, 0x9999ab00}, {0x40303333, 0x33333356}, {0x40300000, 0x00000000}}},	/* +2.0000E-01=F(   +16.2,     +16) */
{62, 0, 0,__LINE__, {{0x3f847ae1, 0x47af2800}, {0x4031028f, 0x5c28f5e5}, {0x40310000, 0x00000000}}},	/* +1.0000E-02=F(  +17.01,     +17) */
{62, 0, 0,__LINE__, {{0x3fea3d70, 0xa3d70e80}, {0x4031d1eb, 0x851eb874}, {0x40310000, 0x00000000}}},	/* +8.2000E-01=F(  +17.82,     +17) */
{62, 0, 0,__LINE__, {{0x3fe428f5, 0xc28f6060}, {0x4032a147, 0xae147b03}, {0x40320000, 0x00000000}}},	/* +6.3000E-01=F(  +18.63,     +18) */
{62, 0, 0,__LINE__, {{0x3fdc28f5, 0xc28f6480}, {0x403370a3, 0xd70a3d92}, {0x40330000, 0x00000000}}},	/* +4.4000E-01=F(  +19.44,     +19) */
{62, 0, 0,__LINE__, {{0x3fd00000, 0x00000840}, {0x40344000, 0x00000021}, {0x40340000, 0x00000000}}},	/* +2.5000E-01=F(  +20.25,     +20) */
{62, 0, 0,__LINE__, {{0x3faeb851, 0xeb856000}, {0x40350f5c, 0x28f5c2b0}, {0x40350000, 0x00000000}}},	/* +6.0000E-02=F(  +21.06,     +21) */
{62, 0, 0,__LINE__, {{0x3febd70a, 0x3d70a7e0}, {0x4035deb8, 0x51eb853f}, {0x40350000, 0x00000000}}},	/* +8.7000E-01=F(  +21.87,     +21) */
{62, 0, 0,__LINE__, {{0x3fe5c28f, 0x5c28f9c0}, {0x4036ae14, 0x7ae147ce}, {0x40360000, 0x00000000}}},	/* +6.8000E-01=F(  +22.68,     +22) */
{62, 0, 0,__LINE__, {{0x3fdf5c28, 0xf5c29740}, {0x40377d70, 0xa3d70a5d}, {0x40370000, 0x00000000}}},	/* +4.9000E-01=F(  +23.49,     +23) */
{62, 0, 0,__LINE__, {{0x3fd33333, 0x33333b00}, {0x40384ccc, 0xccccccec}, {0x40380000, 0x00000000}}},	/* +3.0000E-01=F(   +24.3,     +24) */
{62, 0, 0,__LINE__, {{0x3fbc28f5, 0xc28f7b00}, {0x40391c28, 0xf5c28f7b}, {0x40390000, 0x00000000}}},	/* +1.1000E-01=F(  +25.11,     +25) */
{62, 0, 0,__LINE__, {{0x3fed70a3, 0xd70a4140}, {0x4039eb85, 0x1eb8520a}, {0x40390000, 0x00000000}}},	/* +9.2000E-01=F(  +25.92,     +25) */
{62, 0, 0,__LINE__, {{0x3fe75c28, 0xf5c29320}, {0x403abae1, 0x47ae1499}, {0x403a0000, 0x00000000}}},	/* +7.3000E-01=F(  +26.73,     +26) */
{62, 0, 0,__LINE__, {{0x3fe147ae, 0x147ae500}, {0x403b8a3d, 0x70a3d728}, {0x403b0000, 0x00000000}}},	/* +5.4000E-01=F(  +27.54,     +27) */
{62, 0, 0,__LINE__, {{0x3fd66666, 0x66666dc0}, {0x403c5999, 0x999999b7}, {0x403c0000, 0x00000000}}},	/* +3.5000E-01=F(  +28.35,     +28) */
{62, 0, 0,__LINE__, {{0x3fc47ae1, 0x47ae2300}, {0x403d28f5, 0xc28f5c46}, {0x403d0000, 0x00000000}}},	/* +1.6000E-01=F(  +29.16,     +29) */
{62, 0, 0,__LINE__, {{0x3fef0a3d, 0x70a3daa0}, {0x403df851, 0xeb851ed5}, {0x403d0000, 0x00000000}}},	/* +9.7000E-01=F(  +29.97,     +29) */
{62, 0, 0,__LINE__, {{0x3fe8f5c2, 0x8f5c2c80}, {0x403ec7ae, 0x147ae164}, {0x403e0000, 0x00000000}}},	/* +7.8000E-01=F(  +30.78,     +30) */
{62, 0, 0,__LINE__, {{0x3fe2e147, 0xae147e60}, {0x403f970a, 0x3d70a3f3}, {0x403f0000, 0x00000000}}},	/* +5.9000E-01=F(  +31.59,     +31) */
{62, 0, 0,__LINE__, {{0x3fd99999, 0x9999a080}, {0x40403333, 0x33333341}, {0x40400000, 0x00000000}}},	/* +4.0000E-01=F(   +32.4,     +32) */
{62, 0, 0,__LINE__, {{0x3fcae147, 0xae148900}, {0x40409ae1, 0x47ae1489}, {0x40408000, 0x00000000}}},	/* +2.1000E-01=F(  +33.21,     +33) */
{62, 0, 0,__LINE__, {{0x3f947ae1, 0x47ae8800}, {0x4041028f, 0x5c28f5d1}, {0x40410000, 0x00000000}}},	/* +2.0000E-02=F(  +34.02,     +34) */
{62, 0, 0,__LINE__, {{0x3fea8f5c, 0x28f5c640}, {0x40416a3d, 0x70a3d719}, {0x40410000, 0x00000000}}},	/* +8.3000E-01=F(  +34.83,     +34) */
{62, 0, 0,__LINE__, {{0x3fe47ae1, 0x47ae1840}, {0x4041d1eb, 0x851eb861}, {0x40418000, 0x00000000}}},	/* +6.4000E-01=F(  +35.64,     +35) */
{62, 0, 0,__LINE__, {{0x3fdccccc, 0xccccd480}, {0x40423999, 0x999999a9}, {0x40420000, 0x00000000}}},	/* +4.5000E-01=F(  +36.45,     +36) */
{62, 0, 0,__LINE__, {{0x3fd0a3d7, 0x0a3d7880}, {0x4042a147, 0xae147af1}, {0x40428000, 0x00000000}}},	/* +2.6000E-01=F(  +37.26,     +37) */
{62, 0, 0,__LINE__, {{0x3fb1eb85, 0x1eb87200}, {0x404308f5, 0xc28f5c39}, {0x40430000, 0x00000000}}},	/* +7.0000E-02=F(  +38.07,     +38) */
{62, 0, 0,__LINE__, {{0x3fec28f5, 0xc28f6040}, {0x404370a3, 0xd70a3d81}, {0x40430000, 0x00000000}}},	/* +8.8000E-01=F(  +38.88,     +38) */
{62, 0, 0,__LINE__, {{0x3fe6147a, 0xe147b240}, {0x4043d851, 0xeb851ec9}, {0x40438000, 0x00000000}}},	/* +6.9000E-01=F(  +39.69,     +39) */
{62, 0, 0,__LINE__, {{0x3fe00000, 0x00000440}, {0x40444000, 0x00000011}, {0x40440000, 0x00000000}}},	/* +5.0000E-01=F(   +40.5,     +40) */
{62, 0, 0,__LINE__, {{0x3fd3d70a, 0x3d70ac80}, {0x4044a7ae, 0x147ae159}, {0x40448000, 0x00000000}}},	/* +3.1000E-01=F(  +41.31,     +41) */
{62, 0, 0,__LINE__, {{0x3fbeb851, 0xeb854200}, {0x40450f5c, 0x28f5c2a1}, {0x40450000, 0x00000000}}},	/* +1.2000E-01=F(  +42.12,     +42) */
{62, 0, 0,__LINE__, {{0x3fedc28f, 0x5c28fa40}, {0x4045770a, 0x3d70a3e9}, {0x40450000, 0x00000000}}},	/* +9.3000E-01=F(  +42.93,     +42) */
{62, 0, 0,__LINE__, {{0x3fe7ae14, 0x7ae14c40}, {0x4045deb8, 0x51eb8531}, {0x40458000, 0x00000000}}},	/* +7.4000E-01=F(  +43.74,     +43) */
{62, 0, 0,__LINE__, {{0x3fe19999, 0x99999e40}, {0x40464666, 0x66666679}, {0x40460000, 0x00000000}}},	/* +5.5000E-01=F(  +44.55,     +44) */
{62, 0, 0,__LINE__, {{0x3fd70a3d, 0x70a3e080}, {0x4046ae14, 0x7ae147c1}, {0x40468000, 0x00000000}}},	/* +3.6000E-01=F(  +45.36,     +45) */
{62, 0, 0,__LINE__, {{0x3fc5c28f, 0x5c290900}, {0x404715c2, 0x8f5c2909}, {0x40470000, 0x00000000}}},	/* +1.7000E-01=F(  +46.17,     +46) */
{62, 0, 0,__LINE__, {{0x3fef5c28, 0xf5c29440}, {0x40477d70, 0xa3d70a51}, {0x40470000, 0x00000000}}},	/* +9.8000E-01=F(  +46.98,     +46) */
{62, 0, 0,__LINE__, {{0x3fe947ae, 0x147ae640}, {0x4047e51e, 0xb851eb99}, {0x40478000, 0x00000000}}},	/* +7.9000E-01=F(  +47.79,     +47) */
{62, 0, 0,__LINE__, {{0x3fe33333, 0x33333840}, {0x40484ccc, 0xcccccce1}, {0x40480000, 0x00000000}}},	/* +6.0000E-01=F(   +48.6,     +48) */
{62, 0, 0,__LINE__, {{0x3fda3d70, 0xa3d71480}, {0x4048b47a, 0xe147ae29}, {0x40488000, 0x00000000}}},	/* +4.1000E-01=F(  +49.41,     +49) */
{62, 0, 0,__LINE__, {{0x3fcc28f5, 0xc28f7100}, {0x40491c28, 0xf5c28f71}, {0x40490000, 0x00000000}}},	/* +2.2000E-01=F(  +50.22,     +50) */
{62, 0, 0,__LINE__, {{0x3f9eb851, 0xeb85c800}, {0x404983d7, 0x0a3d70b9}, {0x40498000, 0x00000000}}},	/* +3.0000E-02=F(  +51.03,     +51) */
{62, 0, 0,__LINE__, {{0x3feae147, 0xae148040}, {0x4049eb85, 0x1eb85201}, {0x40498000, 0x00000000}}},	/* +8.4000E-01=F(  +51.84,     +51) */
{62, 0, 0,__LINE__, {{0x3fe4cccc, 0xccccd240}, {0x404a5333, 0x33333349}, {0x404a0000, 0x00000000}}},	/* +6.5000E-01=F(  +52.65,     +52) */
{62, 0, 0,__LINE__, {{0x3fdd70a3, 0xd70a4880}, {0x404abae1, 0x47ae1491}, {0x404a8000, 0x00000000}}},	/* +4.6000E-01=F(  +53.46,     +53) */
{62, 0, 0,__LINE__, {{0x3fd147ae, 0x147aec80}, {0x404b228f, 0x5c28f5d9}, {0x404b0000, 0x00000000}}},	/* +2.7000E-01=F(  +54.27,     +54) */
{62, 0, 0,__LINE__, {{0x3fb47ae1, 0x47ae4200}, {0x404b8a3d, 0x70a3d721}, {0x404b8000, 0x00000000}}},	/* +8.0000E-02=F(  +55.08,     +55) */
{62, 0, 0,__LINE__, {{0x3fec7ae1, 0x47ae1a40}, {0x404bf1eb, 0x851eb869}, {0x404b8000, 0x00000000}}},	/* +8.9000E-01=F(  +55.89,     +55) */
{62, 0, 0,__LINE__, {{0x3fe66666, 0x66666c40}, {0x404c5999, 0x999999b1}, {0x404c0000, 0x00000000}}},	/* +7.0000E-01=F(   +56.7,     +56) */
{62, 0, 0,__LINE__, {{0x3fe051eb, 0x851ebe40}, {0x404cc147, 0xae147af9}, {0x404c8000, 0x00000000}}},	/* +5.1000E-01=F(  +57.51,     +57) */
{62, 0, 0,__LINE__, {{0x3fd47ae1, 0x47ae2080}, {0x404d28f5, 0xc28f5c41}, {0x404d0000, 0x00000000}}},	/* +3.2000E-01=F(  +58.32,     +58) */
{62, 0, 0,__LINE__, {{0x3fc0a3d7, 0x0a3d8900}, {0x404d90a3, 0xd70a3d89}, {0x404d8000, 0x00000000}}},	/* +1.3000E-01=F(  +59.13,     +59) */
{62, 0, 0,__LINE__, {{0x3fee147a, 0xe147b440}, {0x404df851, 0xeb851ed1}, {0x404d8000, 0x00000000}}},	/* +9.4000E-01=F(  +59.94,     +59) */
{62, 0, 0,__LINE__, {{0x3fe80000, 0x00000640}, {0x404e6000, 0x00000019}, {0x404e0000, 0x00000000}}},	/* +7.5000E-01=F(  +60.75,     +60) */
{62, 0, 0,__LINE__, {{0x3fe1eb85, 0x1eb85840}, {0x404ec7ae, 0x147ae161}, {0x404e8000, 0x00000000}}},	/* +5.6000E-01=F(  +61.56,     +61) */
{62, 0, 0,__LINE__, {{0x3fd7ae14, 0x7ae15480}, {0x404f2f5c, 0x28f5c2a9}, {0x404f0000, 0x00000000}}},	/* +3.7000E-01=F(  +62.37,     +62) */
{62, 0, 0,__LINE__, {{0x3fc70a3d, 0x70a3f100}, {0x404f970a, 0x3d70a3f1}, {0x404f8000, 0x00000000}}},	/* +1.8000E-01=F(  +63.18,     +63) */
{62, 0, 0,__LINE__, {{0x3fefae14, 0x7ae14e40}, {0x404ffeb8, 0x51eb8539}, {0x404f8000, 0x00000000}}},	/* +9.9000E-01=F(  +63.99,     +63) */
{62, 0, 0,__LINE__, {{0x3fe99999, 0x9999a000}, {0x40503333, 0x33333340}, {0x40500000, 0x00000000}}},	/* +8.0000E-01=F(   +64.8,     +64) */
{62, 0, 0,__LINE__, {{0x3fe3851e, 0xb851f200}, {0x4050670a, 0x3d70a3e4}, {0x40504000, 0x00000000}}},	/* +6.1000E-01=F(  +65.61,     +65) */
{62, 0, 0,__LINE__, {{0x3fdae147, 0xae148800}, {0x40509ae1, 0x47ae1488}, {0x40508000, 0x00000000}}},	/* +4.2000E-01=F(  +66.42,     +66) */
{62, 0, 0,__LINE__, {{0x3fcd70a3, 0xd70a5800}, {0x4050ceb8, 0x51eb852c}, {0x4050c000, 0x00000000}}},	/* +2.3000E-01=F(  +67.23,     +67) */
{62, 0, 0,__LINE__, {{0x3fa47ae1, 0x47ae8000}, {0x4051028f, 0x5c28f5d0}, {0x40510000, 0x00000000}}},	/* +4.0000E-02=F(  +68.04,     +68) */
{62, 0, 0,__LINE__, {{0x3feb3333, 0x33333a00}, {0x40513666, 0x66666674}, {0x40510000, 0x00000000}}},	/* +8.5000E-01=F(  +68.85,     +68) */
{62, 0, 0,__LINE__, {{0x3fe51eb8, 0x51eb8c00}, {0x40516a3d, 0x70a3d718}, {0x40514000, 0x00000000}}},	/* +6.6000E-01=F(  +69.66,     +69) */
{62, 0, 0,__LINE__, {{0x3fde147a, 0xe147bc00}, {0x40519e14, 0x7ae147bc}, {0x40518000, 0x00000000}}},	/* +4.7000E-01=F(  +70.47,     +70) */
{62, 0, 0,__LINE__, {{0x3fd1eb85, 0x1eb86000}, {0x4051d1eb, 0x851eb860}, {0x4051c000, 0x00000000}}},	/* +2.8000E-01=F(  +71.28,     +71) */
{62, 0, 0,__LINE__, {{0x3fb70a3d, 0x70a41000}, {0x405205c2, 0x8f5c2904}, {0x40520000, 0x00000000}}},	/* +9.0000E-02=F(  +72.09,     +72) */
{62, 0, 0,__LINE__, {{0x3feccccc, 0xccccd400}, {0x40523999, 0x999999a8}, {0x40520000, 0x00000000}}},	/* +9.0000E-01=F(   +72.9,     +72) */
{62, 0, 0,__LINE__, {{0x3fe6b851, 0xeb852600}, {0x40526d70, 0xa3d70a4c}, {0x40524000, 0x00000000}}},	/* +7.1000E-01=F(  +73.71,     +73) */
{62, 0, 0,__LINE__, {{0x3fe0a3d7, 0x0a3d7800}, {0x4052a147, 0xae147af0}, {0x40528000, 0x00000000}}},	/* +5.2000E-01=F(  +74.52,     +74) */
{62, 0, 0,__LINE__, {{0x3fd51eb8, 0x51eb9400}, {0x4052d51e, 0xb851eb94}, {0x4052c000, 0x00000000}}},	/* +3.3000E-01=F(  +75.33,     +75) */
{62, 0, 0,__LINE__, {{0x3fc1eb85, 0x1eb87000}, {0x405308f5, 0xc28f5c38}, {0x40530000, 0x00000000}}},	/* +1.4000E-01=F(  +76.14,     +76) */
{62, 0, 0,__LINE__, {{0x3fee6666, 0x66666e00}, {0x40533ccc, 0xccccccdc}, {0x40530000, 0x00000000}}},	/* +9.5000E-01=F(  +76.95,     +76) */
{62, 0, 0,__LINE__, {{0x3fe851eb, 0x851ec000}, {0x405370a3, 0xd70a3d80}, {0x40534000, 0x00000000}}},	/* +7.6000E-01=F(  +77.76,     +77) */
{62, 0, 0,__LINE__, {{0x3fe23d70, 0xa3d71200}, {0x4053a47a, 0xe147ae24}, {0x40538000, 0x00000000}}},	/* +5.7000E-01=F(  +78.57,     +78) */
{62, 0, 0,__LINE__, {{0x3fd851eb, 0x851ec800}, {0x4053d851, 0xeb851ec8}, {0x4053c000, 0x00000000}}},	/* +3.8000E-01=F(  +79.38,     +79) */
{62, 0, 0,__LINE__, {{0x3fc851eb, 0x851ed800}, {0x40540c28, 0xf5c28f6c}, {0x40540000, 0x00000000}}},	/* +1.9000E-01=F(  +80.19,     +80) */
{62, 0, 0,__LINE__, {{0x3fe00000, 0x00000000}, {0x43200000, 0x00000001}, {0x43200000, 0x00000000}}},	/* +5.0000E-01=F(+2.252e+15,+2.252e+15) */
{62, 0, 0,__LINE__, {{0x00100000, 0x00000000}, {0x00100000, 0x00000000}, {0x00000000, 0x00000000}}},	/* +2.2251E-308=F(+2.225e-308,      +0) */
{62, 0, 0,__LINE__, {{0x00000000, 0x00000000}, {0x7fefffff, 0xffffffff}, {0x7fefffff, 0xffffffff}}},	/* +0.0000E+00=F(+1.798e+308,+1.798e+308) */
{62, 0, 0,__LINE__, {{0x00000000, 0x00000000}, {0x7ff80000, 0x00000000}, {0x7ff80000, 0x00000000}}},	/* +0.0000E+00=F(    +NaN,    +NaN) */
{62, 0, 0,__LINE__, {{0x00000000, 0x00000000}, {0x7ff00000, 0x00000000}, {0x7ff00000, 0x00000000}}},	/* +0.0000E+00=F(    +Inf,    +Inf) */
0,};
void
test_modf(int m)	{ run_vector_1(m, modf_vec,(char *)(modf),"modf","dddp");}
