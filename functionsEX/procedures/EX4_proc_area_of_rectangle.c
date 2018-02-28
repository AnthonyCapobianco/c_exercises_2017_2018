/*
 * Procédure qui demande la longueur et la largeur d’un rectangle et 
 * affiche son aire
 */
#include <stdio.h>    /* for printf() and fgets() */
#include <stdlib.h>   /* for exit()               */
#include <string.h>   /* for strlen()             */

int 
main(void) 
{   
    void areaOfRectangle(void);
    areaOfRectangle();
}

void
areaOfRectangle()
{
    static double side[2]
                , area
                ;
    static unsigned char i = 0;
    
    while (i < 2)
    {
        printf("Veuillez introduire %s du rectangle: ", (!i) ? "longueur" : "largeur");
        
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
            side[(int) i] = strtod(buffer, &endPtr);
        }
        
        if (side[(int) i] <= 0) puts("La valeur doit être un nombre positif non nul.");
        else i++;
    }
    
    area = (side[0] * side[1]);
    
    printf("\nL'aire d'un rectangle de longueur %G et de largeur %G", side[0], side[1]);
    printf("\nest de: %G\n", area);
    
    exit(EXIT_SUCCESS);
}