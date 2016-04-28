// lcd_BYU_images.c
//************************************************************************************
//************************************************************************************
//	LL      CCCCC   DDCDDD      IIII  MM       MM     AAA      GGGGG    EEEEE  SSSS
//	LL     CC   CC  DD   DD      II   MMM     MMM    AA AA    GG   GG   EE    SS  SS
//	LL    CC        DD    DD     II   MMMM   MMMM    AA AA    GG        EE    SS
//	LL    CC        DD    DD     II   MM MM MM MM   AAAAAAA   GG  GGGG  EEEE   SSSS
//	LL    CC        DD    DD     II   MM  MMM  MM   AA   AA   GG    GG  EE        SS
//	LL     CC   CC  DD   DD      II   MM   M   MM  AA     AA  GG    GG  EE    SS  SS
//	LLLLLL  CCCCC   DDDDDD      IIII  MM       MM  AA     AA   GGGGGG   EEEEE   SSS
//************************************************************************************
//************************************************************************************
//	Author:			Paul Roper
//	Revision:		1.0		11/01/2012
//
//	Description:	Images for YM160160C/ST7529 LCD
//
//	Built with CCSv5.2 w/cgt 4.0.0
//************************************************************************************
//
#include "msp430x22x4.h"
typedef unsigned char uint8;
typedef unsigned int uint16;

#define BYU1_LOGO	1

#ifndef BYU1_LOGO
#define BYU1_LOGO	0
#endif

#ifndef BYU2_LOGO
#define BYU2_LOGO	0
#endif

#ifndef BYU3_LOGO
#define BYU3_LOGO	0
#endif

#ifndef BYU4_LOGO
#define BYU4_LOGO	0
#endif

#ifndef BYU5_LOGO
#define BYU5_LOGO	0
#endif

#if BYU1_LOGO
//	lcd_wordImage(byu1_image, x, y, 1);	// display BYU logo

