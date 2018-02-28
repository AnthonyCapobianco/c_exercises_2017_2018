/* 28/02/2018 */
#include "intio.h"

int main(void) 
{
    int n1
      , n2
      , sum
      ;
    
    printf("Veillez introduire un nombre entier: ");
    n1 = getIntFromStdin();
    printf("Veillez introduire un nombre entier: ");
    n2 = getIntFromStdin();
    
    sum = sumOfInts(n1, n2);
    
    printf("La somme de "); printInt(n1); 
    printf(" et de "); printInt(n2); 
    printf(" est de: "); printInt(sum);
    
    return(0);
}


