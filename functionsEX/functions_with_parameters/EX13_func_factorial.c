/*
 * Procédure qui reçoit un nombre et qui 
 * affiche sa factorielle.
 */
#include <stdio.h>    /* for printf() and fgets() */

int 
main(void) 
{
        long factorial(long);
        factorial(-10);
}

long 
factorial(long num)
{
    static long i;
    
    static long factorialOfNum = 1;

    if (num > 0) for (i = num; i != +1; i--) factorialOfNum *= i;
    if (num < 0) for (i = num; i != -1; i++) factorialOfNum *= i;
    
    return(factorialOfNum);
}