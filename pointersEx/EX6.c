// Modifiez l’exercice précédent pour qu’il permette aussi 
// d’afficher interactivement un élément du tableau dont on 
// demandera préalablement le numéro de ligne et de colonne.
#include <stdio.h>

int main(void) 
{
    int arrPtr[2][3];
    int i = 0
      , j = 0
      ;
    int uS[2] = {0, 0};
    
    // Assign/read values
    for (; i < 2; ++i)
        for (j = 0; j < 3; ++j)
        {
            #define XY " x=%i, y=%i: ", i + 1, j + 1
            printf("Veuillez introduire une valeur pour" XY);
            scanf("%d", (*(arrPtr + i) + j)); 
        }
    // Ask which one to print
    for (i = 0; i < 2; ++i)
    {
        printf("Veuillez introduire la position %c que vous désirez afficher: ", (i) ? 'y' : 'x');
        scanf("%d", (uS + i));
    }
    // Print values
    #define VAL_XY " x=%i, y=%i est: %i\n", *(uS), *(uS + 1), *( *(arrPtr + *(uS) - 1) + *(uS + 1) - 1)
    printf("La veleur à" VAL_XY);
    
    return 0;
}