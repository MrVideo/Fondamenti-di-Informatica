#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    char model[50];
    char plateno[7];
    char colour[15];
    int price;
} database;

int main()
{
    database cars[100];
    int n, i, found = 0;
    char toFind[7];

    system("clear");

    printf("Inserisci il numero di auto da inserire: ");
    scanf("%d", &n);

    system("clear");

    for(i = 0; i < n; i++)
    {
        printf("Auto #%d", i + 1);
        printf("\nModello: ");
        scanf("%s%*c", cars[i].model);
        printf("Numero di targa: ");
        scanf("%s%*c", cars[i].plateno);
        printf("Colore: ");
        scanf("%s%*c", cars[i].colour);
        printf("Prezzo: ");
        scanf("%d", &cars[i].price);
        printf("\n");
    }

    system("clear");

    printf("Inserisci la targa del veicolo da cercare: ");
    scanf("%s", toFind);

    printf("\n%s", cars[0].plateno);
    printf("\n%s", toFind);
    

    for(i = 0; i < n && !found; i++)
        if(!strcmp(cars[i].plateno, toFind))
            found++;

    if(found)
    {
        printf("\nAuto #%d", i - 1);
        printf("\nModello: %s", cars[i - 1].model);
        printf("\nColore: %s", cars[i - 1].colour);
        printf("\nPrezzo: €%d", cars[i - 1].price);
        printf("\n");
    }
    else
        printf("\nNon sono state trovate corrispondenze nel database.\n");

    return 0;
}