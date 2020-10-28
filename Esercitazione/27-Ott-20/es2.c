#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int i = 0, guess = 0, max = 126, min = 0;
    char sel;

    system("clear");

    do
    {
        printf("Stai pensando al numero %d? (+, -, =) > ", min + ((max - min) / 2));
        scanf("%c%*c", &sel);

        switch(sel)
        {
            case '+':
                guess = 0;
                min = min + ((max - min) / 2);
                break;
            case '-':
                guess = 0;
                max = max - ((max - min) / 2);
                break;
            case '=':
                guess = 1;
                break;
            default:
                printf("\nHai inserito un carattere non valido. Riprova.\n");
                guess = 0;
                i--;
        }
        i++;
    } while(!guess);

    printf("\n\nIl numero è %d. L'ho indovinato in %d tentativi.\n", min + (max - min) / 2, i);
    
    return 0;
}