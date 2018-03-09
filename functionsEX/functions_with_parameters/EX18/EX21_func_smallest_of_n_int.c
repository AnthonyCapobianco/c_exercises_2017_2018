/* 02/03/2018 */
#include "intio.h"

int 
main(void) 
{
    printf("Nombre de nombres à comparer? ");
    
    printf("%i", smallestOfNNumberFromStdin(getIntFromStdin()));
    
    return(0);
}