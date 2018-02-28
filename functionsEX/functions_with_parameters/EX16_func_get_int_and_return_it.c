/* 
 * Fonction qui permet d’encoder un entier et de le retourner.
 */
#include <stdio.h>    /* for printf() and fgets() */
#include <stdlib.h>   /* for exit()               */
#include <string.h>   /* for strlen()             */

#define INT_MAX +2147483647
#define INT_MIN -2147483647

int 
main(void) 
{
    int getIntFromStdin(void);
    
    int a = getIntFromStdin();
}

int
getIntFromStdin()
{
    long numberToCastToInt = 0; 
    
    static char buffer[20];
    char *endPtr;
    
    if (!fgets(buffer, 20, stdin)) 
    {
        /* Shouldn't ever happen. */
        fprintf(stderr, "ERROR: END OF FILE"); 
        exit(EXIT_FAILURE);
    }
    else buffer[(strlen(buffer) - 1)] = 0;
    
    numberToCastToInt = strtol(buffer, &endPtr, 10);
    
    if (numberToCastToInt > INT_MAX || numberToCastToInt < INT_MIN)
    {
        fprintf(stderr, "ERROR #00: NUMBER TOO BIG TO BE AN INT");
        exit(EXIT_FAILURE);
    }
    else return((int) numberToCastToInt);
}