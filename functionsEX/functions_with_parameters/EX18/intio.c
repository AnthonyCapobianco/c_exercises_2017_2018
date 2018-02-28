//
// intio.c
// Created by Anthony Capobianco on 28/02/2018.

#include "intio.h"

extern int 
sumOfInts(int n1, int n2)
{
    return(n1 + n2);
}

extern int 
printInt(int number)
{
    return(printf("%i", number));
}

extern int
getIntFromStdin()
{
    long numberToCastToInt = 0; 
    
    static char buffer[20];
    char *endPtr;
    
    if (!fgets(buffer, 20, stdin)) 
    {
        /* Shouldn't ever happen. */
        fprintf(stderr, "ERROR: END OF FILE"); 
        exit(EXIT_FAILURE);
    }
    else buffer[(strlen(buffer) - 1)] = 0;
    
    numberToCastToInt = strtol(buffer, &endPtr, 10);
    
    if (numberToCastToInt > INT_MAX || numberToCastToInt < INT_MIN)
    {
        fprintf(stderr, "ERROR #00: NUMBER TOO BIG TO BE AN INT");
        exit(EXIT_FAILURE);
    }
    else return((int) numberToCastToInt);
}

extern int
areaOfRectangle(int length, int height)
{
    return(length * height);
}

extern int 
getAndPrintRectangleArea(void)
{
    int side[2]
      , area
      ;
    unsigned char i = 0;

    while (i < 2)
    {
        printf("Veuillez introduire %s du rectangle: ", (!i) ? "longueur" : "largeur");
        
        side[(int) i] = getIntFromStdin();
        
        if (side[(int) i] <= 0) fprintf(stderr, "La valeur doit être un nombre positif non nul.");
        else i++;
    }
    
    area = areaOfRectangle(side[0], side[1]);
    
    printf("L'aire d'un rectangle de longueur %i et de largeur %i est de: ", side[0], side[1]);
    
    return(printInt(area));
    
}