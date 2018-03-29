/*
 * Copyright (c) 2018 Capobianco A.
 * SPDX-License-Identifier: MIT 
 * <http://www.opensource.org/licenses/MIT>
 */

#ifndef _MATRIX_CALC_H_
#define _MATRIX_CALC_H_

#define STRING_LIMIT 100
#define MAX_MATRIX_DIMENSION 10

#define ERROR_RET_NULL(x) fprintf(stderr, "ERROR: %s returned NULL in %s:%i", x, __FILE__, __LINE__)

typedef struct Matrix_data
{
        char name;

        int width;
        int height;

        int m[MAX_MATRIX_DIMENSION][MAX_MATRIX_DIMENSION];

} Matrix_d;

extern void matrix_menu(void);

#endif
