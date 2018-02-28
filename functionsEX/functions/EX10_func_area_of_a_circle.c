/* 
 * Procédure qui demande le rayon d’un cercle et 
 * affiche son aire.
 */
#include <stdio.h>    /* for printf() and fgets() */
#include <stdlib.h>   /* for exit()               */
#include <string.h>   /* for strlen()             */

#define PI 3.14159265

int 
main(void) 
{   
    double areaOfCircle(void);
    areaOfCircle();
}

double
areaOfCircle()
{
    static double radius
                , area
                ;
    
    while (radius <= 0.0L)
    {
        printf("Veuillez introduire le rayon du cercle: ");
        
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
            radius = strtod(buffer, &endPtr);
        }
        
        if (radius <= 0.0L) puts("La valeur doit être un nombre positif non nul.");
    }
    
    area = (radius * radius) * PI;
    
    return(area);
}