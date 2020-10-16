#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 101

int main()
{
    char str[DIM];
    int i, len;

    system("clear");

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            printf("\nLa stringa non è palindroma.\n");
            return 0;
        }
    }

    printf("\nLa stringa è palindroma.\n");
    
    return 0;
}