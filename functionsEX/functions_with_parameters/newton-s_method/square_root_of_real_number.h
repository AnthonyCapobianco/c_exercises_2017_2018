/* Copyleft 2018 @_AntJ_ */

#include <stdio.h>
#include <float.h>

#ifndef _SQUARE_ROOT_OF_REAL_NUMBER_H_INCLUDED_
#define _SQUARE_ROOT_OF_REAL_NUMBER_H_INCLUDED_


#ifdef __GNUC__
  extern double squareRootOfReal(const double*)__attribute__((hot));
#else
  extern double squareRootOfReal(const double*);
#endif

extern void checkAndPrintSquareRootOfRealNumber(const double);

#endif