const uint16 byu1_image[] = { 60, 39,	// 60 x 39 byu logo
  0x07ff,0x7000,0x840e,0x02f0,0x8410,0x7390,0x000e,0x07ff,
  0x06ff,0x838e,0xb492,0x04f0,0xb596,0x8496,0x0390,0x06ff,
  0x05ff,0x940e,0x08f0,0xb596,0x0410,0x05ff,0x04ff,0x9380,
  0x06f0,0xb596,0x8410,0xb492,0x02f0,0xb596,0x0390,0x04ff,
  0x03ff,0x7000,0xb592,0xb596,0x7412,0xb40e,0x03f0,0xb596,
  0x01ff,0x7000,0x940e,0xb596,0x9596,0x000e,0x03ff,0x03ff,
  0xb48e,0xb596,0x7416,0x01ff,0xb380,0x02f0,0xb596,0x9596,
  0x03ff,0x940e,0xb596,0x7416,0x03ff,0x02ff,0x8000,0xb596,
  0x7496,0x02ff,0xb380,0x02f0,0xb596,0x9596,0x04ff,0xb48e,
  0xb596,0x0010,0x02ff,0x02ff,0xb48e,0x9596,0x000e,0x02ff,
  0xb380,0x02f0,0xb596,0x8596,0x04ff,0x7000,0xb592,0x0416,
  0x02ff,0x01ff,0x7000,0xb596,0x0416,0x03ff,0xb380,0x03f0,
  0xb596,0x8410,0x000e,0x03ff,0xb400,0x9596,0x000e,0x01ff,
  0x01ff,0xb380,0x9596,0x000e,0x02ff,0x9380,0x04f0,0xb596,
  0x9596,0x04ff,0x7000,0xb592,0x0392,0x01ff,0x01ff,0xb58e,
  0x7596,0x03ff,0xb380,0x04f0,0xb596,0x0496,0x05ff,0xb58e,
  0x0496,0x01ff,0x01ff,0xb592,0x9596,0x01ff,0x7380,0x01ff,
  0x7000,0x04f0,0xb596,0x0396,0x05ff,0xb592,0x8596,0x01ff,
  0x8000,0x02f0,0xb596,0x0010,0x958e,0x02ff,0xb590,0x03f0,
  0xb596,0x000e,0x03ff,0x7490,0x8000,0x02f0,0xb596,0x000e,
  0xb380,0x02f0,0xb596,0x8396,0xb596,0x0010,0x01ff,0xb400,
  0x02f0,0xb596,0x7596,0x03ff,0x8000,0xb596,0xb38e,0x02f0,
  0xb596,0x0012,0xb400,0x04f0,0xb596,0x0416,0x01ff,0x9000,
  0x02f0,0xb596,0x0416,0x03ff,0xb380,0x04f0,0xb596,0x0396,
  0xb580,0x04f0,0xb596,0x7596,0x01ff,0x7000,0x02f0,0xb596,
  0x0010,0x03ff,0xb58e,0x04f0,0xb596,0x0416,0xb58e,0x05f0,
  0xb596,0x000e,0x01ff,0xb58e,0x9596,0x03ff,0x7000,0x05f0,
  0xb596,0x7596,0xb590,0x05f0,0xb596,0x0016,0x01ff,0xb380,
  0x0496,0x03ff,0xb380,0x05f0,0xb596,0x7596,0xb590,0x05f0,
  0xb596,0x0496,0x01ff,0x8000,0x0396,0x03ff,0xb480,0x05f0,
  0xb596,0x8596,0xb590,0x05f0,0xb596,0x8596,0x02ff,0x000e,
  0x03ff,0xb592,0x05f0,0xb596,0x8596,0xb590,0x06f0,0xb596,
  0x000e,0x04ff,0x8000,0x06f0,0xb596,0x8596,0xb590,0x06f0,
  0xb596,0x0396,0x04ff,0xb400,0x06f0,0xb596,0x7596,0xb58e,
  0x06f0,0xb596,0x7596,0x04ff,0xb590,0x06f0,0xb596,0x7596,
  0xb58e,0x06f0,0xb596,0x9596,0x03ff,0x7000,0x07f0,0xb596,
  0x0496,0xb400,0x07f0,0xb596,0x0010,0x02ff,0xb380,0x07f0,
  0xb596,0x0396,0xb380,0x07f0,0xb596,0x0016,0x02ff,0xb400,
  0x07f0,0xb596,0x0396,0x8000,0x07f0,0xb596,0x0016,0x02ff,
  0xb400,0x07f0,0xb596,0x0010,0x7000,0x07f0,0xb596,0x0016,
  0x02ff,0xb400,0x06f0,0xb596,0x9596,0x01ff,0x01ff,0xb58e,
  0x06f0,0xb596,0x0016,0x02ff,0xb400,0x06f0,0xb596,0x7596,
  0x01ff,0x01ff,0xb400,0x06f0,0xb596,0x0016,0x02ff,0xb400,
  0x06f0,0xb596,0x0396,0x01ff,0x01ff,0x8000,0x04f0,0xb596,
  0x9596,0x738e,0x0010,0x02ff,0x8380,0x838e,0x05f0,0xb596,
  0x000e,0x01ff,0x02ff,0xb58e,0x03f0,0xb596,0x8596,0x05ff,
  0x7000,0x04f0,0xb596,0x7496,0x02ff,0x02ff,0x9380,0x03f0,
  0xb596,0x7596,0x05ff,0x7000,0x04f0,0xb596,0x0390,0x02ff,
  0x03ff,0xb590,0x02f0,0xb596,0x0496,0x06ff,0xb592,0x02f0,
  0xb596,0x7596,0x03ff,0x03ff,0x8380,0x02f0,0xb596,0x7496,
  0x000e,0x04ff,0x7000,0xb592,0x02f0,0xb596,0x0010,0x03ff,
  0x04ff,0xb40e,0x02f0,0xb596,0x8496,0x7410,0x02f0,0x738e,
  0x840e,0xb592,0x02f0,0xb596,0x7412,0x04ff,0x05ff,0xb48e,
  0x08f0,0xb596,0x7416,0x05ff,0x05ff,0x7000,0x940e,0x05f0,
  0xb596,0x9596,0x7412,0x06ff,0x07ff,0x7380,0x8410,0x02f0,
  0x9492,0x8410,0x038e,0x07ff
};
#endif


