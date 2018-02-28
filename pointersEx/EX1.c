// Programme qui permet de permuter 2 valeurs entières 
// sans en permuter les contenus (n’utilisez que des pointeurs et malloc).
#include <stdio.h>

int main(void) 
{
    int f
      , s
      ;
    int *fPtr = &f
      , *sPtr = &s
      ; 
    int i = 0;
    for (; i < 2; ++i) 
    {
        printf("Veuillez introduire une valeur pour la variable n° %i: ", i + 1);
        scanf("%d", (i) ? &s : &f);
    }
    printf("Permutations des variables…\n");
    
    fPtr = &s;
    sPtr = &f;
    
    printf("1: %i\t2: %i", *fPtr, *sPtr);
    return 0;
}