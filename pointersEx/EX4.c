// programme qui avec des pointeurs (variables int et char aussi autorisées) permet de 
// réserver, lire et afficher une chaîne de caractères de longueur maximale 100 (utilizez getchar et putchar)
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 10

int main(void) 
{
    char* ch;
    int i = 0;
    int c; 
    
    ch = (char *) malloc(MAX_LEN + sizeof(char));
    char *p = ch;
    do
    {
        printf("Veuillez introduire une chaine de charactère (max %i charactères):\n", MAX_LEN);
        while((c = getchar()) != EOF) putchar(*(p + i) = c);
    } while ((i < MAX_LEN) ? ++i : i);
    return 0;
}