//
// intio.h
// Created by Anthony Capobianco on 28/02/2018.
#include <stdio.h>
#include <stdlib.h>   /* for exit()               */
#include <string.h>   /* for strlen()             */

#ifndef _INTIO_H_INCLUDED
#define _INTIO_H_INCLUDED

#ifndef INT_MAX
#define INT_MAX +2147483647
#endif

#ifndef INT_MIN
#define INT_MIN -2147483647
#endif

extern int printInt(int number);
extern int sumOfInts(int n1, int n2);
extern int getIntFromStdin(void);
extern int areaOfRectangle(int length, int height);
extern int getAndPrintRectangleArea(void);

#endif