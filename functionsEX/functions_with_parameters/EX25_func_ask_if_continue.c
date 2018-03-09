/* 06/03/2018 
 *
 * 
 */
#include <stdio.h>

int 
main(int argc, char *argv[]) 
{
		  
        return 0;
}

unsigned char 
isUserRunningAgain()
{
        char userAnswerBuffer[20];
        
        printf("\nOn continue (oui/non)?\n> ");
        if (!fgets(userAnswerBuffer, 20, stdin))
        {
                fprintf(stderr, "ERROR: END OF FILE");
                exit(EXIT_FAILURE);
        }
        else 
        {
                if (toupper(userAnswerBuffer[0]) == 'O') return 1;
                else return 0;
        }
}