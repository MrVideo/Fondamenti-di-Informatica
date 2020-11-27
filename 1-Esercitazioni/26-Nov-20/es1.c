#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define DIM 100

void riduci_iter(char *s);
void riduci_ric(char *s);
char *riduci_ric2(char *s);

int main()
{
    system("clear");

    char string[DIM], string2[DIM], *stringptr = NULL, *string2ptr = NULL, *noVowelsPtr = NULL;
    int i;

    printf("Inserisci una stringa di caratteri: ");
    scanf("%s", string);
    printf("Inserisci un'altra stringa di caratteri: ");
    scanf("%s", string2);

    stringptr = &string[0];
    string2ptr = &string2[0];

    noVowelsPtr = riduci_ric2(stringptr);
    printf("\nLa stringa 1 senza vocali è:\n");
    
    for(i = 0; i <= strlen(noVowelsPtr); i++)
    {
        printf("%c", *(noVowelsPtr + i));
    }

    printf("\n");

    free(noVowelsPtr);
    noVowelsPtr = NULL;

    noVowelsPtr = riduci_ric2(string2ptr);
    printf("\nLa stringa 2 senza vocali è:\n");
    
    for(i = 0; i <= strlen(noVowelsPtr); i++)
    {
        printf("%c", *(noVowelsPtr + i));
    }

    printf("\n");

    riduci_ric(stringptr);
    riduci_ric(string2ptr);

    if(!strcmp(stringptr, string2ptr))
        printf("\nLe stringhe sono uguali a meno di vocali.\n");
    else
        printf("\nLe stringhe sono diverse, con e senza vocali.\n");

    return 0;
}

void riduci_iter(char *s)
{
    int i;

    for(i = 0; i <= strlen(s); i++)
    {
        if(*(s + i) == 'a' || *(s + i) == 'e' || *(s + i) == 'i' || *(s + i) == 'o' || *(s + i) == 'u')
        {
            *(s + i) = ' ';
        }
    }
}

void riduci_ric(char *s)
{
    int i = 0;
    
    if(strlen(s) == 0)
        return;

    riduci_ric(s + 1);

    if(strlen(s) > 0)
    {
        if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            {
                for(i = 1; i < strlen(s) + 1; i++)
                    *(s + i - 1) = *(s + i);
            }
    }
}

char *riduci_ric2(char *s)
{
    if(strlen(s) == 0)
        return "";

    if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            return riduci_ric2(s + 1);
        else
        {
            char *noVowel = malloc(sizeof(char) * strlen(s) + 1);
            char *suffix = riduci_ric2(s + 1);

            *noVowel = *s;
            *(noVowel + 1) = '\0';

            strcat(noVowel, suffix);

            if(strlen(suffix) > 0)
                free(suffix);

            return noVowel;
        }
}
