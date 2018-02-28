/*
 * Procédure qui demande un nombre et qui 
 * affiche sa factorielle.
 */
#include <stdio.h>    /* for printf() and fgets() */
#include <stdlib.h>   /* for exit()               */
#include <string.h>   /* for strlen()             */

int 
main(void) 
{
    long factorial(void);
    factorial();
}

long 
factorial()
{
    static long i;
    
    static long num
              , factorialOfNum = 1
              ;
            
    static char buffer[20];
    char *endPtr;
    
    printf("Veuillez introduire un nombre: ");
    
    if (!fgets(buffer, 20, stdin)) 
    {
        /* Shouldn't ever happen. */
        fprintf(stderr, "ERROR: END OF FILE"); 
        exit(EXIT_FAILURE);
    } 
    else 
    {
        buffer[(strlen(buffer) - 1)] = 0;
        num = strtol(buffer, &endPtr, 10); 
    }
    
    if (num > 0) for (i = num; i != +1; i--) factorialOfNum *= i;
    if (num < 0) for (i = num; i != -1; i++) factorialOfNum *= i;
    
    return(factorialOfNum);
}