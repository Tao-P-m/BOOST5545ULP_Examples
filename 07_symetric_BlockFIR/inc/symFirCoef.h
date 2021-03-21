/*
 * Experiment implementation of symmetric FIR filter - Chapter 3
 * symFircoef.h
 *
 * Description: This is the filter coefficient file for symmetric FIR filter
 *
 *  Created on: May 13, 2012
 *      Author: BLEE
 *
 * 		For the book "Real Time Digital Signal Processing:
 *                    Fundamentals, Implementation and Application, 3rd Ed"
 *                    By Sen M. Kuo, Bob H. Lee, and Wenshun Tian
 * 		              Publisher: John Wiley and Sons, Ltd
 */

Int16 symFirCoef[NUM_TAPS/2]={
(Int16)(-0.0011606*32767.0),(Int16)(0.005235*32767.0),  (Int16)(0.0019751*32767.0), (Int16)(-0.0010696*32767.0),
(Int16)(0.00070486*32767.0),(Int16)(-0.0023019*32767.0),(Int16)(-0.0085149*32767.0),(Int16)(0.0032251*32767.0),
(Int16)(0.019339*32767.0),  (Int16)(0.0019924*32767.0), (Int16)(-0.024454*32767.0), (Int16)(-0.00927*32767.0),
(Int16)(0.015833*32767.0),  (Int16)(0.0056414*32767.0), (Int16)(0.0040532*32767.0), (Int16)(0.022213*32767.0),
(Int16)(-0.018912*32767.0), (Int16)(-0.074497*32767.0), (Int16)(0.0079832*32767.0), (Int16)(0.13193*32767.0),
(Int16)(0.03699*32767.0),   (Int16)(-0.16479*32767.0),  (Int16)(-0.10113*32767.0),  (Int16)(0.15292*32767.0)
};

