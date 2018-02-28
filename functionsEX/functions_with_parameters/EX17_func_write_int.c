/* Fonction qui permet d’écrire un entier reçu en paramètre. */
#include <stdio.h>

int main() 
{
    int printInt(int);

    printInt(10);

    return(0);
}

int
printInt(int number)
{
    return(printf("%i", number));
}