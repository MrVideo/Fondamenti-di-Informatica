#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define DIM 100

void riduci_iter(char *s, int len);
void riduci_ric(char *s, int len);

int main()
{
    system("clear");

    char string[DIM], *stringptr;
    int i, len;

    printf("Inserisci una stringa di caratteri: ");
    scanf("%s", string);

    stringptr = &string[0];
    len = strlen(string);

    riduci_ric(stringptr, len);

    printf("\nLa stringa senza vocali è:\n");
    
    for(i = 0; i <= len; i++)
    {
        printf("%c", string[i]);
    }

    printf("\n");

    return 0;
}

void riduci_iter(char *s, int len)
{
    int i;

    for(i = 0; i <= len; i++)
    {
        if(*(s + i) == 'a' || *(s + i) == 'e' || *(s + i) == 'i' || *(s + i) == 'o' || *(s + i) == 'u')
        {
            *(s + i) = ' ';
        }
    }
}

void riduci_ric(char *s, int len)
{
    if(len == 0)
    {
        return;
    } else {
        if(*(s + len - 1) == 'a' || *(s + len - 1) == 'e' || *(s + len - 1) == 'i' || *(s + len - 1) == 'o' || *(s + len - 1) == 'u')
        {
            *(s + len - 1) = ' ';
        }

        riduci_ric(s, len);
    }
}