// programme qui avec des pointeurs (variables int aussi autorisées) permet de 
// réserver, lire et afficher un tableau entier de taille maximale 2 X 3
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int arrPtr[2][3];
    int i = 0
      , j = 0
      ;
    
    // Assign/read values
    for (; i < 2; ++i)
        for (j = 0; j < 3; ++j)
        {
            #define XY " x=%i, y=%i: ", i + 1, j + 1
            printf("Veuillez introduire une valeur pour" XY);
            scanf("%d", (*(arrPtr + i) + j)); 
        }
    // Print values
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 3; ++j)
            #define VAL_XY " x=%i, y=%i est: %i\n", i + 1, j + 1, *( *(arrPtr + i) + j)
            printf("La valeur pour" VAL_XY);
    return 0;
}