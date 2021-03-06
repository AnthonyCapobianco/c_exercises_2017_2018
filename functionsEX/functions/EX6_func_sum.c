/* 
 * Procédure qui demande deux nombres et
 * affiche leur somme. 
 */
#include <stdio.h>    /* for printf() and fgets() */
#include <stdlib.h>   /* for exit()               */
#include <string.h>   /* for strlen()             */

int 
main(void) 
{
    int sum(void);
    sum();
    return(0);
}

int
sum()
{
    static int num[2];
    
    for (unsigned char i = 0; i < 2; ++i)
    {
        printf("Veuillez introduire le terme numéro %i: ", (int) (i + 1));
        
        static char buffer[20];
        char *endPtr;
        
        if (!fgets(buffer, 20, stdin)) 
        {
            /* Shouldn't ever happen. */
            fprintf(stderr, "ERROR: END OF FILE"); 
            exit(EXIT_FAILURE);
        }
        else 
        {
            buffer[(strlen(buffer) - 1)] = 0;
            num[(int) i] += strtol(buffer, &endPtr, 10); 
        }
    }
    
    return(num[0] + num[1]);
}