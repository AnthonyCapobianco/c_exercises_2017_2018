/* 
 * Programme complet de codage binaire ou hexadécimal d’un nombre entier positif 
 * utilisant les fonctions écrites précédemment 
 */
#include <ctype.h>
#include "EX18/intio.h"

#define PRINT_REP(x) printf("La représentation %s de %u est: ", x, userDefinedNumber)

int 
main(void) 
{
        void printHexadecimalFromUint(unsigned int);
        void printBinaryFromUint(unsigned int);
        
        char userAnswerBuffer[20];
        unsigned int userDefinedNumber;
        
        printf("Veillez introduire un nombre entier positif: "); userDefinedNumber = getUintFromStdin();
        
        printf("Voullez vous afficher la représentation binaire ou hexadécimale de %u?\n> ", userDefinedNumber);
        if (!fgets(userAnswerBuffer, 20, stdin))
        {
                fprintf(stderr, "ERROR: END OF FILE"); /* Should never happen but pebcak. */
                exit(EXIT_FAILURE);
        }
        else
        {
                if (toupper(userAnswerBuffer[0]) == 'B') 
                {
                        PRINT_REP("binaire"); 
                        printBinaryFromUint(userDefinedNumber);
                }
                else
                {
                        PRINT_REP("hexadécimal"); 
                        printHexadecimalFromUint(userDefinedNumber);
                }        
        }
        
        return 0;
}

void 
printBinaryFromUint(unsigned int n)
{
        for (short i = 31; i >= 0; i--) 
                if ((n >> i) > 0) printf("%c%u", (!((i + 1) % 4)) ? ' ' : 0, ((n >> i) & 1));
}

void 
printHexadecimalFromUint(unsigned int decimalNumber)
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
