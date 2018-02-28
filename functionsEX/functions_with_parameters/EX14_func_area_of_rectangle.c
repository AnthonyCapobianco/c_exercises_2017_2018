/*
 * Procédure qui reçoit la longueur et la largeur d’un rectangle et 
 * affiche son aire
 */
#include <stdio.h>    /* for printf() and fgets() */

int 
main(void) 
{   
    double areaOfRectangle(double, double);
    areaOfRectangle(10.0L, 20.3L);
}

double
areaOfRectangle(double length, double height)
{
    return(length * height);
}