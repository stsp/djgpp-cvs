#ifdef __DJGPP__
	extern double (log2) (double);
#endif
#include "test.h"
 one_line_type log2_vec[] = {
{62, 0, 0,__LINE__, {{0xc01a934f, 0x0979a371}, {0x3f847ae1, 0x47ae147b}}},	/* -6.6439E+00=F(   +0.01) */
{62, 0, 0,__LINE__, {{0xc015252c, 0xec9fd2a3}, {0x3f9a3d70, 0xa3d70a3e}}},	/* -5.2863E+00=F(+0.02563) */
{62, 0, 0,__LINE__, {{0xc01265d9, 0x628e8576}, {0x3fa51eb8, 0x51eb851f}}},	/* -4.5995E+00=F(+0.04125) */
{62, 0, 0,__LINE__, {{0xc0108b53, 0xb806b041}, {0x3fad1eb8, 0x51eb851f}}},	/* -4.1361E+00=F(+0.05688) */
{62, 0, 0,__LINE__, {{0xc00e4978, 0xef1dfa2c}, {0x3fb28f5c, 0x28f5c290}}},	/* -3.7859E+00=F( +0.0725) */
{62, 0, 0,__LINE__, {{0xc00c08d0, 0xf97df42b}, {0x3fb68f5c, 0x28f5c290}}},	/* -3.5043E+00=F(+0.08813) */
{62, 0, 0,__LINE__, {{0xc00a2689, 0x66908358}, {0x3fba8f5c, 0x28f5c290}}},	/* -3.2688E+00=F( +0.1038) */
{62, 0, 0,__LINE__, {{0xc008880b, 0x1191d3e5}, {0x3fbe8f5c, 0x28f5c290}}},	/* -3.0664E+00=F( +0.1194) */
{62, 0, 0,__LINE__, {{0xc0071c9b, 0x9d83aac6}, {0x3fc147ae, 0x147ae148}}},	/* -2.8890E+00=F(  +0.135) */
{62, 0, 0,__LINE__, {{0xc005d905, 0x26537a6d}, {0x3fc347ae, 0x147ae148}}},	/* -2.7310E+00=F( +0.1506) */
{62, 0, 0,__LINE__, {{0xc004b566, 0x280f1c35}, {0x3fc547ae, 0x147ae148}}},	/* -2.5886E+00=F( +0.1663) */
{62, 0, 0,__LINE__, {{0xc003abfe, 0x26764105}, {0x3fc747ae, 0x147ae148}}},	/* -2.4590E+00=F( +0.1819) */
{62, 0, 0,__LINE__, {{0xc002b879, 0x791ead25}, {0x3fc947ae, 0x147ae148}}},	/* -2.3401E+00=F( +0.1975) */
{62, 0, 0,__LINE__, {{0xc001d781, 0xea144f04}, {0x3fcb47ae, 0x147ae148}}},	/* -2.2302E+00=F( +0.2131) */
{62, 0, 0,__LINE__, {{0xc0010676, 0xd6536ad3}, {0x3fcd47ae, 0x147ae148}}},	/* -2.1282E+00=F( +0.2288) */
{62, 0, 0,__LINE__, {{0xc000433d, 0x1ae76fa0}, {0x3fcf47ae, 0x147ae148}}},	/* -2.0328E+00=F( +0.2444) */
{62, 0, 0,__LINE__, {{0xbfff183b, 0xdec2c95f}, {0x3fd0a3d7, 0x0a3d70a4}}},	/* -1.9434E+00=F(   +0.26) */
{62, 0, 0,__LINE__, {{0xbffdbf5e, 0xe1570241}, {0x3fd1a3d7, 0x0a3d70a4}}},	/* -1.8592E+00=F( +0.2756) */
{62, 0, 0,__LINE__, {{0xbffc7987, 0x4c176913}, {0x3fd2a3d7, 0x0a3d70a4}}},	/* -1.7797E+00=F( +0.2913) */
{62, 0, 0,__LINE__, {{0xbffb44b7, 0xef0ed37a}, {0x3fd3a3d7, 0x0a3d70a4}}},	/* -1.7043E+00=F( +0.3069) */
{62, 0, 0,__LINE__, {{0xbffa1f3f, 0x8478afb5}, {0x3fd4a3d7, 0x0a3d70a4}}},	/* -1.6326E+00=F( +0.3225) */
{62, 0, 0,__LINE__, {{0xbff907aa, 0x4fb58040}, {0x3fd5a3d7, 0x0a3d70a4}}},	/* -1.5644E+00=F( +0.3381) */
{62, 0, 0,__LINE__, {{0xbff7fcb6, 0xfc8598fd}, {0x3fd6a3d7, 0x0a3d70a4}}},	/* -1.4992E+00=F( +0.3538) */
{62, 0, 0,__LINE__, {{0xbff6fd4d, 0xe6771852}, {0x3fd7a3d7, 0x0a3d70a4}}},	/* -1.4368E+00=F( +0.3694) */
{62, 0, 0,__LINE__, {{0xbff6087a, 0x2f31cae8}, {0x3fd8a3d7, 0x0a3d70a4}}},	/* -1.3771E+00=F(  +0.385) */
{62, 0, 0,__LINE__, {{0xbff51d64, 0x350aec68}, {0x3fd9a3d7, 0x0a3d70a4}}},	/* -1.3197E+00=F( +0.4006) */
{62, 0, 0,__LINE__, {{0xbff43b4d, 0x18f07562}, {0x3fdaa3d7, 0x0a3d70a4}}},	/* -1.2645E+00=F( +0.4163) */
{62, 0, 0,__LINE__, {{0xbff3618b, 0x17a17a46}, {0x3fdba3d7, 0x0a3d70a4}}},	/* -1.2113E+00=F( +0.4319) */
{62, 0, 0,__LINE__, {{0xbff28f86, 0x891c553d}, {0x3fdca3d7, 0x0a3d70a4}}},	/* -1.1600E+00=F( +0.4475) */
{62, 0, 0,__LINE__, {{0xbff1c4b7, 0x6402bef6}, {0x3fdda3d7, 0x0a3d70a4}}},	/* -1.1105E+00=F( +0.4631) */
{62, 0, 0,__LINE__, {{0xbff100a3, 0x2aaa0315}, {0x3fdea3d7, 0x0a3d70a4}}},	/* -1.0627E+00=F( +0.4788) */
{62, 0, 0,__LINE__, {{0xbff042db, 0x2d77795c}, {0x3fdfa3d7, 0x0a3d70a4}}},	/* -1.0163E+00=F( +0.4944) */
{62, 0, 0,__LINE__, {{0xbfef15f6, 0x25347e57}, {0x3fe051eb, 0x851eb852}}},	/* -9.7143E-01=F(   +0.51) */
{62, 0, 0,__LINE__, {{0xbfedb14f, 0x2d22b5d6}, {0x3fe0d1eb, 0x851eb852}}},	/* -9.2789E-01=F( +0.5256) */
{62, 0, 0,__LINE__, {{0xbfec571a, 0xf702e417}, {0x3fe151eb, 0x851eb852}}},	/* -8.8563E-01=F( +0.5413) */
{62, 0, 0,__LINE__, {{0xbfeb06c1, 0x3eb5bb3f}, {0x3fe1d1eb, 0x851eb852}}},	/* -8.4457E-01=F( +0.5569) */
{62, 0, 0,__LINE__, {{0xbfe9bfb6, 0x64bb5358}, {0x3fe251eb, 0x851eb852}}},	/* -8.0465E-01=F( +0.5725) */
{62, 0, 0,__LINE__, {{0xbfe8817a, 0x11809027}, {0x3fe2d1eb, 0x851eb852}}},	/* -7.6581E-01=F( +0.5881) */
{62, 0, 0,__LINE__, {{0xbfe74b96, 0x06675560}, {0x3fe351eb, 0x851eb852}}},	/* -7.2798E-01=F( +0.6038) */
{62, 0, 0,__LINE__, {{0xbfe61d9d, 0x15863047}, {0x3fe3d1eb, 0x851eb852}}},	/* -6.9111E-01=F( +0.6194) */
{62, 0, 0,__LINE__, {{0xbfe4f72a, 0x3a555957}, {0x3fe451eb, 0x851eb852}}},	/* -6.5517E-01=F(  +0.635) */
{62, 0, 0,__LINE__, {{0xbfe3d7df, 0xce7b3b47}, {0x3fe4d1eb, 0x851eb852}}},	/* -6.2010E-01=F( +0.6506) */
{62, 0, 0,__LINE__, {{0xbfe2bf66, 0xd6b70c50}, {0x3fe551eb, 0x851eb852}}},	/* -5.8586E-01=F( +0.6663) */
{62, 0, 0,__LINE__, {{0xbfe1ad6e, 0x648e7ba5}, {0x3fe5d1eb, 0x851eb852}}},	/* -5.5242E-01=F( +0.6819) */
{62, 0, 0,__LINE__, {{0xbfe0a1ab, 0x09ebbb76}, {0x3fe651eb, 0x851eb852}}},	/* -5.1973E-01=F( +0.6975) */
{62, 0, 0,__LINE__, {{0xbfdf37ac, 0xb8929a08}, {0x3fe6d1eb, 0x851eb852}}},	/* -4.8777E-01=F( +0.7131) */
{62, 0, 0,__LINE__, {{0xbfdd375d, 0x0acb3e5f}, {0x3fe751eb, 0x851eb852}}},	/* -4.5650E-01=F( +0.7288) */
{62, 0, 0,__LINE__, {{0xbfdb41eb, 0xbf8afeaa}, {0x3fe7d1eb, 0x851eb852}}},	/* -4.2590E-01=F( +0.7444) */
{62, 0, 0,__LINE__, {{0xbfd956e5, 0x3b190311}, {0x3fe851eb, 0x851eb852}}},	/* -3.9593E-01=F(   +0.76) */
{62, 0, 0,__LINE__, {{0xbfd775dc, 0xf0d07077}, {0x3fe8d1eb, 0x851eb852}}},	/* -3.6657E-01=F( +0.7756) */
{62, 0, 0,__LINE__, {{0xbfd59e6c, 0xd2f0687c}, {0x3fe951eb, 0x851eb852}}},	/* -3.3779E-01=F( +0.7913) */
{62, 0, 0,__LINE__, {{0xbfd3d034, 0xd085ae18}, {0x3fe9d1eb, 0x851eb852}}},	/* -3.0958E-01=F( +0.8069) */
{62, 0, 0,__LINE__, {{0xbfd20ada, 0x5fce7593}, {0x3fea51eb, 0x851eb852}}},	/* -2.8191E-01=F( +0.8225) */
{62, 0, 0,__LINE__, {{0xbfd04e08, 0x13afa4db}, {0x3fead1eb, 0x851eb852}}},	/* -2.5476E-01=F( +0.8381) */
{62, 0, 0,__LINE__, {{0xbfcd32da, 0x7602e017}, {0x3feb51eb, 0x851eb852}}},	/* -2.2811E-01=F( +0.8538) */
{62, 0, 0,__LINE__, {{0xbfc9d97b, 0x11423f6c}, {0x3febd1eb, 0x851eb852}}},	/* -2.0195E-01=F( +0.8694) */
{62, 0, 0,__LINE__, {{0xbfc68f61, 0x86b00193}, {0x3fec51eb, 0x851eb852}}},	/* -1.7625E-01=F(  +0.885) */
{62, 0, 0,__LINE__, {{0xbfc35404, 0xf989cd09}, {0x3fecd1eb, 0x851eb852}}},	/* -1.5100E-01=F( +0.9006) */
{62, 0, 0,__LINE__, {{0xbfc026e3, 0x9d1e060d}, {0x3fed51eb, 0x851eb852}}},	/* -1.2619E-01=F( +0.9163) */
{62, 0, 0,__LINE__, {{0xbfba0f04, 0x74fb2400}, {0x3fedd1eb, 0x851eb852}}},	/* -1.0179E-01=F( +0.9319) */
{62, 0, 0,__LINE__, {{0xbfb3ead7, 0x80b22f85}, {0x3fee51eb, 0x851eb852}}},	/* -7.7802E-02=F( +0.9475) */
{62, 0, 0,__LINE__, {{0xbfabc0c3, 0x7028cf13}, {0x3feed1eb, 0x851eb852}}},	/* -5.4205E-02=F( +0.9631) */
{62, 0, 0,__LINE__, {{0xbf9fbb3c, 0xd72f07b7}, {0x3fef51eb, 0x851eb852}}},	/* -3.0988E-02=F( +0.9788) */
{62, 0, 0,__LINE__, {{0xbf80aab1, 0x30e7c565}, {0x3fefd1eb, 0x851eb852}}},	/* -8.1381E-03=F( +0.9944) */
{62, 0, 0,__LINE__, {{0x3f8d664e, 0xcee35b7f}, {0x3ff028f5, 0xc28f5c29}}},	/* +1.4355E-02=F(   +1.01) */
{62, 0, 0,__LINE__, {{0x3fa2b090, 0xa13535ef}, {0x3ff068f5, 0xc28f5c29}}},	/* +3.6503E-02=F(  +1.026) */
{62, 0, 0,__LINE__, {{0x3ff01d79, 0x07b3599c}, {0x4000147a, 0xe147ae14}}},	/* +1.0072E+00=F(   +2.01) */
{62, 0, 0,__LINE__, {{0x3ff078a3, 0x96d3a550}, {0x4000547a, 0xe147ae14}}},	/* +1.0295E+00=F(  +2.041) */
{62, 0, 0,__LINE__, {{0x3ff0d26b, 0x8d8d18f2}, {0x4000947a, 0xe147ae14}}},	/* +1.0514E+00=F(  +2.072) */
{62, 0, 0,__LINE__, {{0x3ff12adb, 0x891238c0}, {0x4000d47a, 0xe147ae14}}},	/* +1.0730E+00=F(  +2.104) */
{62, 0, 0,__LINE__, {{0x3ff181fd, 0xae61754a}, {0x4001147a, 0xe147ae14}}},	/* +1.0942E+00=F(  +2.135) */
{62, 0, 0,__LINE__, {{0x3ff1d7db, 0xb141e2d8}, {0x4001547a, 0xe147ae14}}},	/* +1.1152E+00=F(  +2.166) */
{62, 0, 0,__LINE__, {{0x3ff22c7e, 0xdabfd510}, {0x4001947a, 0xe147ae14}}},	/* +1.1359E+00=F(  +2.197) */
{62, 0, 0,__LINE__, {{0x3ff27ff0, 0x0f3439ad}, {0x4001d47a, 0xe147ae14}}},	/* +1.1562E+00=F(  +2.229) */
{62, 0, 0,__LINE__, {{0x3ff2d237, 0xd3e07e49}, {0x4002147a, 0xe147ae14}}},	/* +1.1763E+00=F(   +2.26) */
{62, 0, 0,__LINE__, {{0x3ff3235e, 0x5427dc0f}, {0x4002547a, 0xe147ae14}}},	/* +1.1961E+00=F(  +2.291) */
{62, 0, 0,__LINE__, {{0x3ff3736b, 0x666e0d38}, {0x4002947a, 0xe147ae14}}},	/* +1.2157E+00=F(  +2.322) */
{62, 0, 0,__LINE__, {{0x3ff3c266, 0x90a2b037}, {0x4002d47a, 0xe147ae14}}},	/* +1.2350E+00=F(  +2.354) */
{62, 0, 0,__LINE__, {{0x3ff41057, 0x0c7ff0b5}, {0x4003147a, 0xe147ae14}}},	/* +1.2540E+00=F(  +2.385) */
{62, 0, 0,__LINE__, {{0x3ff45d43, 0xcb8274ac}, {0x4003547a, 0xe147ae14}}},	/* +1.2728E+00=F(  +2.416) */
{62, 0, 0,__LINE__, {{0x3ff4a933, 0x7aa001f2}, {0x4003947a, 0xe147ae14}}},	/* +1.2913E+00=F(  +2.447) */
{62, 0, 0,__LINE__, {{0x3ff4f42c, 0x85c1d45f}, {0x4003d47a, 0xe147ae14}}},	/* +1.3096E+00=F(  +2.479) */
{62, 0, 0,__LINE__, {{0x3ff53e35, 0x1b072d52}, {0x4004147a, 0xe147ae14}}},	/* +1.3277E+00=F(   +2.51) */
{62, 0, 0,__LINE__, {{0x3ff58753, 0x2dd440ad}, {0x4004547a, 0xe147ae14}}},	/* +1.3455E+00=F(  +2.541) */
{62, 0, 0,__LINE__, {{0x3ff5cf8c, 0x79b148b0}, {0x4004947a, 0xe147ae14}}},	/* +1.3632E+00=F(  +2.572) */
{62, 0, 0,__LINE__, {{0x3ff616e6, 0x84fd3833}, {0x4004d47a, 0xe147ae14}}},	/* +1.3806E+00=F(  +2.604) */
{62, 0, 0,__LINE__, {{0x3ff65d66, 0xa37738a5}, {0x4005147a, 0xe147ae14}}},	/* +1.3978E+00=F(  +2.635) */
{62, 0, 0,__LINE__, {{0x3ff6a311, 0xf8a1ddef}, {0x4005547a, 0xe147ae14}}},	/* +1.4148E+00=F(  +2.666) */
{62, 0, 0,__LINE__, {{0x3ff6e7ed, 0x7a02bdb5}, {0x4005947a, 0xe147ae14}}},	/* +1.4316E+00=F(  +2.697) */
{62, 0, 0,__LINE__, {{0x3ff72bfd, 0xf140dff7}, {0x4005d47a, 0xe147ae14}}},	/* +1.4482E+00=F(  +2.729) */
{62, 0, 0,__LINE__, {{0x3ff76f47, 0xfe244cf6}, {0x4006147a, 0xe147ae14}}},	/* +1.4647E+00=F(   +2.76) */
{62, 0, 0,__LINE__, {{0x3ff7b1d0, 0x1878ce85}, {0x4006547a, 0xe147ae14}}},	/* +1.4809E+00=F(  +2.791) */
{62, 0, 0,__LINE__, {{0x3ff7f39a, 0x91d5d151}, {0x4006947a, 0xe147ae14}}},	/* +1.4970E+00=F(  +2.822) */
{62, 0, 0,__LINE__, {{0x3ff834ab, 0x974d2caa}, {0x4006d47a, 0xe147ae14}}},	/* +1.5129E+00=F(  +2.854) */
{62, 0, 0,__LINE__, {{0x3ff87507, 0x330274b4}, {0x4007147a, 0xe147ae14}}},	/* +1.5286E+00=F(  +2.885) */
{62, 0, 0,__LINE__, {{0x3ff8b4b1, 0x4dac5b45}, {0x4007547a, 0xe147ae14}}},	/* +1.5441E+00=F(  +2.916) */
{62, 0, 0,__LINE__, {{0x3ff8f3ad, 0xb00186ac}, {0x4007947a, 0xe147ae14}}},	/* +1.5595E+00=F(  +2.947) */
{62, 0, 0,__LINE__, {{0x3ff93200, 0x04122b1c}, {0x4007d47a, 0xe147ae14}}},	/* +1.5747E+00=F(  +2.979) */
{62, 0, 0,__LINE__, {{0x3ff96fab, 0xd68f9b3c}, {0x4008147a, 0xe147ae14}}},	/* +1.5898E+00=F(   +3.01) */
{62, 0, 0,__LINE__, {{0x3ff9acb4, 0x9802ede2}, {0x4008547a, 0xe147ae14}}},	/* +1.6047E+00=F(  +3.041) */
{62, 0, 0,__LINE__, {{0x400aa20b, 0x8d535040}, {0x40241999, 0x9999999a}}},	/* +3.3291E+00=F(  +10.05) */
{62, 0, 0,__LINE__, {{0x400d7e4f, 0xc706f1dc}, {0x4029c0cc, 0xcccccccd}}},	/* +3.6867E+00=F(  +12.88) */
{62, 0, 0,__LINE__, {{0x400fc8a9, 0xa0469722}, {0x402f6800, 0x00000000}}},	/* +3.9730E+00=F(   +15.7) */
{62, 0, 0,__LINE__, {{0x4010d8d9, 0x5b05dc2b}, {0x40328799, 0x9999999a}}},	/* +4.2118E+00=F(  +18.53) */
{62, 0, 0,__LINE__, {{0x4011aa95, 0xa294cc6c}, {0x40355b33, 0x33333334}}},	/* +4.4166E+00=F(  +21.36) */
{62, 0, 0,__LINE__, {{0x40126236, 0x4456d8d7}, {0x40382ecc, 0xccccccce}}},	/* +4.5959E+00=F(  +24.18) */
{62, 0, 0,__LINE__, {{0x40130584, 0x861d304a}, {0x403b0266, 0x66666668}}},	/* +4.7554E+00=F(  +27.01) */
{62, 0, 0,__LINE__, {{0x4013988e, 0x012e8d19}, {0x403dd600, 0x00000002}}},	/* +4.8990E+00=F(  +29.84) */
{62, 0, 0,__LINE__, {{0x40141e45, 0xd872993a}, {0x404054cc, 0xccccccce}}},	/* +5.0296E+00=F(  +32.66) */
{62, 0, 0,__LINE__, {{0x401498e2, 0xc51b6b24}, {0x4041be99, 0x9999999b}}},	/* +5.1493E+00=F(  +35.49) */
{62, 0, 0,__LINE__, {{0x40150a18, 0xfc11a6ce}, {0x40432866, 0x66666668}}},	/* +5.2599E+00=F(  +38.32) */
{62, 0, 0,__LINE__, {{0x4015733f, 0x6a53ce89}, {0x40449233, 0x33333335}}},	/* +5.3625E+00=F(  +41.14) */
{62, 0, 0,__LINE__, {{0x4015d568, 0x8b107bef}, {0x4045fc00, 0x00000002}}},	/* +5.4584E+00=F(  +43.97) */
{62, 0, 0,__LINE__, {{0x40163173, 0x7d187290}, {0x404765cc, 0xcccccccf}}},	/* +5.5483E+00=F(   +46.8) */
{62, 0, 0,__LINE__, {{0x40168818, 0x1393f4ff}, {0x4048cf99, 0x9999999c}}},	/* +5.6329E+00=F(  +49.62) */
{62, 0, 0,__LINE__, {{0x4016d9ef, 0x8dd7b343}, {0x404a3966, 0x66666669}}},	/* +5.7128E+00=F(  +52.45) */
{62, 0, 0,__LINE__, {{0x4017277b, 0x04acd6c1}, {0x404ba333, 0x33333336}}},	/* +5.7886E+00=F(  +55.28) */
{62, 0, 0,__LINE__, {{0x40177128, 0x3cd4213e}, {0x404d0d00, 0x00000003}}},	/* +5.8605E+00=F(   +58.1) */
{62, 0, 0,__LINE__, {{0x4017b755, 0x54003bb5}, {0x404e76cc, 0xccccccd0}}},	/* +5.9290E+00=F(  +60.93) */
{62, 0, 0,__LINE__, {{0x4017fa53, 0x983e5092}, {0x404fe099, 0x9999999d}}},	/* +5.9945E+00=F(  +63.75) */
{62, 0, 0,__LINE__, {{0x40183a69, 0xc173690b}, {0x4050a533, 0x33333335}}},	/* +6.0570E+00=F(  +66.58) */
{62, 0, 0,__LINE__, {{0x401877d5, 0xb45dbd86}, {0x40515a19, 0x9999999b}}},	/* +6.1170E+00=F(  +69.41) */
{62, 0, 0,__LINE__, {{0x4018b2cd, 0xeb81412e}, {0x40520f00, 0x00000001}}},	/* +6.1746E+00=F(  +72.23) */
{62, 0, 0,__LINE__, {{0x4018eb82, 0x9ac2f941}, {0x4052c3e6, 0x66666667}}},	/* +6.2300E+00=F(  +75.06) */
{62, 0, 0,__LINE__, {{0x4019221e, 0x9d15f56e}, {0x405378cc, 0xcccccccd}}},	/* +6.2833E+00=F(  +77.89) */
{62, 0, 0,__LINE__, {{0x401956c8, 0x37c506cb}, {0x40542db3, 0x33333333}}},	/* +6.3347E+00=F(  +80.71) */
{62, 0, 0,__LINE__, {{0x401989a1, 0xbc1bbd76}, {0x4054e299, 0x99999999}}},	/* +6.3844E+00=F(  +83.54) */
{62, 0, 0,__LINE__, {{0x4019baca, 0x0e267a32}, {0x4055977f, 0xffffffff}}},	/* +6.4324E+00=F(  +86.37) */
{62, 0, 0,__LINE__, {{0x4019ea5d, 0x15bd6d90}, {0x40564c66, 0x66666665}}},	/* +6.4789E+00=F(  +89.19) */
{62, 0, 0,__LINE__, {{0x401a1874, 0x1deb517b}, {0x4057014c, 0xcccccccb}}},	/* +6.5239E+00=F(  +92.02) */
{62, 0, 0,__LINE__, {{0x401a4526, 0x25e41b72}, {0x4057b633, 0x33333331}}},	/* +6.5675E+00=F(  +94.85) */
{62, 0, 0,__LINE__, {{0x401a7088, 0x26173100}, {0x40586b19, 0x99999997}}},	/* +6.6099E+00=F(  +97.67) */
{62, 0, 0,__LINE__, {{0x401a9aad, 0x4b6679d8}, {0x40591fff, 0xfffffffd}}},	/* +6.6511E+00=F(  +100.5) */
{62, 1, 0,__LINE__, {{0xfff00000, 0x00000000}, {0xbff00000, 0x00000000}}},	/* -Inf       =F(      -1) */
{62, 2, 0,__LINE__, {{0xfff00000, 0x00000000}, {0x00000000, 0x00000000}}},	/* -Inf       =F(      +0) */
{62, 0, 0,__LINE__, {{0x00000000, 0x00000000}, {0x3ff00000, 0x00000000}}},	/* +0.0000E+00=F(      +1) */
{62, 0, 0,__LINE__, {{0x40900000, 0x00000000}, {0x7fefffff, 0xffffffff}}},	/* +1.0240E+03=F(+1.798e+308) */
{62, 0, 0,__LINE__, {{0xc08ff000, 0x00000000}, {0x00100000, 0x00000000}}},	/* -1.0220E+03=F(+2.225e-308) */
{62, 1, 0,__LINE__, {{0xfff00000, 0x00000000}, {0xfff00000, 0x00000000}}},	/* -Inf       =F(    -Inf) */
{62, 0, 0,__LINE__, {{0x7ff00000, 0x00000000}, {0x7ff00000, 0x00000000}}},	/* +Inf       =F(    +Inf) */
{62, 0, 0,__LINE__, {{0x7ff80000, 0x00000000}, {0x7ff80000, 0x00000000}}},	/* +NaN       =F(    +NaN) */
{62, 0, 0,__LINE__, {{0xfff80000, 0x00000000}, {0xfff80000, 0x00000000}}},	/* -NaN       =F(    -NaN) */
{0}};
void
test_log2(int m)	{ run_vector_1(m, log2_vec,(char *)(log2),"log2","dd");}
