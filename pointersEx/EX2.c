// programme qui permet de lire une chaîne de caractère (normalement) 
// calcule (en utilisant le formalisme pointeur) la longueur de cette dernière
#include <stdio.h>
#include <string.h>

#define butterSize 250
int main(void) 
{
    char s[butterSize];
    char *p = s;// Pointer to begining of sting s

    int i = 0;

    printf("Veuillez introduire une chaine de charactères:\n");
    scanf(" %[^\n]", s);
    
    while (*(p + (++i))); // Get length of s
    
    printf("La chaine contient %i charactères.", i);
    return 0;
}