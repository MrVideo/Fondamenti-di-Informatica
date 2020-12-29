//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 20

int main()
{
    int matA[DIM][DIM], matB[DIM][DIM], n, m, i, j;

    srand(time(NULL));

    system("clear");

    printf("Inserisci il numero di righe: ");
    scanf("%d", &n);
    printf("\nInserisci il numero di colonne: ");
    scanf("%d", &m);

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
            matA[i][j] = rand()%100;
            matB[i][j] = rand()%100;
        }

    printf("\nLa somma delle matrici A e B è:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%d ", matA[i][j] + matB[i][j]);
        printf("\n");
    }

    return 0;       
}