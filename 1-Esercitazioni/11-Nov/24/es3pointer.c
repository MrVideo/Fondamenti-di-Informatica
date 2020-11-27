#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 100

void stringReverse(char *string);

int main()
{
    system("clear");

    char string[DIM], i;

    printf("Inserisci una stringa: ");
    scanf("%s", string);

    printf("\nLa stringa invertita è:\n");

    stringReverse(string);

    printf("\n");
    
    return 0;
}

void stringReverse(char *string)
{
    int i;

    for(i = strlen(string); i >= 0; i--)
    {
        printf("%c", *(string + i));
    }
}