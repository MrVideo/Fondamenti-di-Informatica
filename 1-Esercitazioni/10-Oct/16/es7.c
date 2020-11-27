#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 1001

int main()
{
    int i, len, mean = 0, count = 0;
    char str[DIM];

    system("clear");

    printf("Inserisci parole separate da virgole (massimo 1000 caratteri):\n\n");
    scanf("%[^\n]", str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == ',')
        {
            count++;
        } else if(str[i] != ' ') {
            mean++;
        }
    }

    count++; //Il numero di parole è il numero di virgole + 1
    mean /= count;

    system("clear");

    printf("Hai scritto %d parole. La media di caratteri per parola è %d.\n", count, mean);

    return 0;
}