#if BYU3_LOGO
const uint16 byu3_image[] = { 90, 52,
  0x0dff,0x8380,0xb592,0x8496,0x838e,0x9490,0x8412,0x000e,0x0aff,
  0x09ff,0x7000,0x738e,0x000e,0x7000,0x8490,0x738e,0x838e,0x8492,0x7390,0x9410,0x8492,0x000e,0x09ff,
  0x08ff,0x840e,0x03f0,0x9492,0x9410,0x000e,0x05ff,0x8380,0x7412,0x09ff,
  0x07ff,0x9380,0x7412,0x000e,0x01ff,0x7000,0x0410,0x07ff,0xb40e,0x0390,0x08ff,
  0x05ff,0x7380,0x8410,0x7412,0x0cff,0x7000,0x8590,0x05ff,0x9400,0x7492,0x01ff,
  0x05ff,0x8490,0x838e,0x000e,0x09ff,0x738e,0x8410,0x0390,0x01ff,0x8380,0x0416,0x04ff,0x048e,0x9380,0x0010,
  0x04ff,0x9000,0x0390,0x02ff,0x7000,0x04ff,0x048e,0x02ff,0x7000,0x8496,0x8410,0x9490,0x0390,0x01ff,0x940e,0x0390,0x03ff,0x0390,0x01ff,0x0410,
  0x04ff,0x8400,0x03ff,0xb380,0x000e,0x03ff,0x0390,0x02ff,0x7000,0x0016,0x01ff,0x7000,0x8590,0x000e,0x7000,0x8590,0x000e,0x02ff,0x748e,0x01ff,0x7480,
  0x04ff,0x0490,0x03ff,0x7000,0x0416,0x02ff,0x7000,0x0012,0x02ff,0x7000,0x0012,0x02ff,0x8000,0x7416,0x01ff,0x7000,0x8492,0x000e,0x01ff,0x9400,0x0010,0x9380,
  0x03ff,0x9000,0x0392,0x04ff,0x758e,0x02ff,0x8000,0x0010,0x02ff,0x8000,0x0010,0x03ff,0x940e,0x0390,0x01ff,0x8380,0x8492,0x000e,0x01ff,0x0390,0xb380,
  0x03ff,0x8400,0x05ff,0x8400,0x02ff,0x8000,0x0010,0x02ff,0x9000,0x7592,0x03ff,0x7000,0x8490,0x000e,0x01ff,0x8380,0x9492,0x7410,0x0412,0xb380,
  0x03ff,0x7580,0x05ff,0x8000,0x0392,0x01ff,0x9380,0x03ff,0x9400,0x8400,0x04ff,0x7000,0x8492,0x000e,0x01ff,0x7000,0x940e,0x0390,0x9400,
  0x03ff,0x058e,0x06ff,0x0490,0x01ff,0x8400,0x03ff,0x7380,0x8400,0x05ff,0x8380,0x8492,0x038e,0x03ff,0x7480,
  0x02ff,0x840e,0x0392,0x06ff,0x048e,0x01ff,0x9380,0x04ff,0x958e,0x000e,0x05ff,0xb380,0x9412,0x7390,0x01ff,0x7000,0x0412,
  0x01ff,0x7000,0xb412,0x000e,0x03ff,0x0380,0x02ff,0x0410,0x01ff,0xb000,0x000e,0x03ff,0x8410,0x9496,0x02f0,0x9492,0x7410,0x000e,0x01ff,0x9000,0x700e,0x940e,0x8492,0x9490,0x000e,
  0x01ff,0x8000,0x9010,0x000e,0x03ff,0x058e,0x01ff,0x8000,0x0396,0x01ff,0xb400,0x0396,0x03ff,0x0392,0x7380,0x02f0,0x738e,0x838e,0x9592,0x000e,0x8000,0x0010,0x01ff,0x7380,0x038e,0x01ff,
  0x01ff,0x8000,0x800e,0x000e,0x03ff,0x0410,0x01ff,0xb380,0x01ff,0x8000,0x0416,0xb58e,0x9412,0x000e,0x8380,0x0396,0x04ff,0x7380,0x0492,0x7000,0x0012,0x04ff,
  0x01ff,0x9000,0x700e,0x000e,0x03ff,0x0392,0x01ff,0x7580,0x01ff,0x848e,0x700e,0x7490,0x738e,0x7000,0x8590,0x000e,0x05ff,0x758e,0x01ff,0x0410,0x04ff,
  0x01ff,0x8400,0x04ff,0x8000,0x0012,0x7000,0x0392,0x8380,0x0396,0xb380,0x0390,0x01ff,0xb400,0x0390,0x05ff,0x7000,0x0396,0x01ff,0x0390,0x04ff,
  0x01ff,0x048e,0x03ff,0xb400,0x9492,0x01ff,0xb380,0x7390,0x9590,0x000e,0x9380,0x02ff,0x758e,0x06ff,0xb380,0x0010,0x7000,0x0010,0x04ff,
  0x8410,0x0396,0x02ff,0x7000,0x7496,0x758e,0x01ff,0xb480,0xb592,0x9596,0x9492,0xb492,0x9492,0x9490,0x9592,0x02f0,0x9492,0x7000,0x9490,0x9492,0x8492,0xb592,0x9492,0xb492,0x0416,0x04ff,
  0x8396,0x0010,0x02ff,0xb000,0x000e,0x7400,0x01ff,0xb000,0x8596,0x07f0,0x738e,0xb38e,0x9490,0x06f0,0x738e,0x048e,0x04ff,
  0x8012,0x7390,0x02ff,0x9380,0x01ff,0x7400,0x01ff,0x7000,0x840e,0x02f0,0x738e,0x000e,0x04f0,0x738e,0xb00e,0x0390,0x06f0,0x738e,0x048e,0x04ff,
  0x8016,0x0410,0x02ff,0x8380,0x01ff,0x8400,0x02ff,0xb480,0x02f0,0xb596,0x7010,0x04f0,0xb596,0x7010,0x9380,0x05f0,0xb596,0x8596,0x048e,0x04ff,
  0x8012,0x0010,0x02ff,0x7480,0x01ff,0xb480,0x0390,0x01ff,0xb58e,0x02f0,0xb596,0x7010,0x04f0,0xb596,0x0010,0xb590,0x05f0,0xb596,0x7596,0x048e,0x04ff,
  0x8016,0x000e,0x7380,0x038e,0x048e,0x01ff,0xb58e,0x9596,0x8410,0x03f0,0xb596,0x7010,0x04f0,0xb596,0x8010,0x06f0,0xb596,0x7596,0x048e,0x04ff,
  0x8012,0x000e,0xb590,0x7496,0x0396,0x7000,0x02f0,0xb596,0x7596,0xb592,0x02f0,0xb596,0x7010,0x04f0,0xb596,0xb390,0x06f0,0xb596,0x7596,0x048e,0x04ff,
  0x8016,0x7010,0xb596,0x7596,0x040e,0x8000,0x02f0,0xb596,0x7596,0xb592,0x02f0,0xb596,0x7010,0x04f0,0xb596,0xb410,0x06f0,0xb596,0x7596,0x048e,0x04ff,
  0x7016,0x8392,0xb596,0x7596,0x0410,0x8000,0x02f0,0xb596,0x038e,0xb380,0xb596,0x7596,0x01ff,0xb48e,0x02f0,0xb596,0x7496,0xb400,0x02f0,0xb596,0x7396,0xb48e,0x02f0,0xb596,0x000e,0x048e,0x04ff,
  0x8496,0xb58e,0xb596,0x9596,0x0012,0x9000,0x02f0,0xb596,0x838e,0x8010,0xb596,0x7596,0x01ff,0xb58e,0x02f0,0xb596,0x0396,0xb400,0x02f0,0xb596,0x000e,0xb400,0x02f0,0xb596,0x938e,0x0496,0x04ff,
  0x938e,0xb400,0xb596,0x7596,0x01ff,0xb380,0x02f0,0xb596,0x938e,0x0412,0xb592,0x9596,0x01ff,0xb592,0x02f0,0xb596,0x900e,0xb38e,0x02f0,0xb596,0x000e,0xb400,0x02f0,0xb596,0x840e,0x038e,0x04ff,
  0x8000,0xb400,0xb596,0x0496,0x01ff,0xb380,0x02f0,0xb596,0x838e,0x7480,0xb58e,0xb596,0x8010,0x02f0,0xb596,0x9596,0xb400,0xb00e,0x02f0,0xb596,0x000e,0xb400,0x02f0,0xb596,0x7400,0x05ff,
  0x8000,0xb400,0xb596,0x0416,0x01ff,0xb400,0x02f0,0xb596,0x838e,0x9380,0xb400,0xb596,0x9396,0x02f0,0xb596,0x7596,0x758e,0x8016,0x02f0,0xb596,0x7416,0xb48e,0x02f0,0xb596,0x840e,0x05ff,
  0x8000,0xb400,0xb596,0x0396,0x01ff,0xb58e,0x02f0,0xb596,0x838e,0x8000,0xb00e,0x04f0,0xb596,0x0416,0x0392,0x0410,0xb590,0x05f0,0xb596,0x840e,0x05ff,
  0x8000,0xb400,0xb596,0x0396,0x01ff,0xb590,0x02f0,0xb596,0x838e,0x7000,0x7016,0x04f0,0xb596,0x8012,0x0012,0x8480,0x9400,0x05f0,0xb596,0x840e,0x05ff,
  0x8000,0xb400,0xb596,0x0396,0x7000,0x03f0,0xb596,0x838e,0x01ff,0x0410,0xb590,0x03f0,0xb596,0xb38e,0x01ff,0x8480,0x7000,0x05f0,0xb596,0x8400,0x05ff,
  0x8000,0xb400,0xb596,0x0416,0x9000,0xb592,0x02f0,0xb596,0x8380,0x01ff,0x7480,0xb58e,0x02f0,0xb596,0x8596,0x7480,0x01ff,0x0412,0xb48e,0x05f0,0xb596,0x840e,0x05ff,
  0x9380,0xb480,0xb596,0x0396,0x8380,0xb58e,0x02f0,0xb596,0x838e,0x01ff,0xb380,0xb400,0x02f0,0xb596,0x0496,0x0490,0x7000,0x8010,0x06f0,0xb596,0x8400,0x05ff,
  0x9380,0xb480,0xb596,0x0012,0x9380,0xb590,0x02f0,0xb596,0x8380,0x01ff,0x8000,0xb390,0x02f0,0xb596,0x7396,0x0396,0x9000,0xb38e,0x02f0,0xb596,0x7416,0xb40e,0x02f0,0xb596,0x840e,0x05ff,
  0x9380,0xb480,0xb596,0x0012,0x9380,0xb490,0x02f0,0xb596,0x8380,0x01ff,0x7000,0xb010,0x02f0,0xb596,0x7396,0x0010,0x8380,0xb480,0x02f0,0xb596,0x000e,0xb400,0x02f0,0xb596,0x840e,0x05ff,
  0x9380,0xb480,0xb596,0x0396,0x01ff,0xb400,0x02f0,0xb596,0x8400,0x01ff,0x7000,0xb010,0x02f0,0xb596,0x8396,0x0010,0x8380,0xb580,0xb596,0x9596,0x01ff,0xb400,0x02f0,0xb596,0x8400,0x05ff,
  0x9380,0xb480,0xb596,0x0396,0x01ff,0xb400,0x02f0,0xb596,0x8400,0x7000,0xb412,0xb010,0x02f0,0xb596,0x7396,0x8496,0x740e,0xb58e,0x02f0,0xb596,0x01ff,0xb400,0x02f0,0xb596,0xb380,0x0412,0x04ff,
  0x9380,0xb48e,0xb596,0x0496,0x01ff,0xb58e,0x02f0,0xb596,0x7400,0x7000,0x7392,0xb380,0x02f0,0xb596,0x0396,0x938e,0x738e,0xb58e,0x02f0,0xb596,0x000e,0xb400,0x02f0,0xb596,0x000e,0x0410,0x04ff,
  0xb000,0xb400,0xb596,0x9596,0x9410,0x02f0,0xb596,0x9596,0x7480,0x7000,0x7010,0xb410,0x02f0,0xb596,0x8496,0x8010,0x838e,0xb580,0x02f0,0xb596,0x8416,0xb490,0x02f0,0xb596,0x7410,0x040e,0x04ff,
  0x9000,0xb38e,0x05f0,0xb596,0x8596,0x0480,0x7000,0xb010,0x04f0,0xb596,0x8016,0x900e,0xb400,0x06f0,0xb596,0x8596,0x040e,0x04ff,
  0x8000,0xb010,0x05f0,0xb596,0x0596,0x040e,0x7000,0x9010,0x04f0,0xb596,0x8016,0x800e,0xb38e,0x06f0,0xb596,0x7596,0x040e,0x04ff,
  0x7000,0x7016,0x05f0,0xb596,0x02f0,0x0396,0x7000,0xb010,0x04f0,0xb596,0x8016,0x700e,0x7016,0x06f0,0xb596,0x7596,0x040e,0x04ff,
  0x01ff,0x0410,0xb590,0x04f0,0xb596,0x900e,0x0010,0x7000,0x9010,0x04f0,0xb596,0x8016,0x000e,0x0490,0xb48e,0x05f0,0xb596,0x8596,0x048e,0x04ff,
  0x01ff,0x8480,0x9380,0x03f0,0xb596,0x7496,0x9480,0x01ff,0x7000,0x9012,0xb496,0x03f0,0x9492,0x8010,0x000e,0xb400,0x700e,0x840e,0x03f0,0x9492,0x9412,0x7492,0x040e,0x04ff,
  0x01ff,0x9000,0x0392,0x8380,0x8410,0x7390,0x7000,0x0416,0x01ff,0x7000,0x0012,0x01ff,0x000e,0x02ff,0x8000,0x000e,0x7000,0x8492,0x038e,0x05ff,0x048e,0x04ff,
  0x02ff,0x948e,0x038e,0x01ff,0x7000,0x8490,0x000e,0x01ff,0x7000,0x9496,0x04f0,0x9492,0xb492,0x000e,0x01ff,0x8380,0x9490,0x05f0,0x9492,0x0412,0x04ff,
  0x02ff,0x7000,0x9490,0x9492,0x8492,0x038e,0x03ff,0x06f0,0x738e,0x04ff,0x02f0,0x738e,0x038e,0x07ff,
};
#endif


