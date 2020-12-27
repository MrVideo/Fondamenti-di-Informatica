#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 100

void noVowelInator(char *s);

int main()
{
    char str1[DIM], str2[DIM];

    system("clear");

    printf("Inserisci una stringa: ");
    scanf("%s", str1);
    printf("\nInserisci un'altra stringa: ");
    scanf("%s", str2);

    noVowelInator(str1);
    noVowelInator(str2);

    printf("\nStringa 1 ridotta: %s\n", str1);
    printf("\nStringa 2 ridotta: %s\n", str2);
    
    if(!strcmp(str1, str2))
        printf("\nLe stringhe sono uguali a meno di vocali\n");
    else
        printf("\nLe stringe sono diverse anche senza vocali\n");
    
    return 0;
}

void noVowelInator(char *s)
{
    int i, j = 0;

    for(i = 0; *(s + i) != '\0'; i++)
    {
        if(*(s + i) != 'a' && *(s + i) != 'e' && *(s + i) != 'i' && *(s + i) != 'o' && *(s + i) != 'u')
        {
            *(s + j) = *(s + i);
            j++;
        }
    }

    *(s + j) = '\0';
}