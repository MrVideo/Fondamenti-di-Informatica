#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef char stringa[30];

typedef struct
{
    stringa modello;
    stringa colore;
    int numCilindrata;
    int cilindrata[10];
    float prezzo;
} automobile;

int main()
{
    automobile collezione[100];
    int n, i = 0, j = 0, trovata = 0;

    system("clear");

    printf("Inserisci il numero di auto da salvare: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nInserisci il prezzo dell'auto: ");
        scanf("%f%*c", &collezione[i].prezzo);

        printf("\nInserisci il colore dell'auto: ");
        scanf("%s", &collezione[i].colore);

        printf("\nInserisci il modello dell'auto: ");
        scanf("%s", &collezione[i].modello);

        printf("\nInserisci il numero di cilindrate dell'auto: ");
        scanf("%d", &collezione[i].numCilindrata);

        for(j = 0; j < collezione[i].numCilindrata; j++)
        {
            
        }
    }

    printf("\nInserire targa da cercare: ");
    scanf("%s", targa);

    for(i = 0; i < n; i++)
    {
        if(strcmp(collezione[i].targa, targa) == 0)
            trovata = 1;
    }

    if(trovata)
    {
        printf("\n\nModello: %s\n", collezione[i - 1].modello);
        printf("Colore: %s\n", collezione[i - 1].colore);
        printf("Targa: %s\n", collezione[i - 1].targa);
        printf("Prezzo: %f\n", collezione[i - 1].prezzo);
    } else {
        printf("\n\nAuto non trovata.\n");
    }

    return 0;
}