#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 101

int main()
{
    int l, count = 0;
    char str[DIM];

    system("clear");

    printf("Inserisci la lunghezza della stringa che vuoi trovare: ");
    scanf("%d", &l);

    do
    {
        printf("\nInserisci una stringa (o \"stop\" per concludere): ");
        scanf("%s", str);

        if(strlen(str) == l)
        {
            count++;
        }
    } while(strcmp(str, "stop"));

    if(l == 4)
    {
        count--;
    }

    if(count == 1)
    {
        printf("\nHai digitato una stringa di lunghezza %d.\n", l);
    } else if(count == 0) {
        printf("\nNon hai digitato stringhe di lunghezza %d.\n", l);
    } else {
        printf("\nHai digitato %d stringhe di lunghezza %d.\n", count, l);
    }

    return 0;
}