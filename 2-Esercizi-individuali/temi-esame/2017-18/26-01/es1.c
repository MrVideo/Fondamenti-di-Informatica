#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char departure[4];
    char arrival[4];
    int distance;
} rotta;

int main()
{
    rotta tratte[100];
    int n, i, min = -1;
    char toSearch[4];

    system("CLS");

    printf("Quante tratte vuoi aggiungere? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nTratta %d:", i + i);
        printf("\nPartenza: ");
        scanf("%s%*c", tratte[i].departure);
        printf("\nArrivo: ");
        scanf("%s%*c", tratte[i].arrival);
        printf("\nDistanza (mi): ");
        scanf("%d", &tratte[i].distance);
    }

    system("CLS");

    printf("Inserisci un aeroporto di partenza (i.e. MXP): ");
    scanf("%s", toSearch);

    for(i = 0; i < n; i++)
    {
        if(!strcmp(toSearch, tratte[i].departure) && (min == -1 || tratte[i].distance < tratte[min].distance))
            min = i;
    }

    if(min == -1)
        printf("\nNon è stato trovato l'aeroporto %s nel database.\n", toSearch);
    else
        printf("\nAeroporto più vicino: %s\n", tratte[min].arrival);
        
    return 0;
}