#if BYU4_LOGO

const uint16 byu4_image[] = { 75, 46,
  0x06ff,0x8400,0x04f0,0x8410,0x0010,0x02ff,0x8000,0x04f0,0x8410,0x0410,0x05ff,
  0x06ff,0xfc00,0x04fe,0x039f,0x02ff,0xfb80,0x04fe,0x041f,0x05ff,
  0x06ff,0xfc00,0x04f0,0x8410,0x041f,0x02ff,0xfc00,0x04f0,0x8410,0x041f,0x05ff,
  0x06ff,0xfc00,0x0010,0x02ff,0x8000,0x459f,0x02ff,0xd7d0,0x000e,0x02ff,0x8000,0x041f,0x05ff,
  0x06ff,0xfc00,0x0010,0x02ff,0x7000,0x87df,0x01ff,0x8000,0x859f,0x03ff,0x8000,0x041f,0x05ff,
  0x06ff,0xfc00,0x0010,0x03ff,0xffce,0x000e,0xd400,0x7416,0x03ff,0x8000,0x041f,0x05ff,
  0x06ff,0xfc00,0x0010,0x03ff,0xfc00,0x0390,0xfc0e,0x041a,0x03ff,0x8000,0x041f,0x05ff,
  0x06ff,0xfc00,0x0010,0x03ff,0xfb80,0x741f,0xd7d0,0x000e,0x03ff,0x8000,0x041f,0x05ff,
  0x06ff,0xfc00,0x0010,0x03ff,0x8000,0x841f,0x87d0,0x04ff,0x8000,0x041f,0x05ff,
  0x06ff,0xfc00,0x0010,0x03ff,0x8000,0xd7da,0x741f,0x04ff,0x8000,0x041f,0x05ff,
  0x06f0,0x8410,0xfc10,0x0010,0x04ff,0xb7d0,0x041f,0x04ff,0x8000,0x841f,0x05f0,0x8410,
  0x07fe,0x8410,0x0410,0x03ff,0xfc00,0x0010,0x03ff,0x8400,0x8410,0x05fe,0x87df,
  0x841f,0x03f0,0x8410,0x87d0,0x8410,0xfc10,0x01fe,0x77df,0x03ff,0x8380,0x000e,0x03ff,0xffce,0x01fe,0x841f,0x04f0,0x8410,0x87d0,
  0x041f,0x03ff,0x87d0,0x01ff,0x8380,0x8410,0x87d0,0x07ff,0x8000,0x87da,0x8410,0x0390,0x04ff,0x87d0,
  0x041f,0x03ff,0x87d0,0x03ff,0xffc0,0x000e,0x06ff,0x8380,0x739f,0x06ff,0x87d0,
  0x041f,0x03ff,0x87d0,0x03ff,0xfc00,0x0010,0x06ff,0xfc00,0x000e,0x06ff,0x87d0,
  0x041f,0x03ff,0x87d0,0x03ff,0xfc00,0x039f,0x06ff,0x87ce,0x07ff,0x87d0,
  0x041f,0x03ff,0x87d0,0x03ff,0xfc00,0x041f,0x05ff,0x8000,0x77d0,0x07ff,0x87d0,
  0x041f,0x03ff,0x87d0,0x03ff,0xfc00,0x87df,0x05ff,0x8380,0x87df,0x07ff,0x87d0,
  0x041f,0x03ff,0x87d0,0x03ff,0xfc00,0x87df,0x000e,0x04ff,0xfc00,0x049f,0x02ff,0x8380,0x7410,0x03ff,0x87d0,
  0x841f,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0xfc10,0x01fe,0x0010,0x04ff,0xffce,0x041f,0x02ff,0xfb80,0x769f,0x02ff,0x8400,0x87d0,
  0x01fe,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0x01fe,0xffd6,0x039a,0x03ff,0x7000,0xb7d0,0x069f,0x02ff,0xd380,0x759f,0x02ff,0xfc00,0x87df,
  0xfc10,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0xfd9f,0x01fe,0x041f,0x03ff,0x8000,0xfd9f,0x069f,0x02ff,0xe380,0x77df,0x02ff,0xfc00,0x8410,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0x01fe,0xb7d6,0x041f,0x03ff,0x8000,0x01fe,0x07d6,0x02ff,0xfb80,0x769a,0x02ff,0xfc00,0x0010,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0xb7df,0x01fe,0x041f,0x03ff,0x8000,0xfd9f,0x859f,0x02ff,0x7380,0x738e,0x02ff,0xfc00,0x0010,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0x01fe,0xfd9f,0x041f,0x03ff,0x8000,0x02fe,0x000e,0x05ff,0xfc00,0x0010,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0xfd9f,0xffd6,0x041f,0x03ff,0x8000,0xb7df,0xfd9f,0x741a,0x05ff,0xfc00,0x0010,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0x01fe,0xb7df,0x041f,0x03ff,0x8000,0x02fe,0x7412,0x05ff,0xfc00,0x0010,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0xfd9f,0xffd6,0x041f,0x03ff,0x8000,0xfd9f,0x97d6,0x0390,0x05ff,0xfc00,0x0010,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0x01fe,0xfd9f,0x041f,0x03ff,0x8000,0xffd6,0x77df,0x000e,0x01ff,0x8380,0x7410,0x02ff,0xfc00,0x0010,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0xb7df,0x01fe,0x041f,0x03ff,0x8000,0x01fe,0x87d6,0x02ff,0xd380,0x769f,0x02ff,0xfc00,0x8410,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0x01fe,0xfd9f,0x041f,0x03ff,0x8000,0x01fe,0x041f,0x02ff,0xfb80,0x77df,0x02ff,0xfc00,0x87df,
  0xfc00,0x0010,0x02ff,0x87d0,0x02ff,0x8000,0xb7df,0x01fe,0x041f,0x03ff,0x8000,0xb7df,0x041f,0x02ff,0xd380,0x7696,0x02ff,0x8400,0x87d0,
  0xfc00,0x0010,0x02ff,0x8410,0x02ff,0x8000,0xfd9f,0x01fe,0x041f,0x03ff,0x8000,0x01fe,0x041f,0x02ff,0x8380,0x7410,0x03ff,0x87d0,
  0xfc00,0x0010,0x05ff,0x8000,0x01fe,0x841f,0x0410,0x03ff,0x8000,0x8410,0x041f,0x07ff,0x87d0,
  0xfc00,0x0010,0x05ff,0x8000,0xfd9f,0x041f,0x05ff,0x8000,0x769f,0x07ff,0x87d0,
  0xfc00,0x0010,0x05ff,0x8000,0xb7df,0x041f,0x05ff,0x8000,0x87df,0x07ff,0x87d0,
  0xfc00,0x039a,0x05ff,0xb400,0x01fe,0x041f,0x05ff,0x8000,0x87df,0x0010,0x06ff,0x87d0,
  0xd000,0x841f,0x05ff,0xffd0,0xfd9f,0x041f,0x05ff,0x8000,0x01fe,0x0390,0x06ff,0x87d0,
  0x8000,0x87d6,0x0410,0x03ff,0x8400,0xb7df,0x01fe,0x041f,0x05ff,0x8000,0x01fe,0x841f,0x06ff,0x87d0,
  0x01ff,0xffd0,0x869f,0x03f0,0x8410,0xfe90,0x01fe,0xfd9f,0x041f,0x05ff,0x8000,0xb7df,0x01fe,0x06f0,0x8410,0x87d0,
  0x01ff,0xd400,0xffd6,0x03fe,0xb7df,0xfd9f,0x01fe,0x041f,0x05ff,0x8000,0x01fe,0xffd6,0x06fe,0x87df,
  0x02ff,0x07f0,0x8410,0x041f,0x05ff,0x8000,0x841f,0x08f0,0x8410,
  0x08ff,0x8000,0x841f,0x06f0,0x8410,0x041f,0x08ff,
  0x08ff,0x8000,0x07fe,0x041f,0x08ff,
  0x08ff,0x8000,0x07f0,0x8410,0x0410,0x08ff
};
#endif
