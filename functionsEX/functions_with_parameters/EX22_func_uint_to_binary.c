/* Fonction qui à partir d’un nombre entier positif reçu en paramètre calcul et affiche sa valeur binaire. */
#include <stdio.h>

void printBinaryFromUint(const unsigned int n);

int 
main(void) 
{
    printBinaryFromUint(1337);
    return 0;
}

void 
printBinaryFromUint(const unsigned int n)
{
    for (short i = 31; i >= 0; i--) if ((n >> i) > 0) 
            printf("%c%u", (!((i + 1) % 4)) ? ' ' : 0, ((n >> i) & 1));
}
/* (!((i + 1) % 4)) ? ' ' : 0 
 * If the remainder of i + 1 by 4 is 0 then the character is a space
 * Else the char is 0 aka '\0' thus doesn't get printed.
 */