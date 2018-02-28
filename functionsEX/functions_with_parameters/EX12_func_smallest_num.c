/* 
 * Procédure qui demande deux nombres et 
 * affiche le plus petit des deux.
 */
#include <stdio.h>    /* for printf() and fgets() */
#include <stdlib.h>   /* for exit()               */
#include <string.h>   /* for strlen()             */

int 
main(void) 
{
    long smallestNumber(long, long);
    smallestNumber(10, 12);
}

long 
smallestNumber(long n1, long n2)
{
    return((n1 < n2) ? n1 : n2);
}