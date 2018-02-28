/* 
 * Programme qui calcule l’aire de rectangles. 
 * Le programme appel une fonction rectangles qui encode 
 * la longueur et la largeur des rectangles 
 * grâce à la fonction d’encodage d’un nombre entier. 
 * La fonction rectangles utilise ensuite une fonction pour 
 * calculer l’aire de chaque rectangle 
 * et une fonction pour afficher les résultats. 
 */
#include "intio.h"

int 
main(void) 
{
    inline unsigned char doesUserWantToRunAgain(void);
    
    do getAndPrintRectangleArea(); while (doesUserWantToRunAgain());
    
    return(0);
}

inline unsigned char
doesUserWantToRunAgain()
{
    char c[4];

    printf("\nVoullez-vous continuer? (O/N) : ");
    if(!fgets(c, 4, stdin)) exit(EXIT_FAILURE);
    else if (c[0] == 'o' || c[0] == 'O' || !strncmp(c, "oui", 3) || !strncmp(c, "Oui", 3)) return(1);
    else return(0);
}