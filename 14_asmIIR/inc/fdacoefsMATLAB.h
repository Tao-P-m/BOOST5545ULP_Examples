/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 *
 * Generated by MATLAB(R) 7.0.1 and the Filter Design Toolbox 3.1.
 *
 * Generated on: 13-Mar-2005 18:10:47
 *
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure   : Direct-Form II, Second-Order Sections
 * Filter Order       : 8
 * Stable             : Yes
 * Linear Phase       : No
 * Arithmetic         : fixed
 * Numerator          : S16Q14
 * Denominator        : S16Q14
 * Scale Values       : S16Q14
 * Input              : S16Q15
 * Stage Input        : S16Q9
 * Stage Output       : S16Q11
 * Output             : S16Q11
 * State              : S16Q15
 * Numerator Prod     : S32Q29
 * Denominator Prod   : S32Q29
 * Numerator Accum    : S40Q29
 * Denominator Accum  : S40Q29
 * Round Mode         : convergent
 * Overflow Mode      : wrap
 * Cast Before Sum    : true
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\MATLAB701\extern\include\tmwtypes.h 
 */
#define MWSPT_NSEC 9
const int NL[MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1 };
const int16_T NUM[MWSPT_NSEC][3] = {
  {
     1491,      0,      0 
  },
  {
    16384, -23636,  16384 
  },
  {
     1491,      0,      0 
  },
  {
    16384,   3306,  16384 
  },
  {
     6214,      0,      0 
  },
  {
    16384, -18247,  16384 
  },
  {
     6214,      0,      0 
  },
  {
    16384,  -5864,  16384 
  },
  {
    16384,      0,      0 
  }
};
const int DL[MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1 };
const int16_T DEN[MWSPT_NSEC][3] = {
  {
    16384,      0,      0 
  },
  {
    16384, -13231,  15528 
  },
  {
    16384,      0,      0 
  },
  {
    16384, -11232,  15504 
  },
  {
    16384,      0,      0 
  },
  {
    16384, -14706,  16069 
  },
  {
    16384,      0,      0 
  },
  {
    16384, -10054,  16049 
  },
  {
    16384,      0,      0 
  }
};
