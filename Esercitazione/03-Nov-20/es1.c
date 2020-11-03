#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Corretto

void *reverseStr(char *string, char *reverse, int end);

int main()
{
    system("clear");

    char string[21], reverse[21];
    int i, end;

    for(i = 0; i < 21; i++)
        reverse[i] = '0';

    printf("Inserisci una stringa (max 20 caratteri): ");
    scanf("%s", string);

    end = strlen(string);

    reverseStr(string, reverse, end);

    printf("\nLa stringa invertita è:\n");

    for(i = 0; i <= end; i++)
        printf("%c", reverse[i]);
    printf("\n");

    return 0;
}

void *reverseStr(char *string, char *reverse, int end)
{
    int i;

    for(i = 0; i <= end; i++)
    {
        reverse[i] = string[end - i];
    }
}