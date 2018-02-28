/* 
 * Procédure qui reçois le rayon d’un cercle et 
 * affiche son aire.
 */
#include <stdio.h>    /* for printf() and fgets() */

int 
main(void) 
{   
    double areaOfCircle(double);
    areaOfCircle(10.34L);
}

double
areaOfCircle(double radius)
{
    #define PI 3.14159265
    return(((radius * radius) * PI));
}