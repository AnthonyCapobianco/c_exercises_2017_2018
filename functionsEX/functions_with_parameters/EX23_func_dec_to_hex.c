/* Fonction qui à partir d’un nombre entier positif reçu en paramètre calcul et affiche sa valeur hexadécimal */
#include <stdio.h>

int 
main(void) 
{
    void printHexadecimalFromUint(const unsigned int decimalNumber);
    printHexadecimalFromUint(1337);
    return 0;
}

void 
printHexadecimalFromUint(const unsigned int decimalNumber)
{
    char hexArray[9] = "";
    
    short i = 0; 
    
    for (unsigned int n = decimalNumber; n >= 1 && i < 9; i++, n /= 16)
    {
        if ((n % 16) < 10) hexArray[i] = '0' + (n % 16);
        else hexArray[i] = 'a' + ((n % 16) - 10);
    }

    for (i = 7; i >= 0; i--) if (hexArray[i]) printf("%c", hexArray[i]);
}