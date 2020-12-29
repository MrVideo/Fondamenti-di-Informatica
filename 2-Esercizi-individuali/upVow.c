//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 100

int main()
{
    char str[DIM];
    int i;

    system("clear");

    printf("Inserisci una stringa: ");
    scanf("%[^\n]", str);

    for(i = 0; i <= strlen(str); i++)
    {
        switch(str[i])
        {
            case 'a':
                str[i] = 'A';
                break;
            case 'e':
                str[i] = 'E';
                break;
            case 'i':
                str[i] = 'I';
                break;
            case 'o':
                str[i] = 'O';
                break;
            case 'u':
                str[i] = 'U';
                break;
        }
    }

    printf("\nLa stringa modificata è:\n");
    for(i = 0; i <= strlen(str); i++)
        printf("%c", str[i]);
    printf("\n");
    
    return 0;
}