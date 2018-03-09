/* 06/03/2018 
 *
 * Ecrire une fonction qui à partir d'un nombre hexadécimel reçu en paramètre 
 * calcule et affiche sa valeur en base 10
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char HEX_LOOKUP_TABLE[17] = "0123456789abcdef";

unsigned int printUintFromHexadecimal(const char*);

int 
main(void) 
{
    printf("%u", printUintFromHexadecimal("ff"));
    
    return 0;
}

unsigned int 
printUintFromHexadecimal(const char *HEX_STRING)
{
    unsigned int stringLength = strlen(HEX_STRING) + 1;
    
    unsigned int i
               , j
               ; 
    
    static unsigned int decimalSum;
    
    static char *hexStringReverseCopy; hexStringReverseCopy = calloc(stringLength + 1, 1);
    
    /* Reverse the string. */
    for (i = 0, j = (stringLength - 2); i < stringLength && j < (stringLength - 1); i++, j--) 
    {
        if (HEX_STRING[j] == 'x' || HEX_STRING[j] == 'X') break;
        else hexStringReverseCopy[i] = tolower(HEX_STRING[j]);
    }
    
    /* Now we check the values and add them to the decimalSum */
    for (unsigned int mult = 1, i = 0; i < stringLength; i++, mult *= 16) 
    {
        for (j = 0; j < 16; j++)
        {
            if (*(hexStringReverseCopy + i) == *(HEX_LOOKUP_TABLE + j)) decimalSum += j * mult;
        }
    }
    
    free(hexStringReverseCopy);
    
    return decimalSum;
}
