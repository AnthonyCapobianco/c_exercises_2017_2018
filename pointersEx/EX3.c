// Programme qui déclare une variable chaîne ch de longueur maximale 100, 
// lit ensuite un entier i (<100) et 
// affiche ensuite les i premiers caractères contenus dans l’espace réservé pour ch.

#include <stdio.h>

int main(void)
{
    char ch[100];
    char *p = ch;
    int i;
    int userIsAbleToType = 0;
    int j = 0;
    
    do
    {
        i = -1;
        printf("Veuillez un nombre de 0 à 100: ");
        userIsAbleToType = scanf("%d", &i);
        if (!userIsAbleToType)
        {
            fprintf(stderr, "ERR: Le nombre doit être un nombre de 0 à 100.");
            fprintf(stderr, "\nVeuillez relancer le programme et réessayer.");
            return(1);
        }
    } while (i < 0 || i > 100);
    
    for (; j < i; ++j) printf("%c", *(p + j));
    return 0;
}