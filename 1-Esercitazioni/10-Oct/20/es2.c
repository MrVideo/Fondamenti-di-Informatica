#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 10

int main()
{
    float r, c, matA[MAX][MAX], matB[MAX][MAX];
    int i, j, na, ma, nb, mb, selColB[MAX], selLineB[MAX];

    system("clear");

    do
    {
        printf("Inserisci le dimensioni della matrice (righe, colonne): ");
        scanf("%d, %d", &na, &ma);
    } while((na < 1 || na > MAX) && (ma < 1 || ma > MAX));

    printf("\nInserisci i valori nella matrice A:\n");
    for(i = 0; i < na; i++)
        for(j = 0; j < ma; j++)
            {
                printf("\nElemento (%d, %d): ", i, j);
                scanf("%f", &mat[i][j]);
            }
    
    do
    {
        printf("\n\nInserisci la dimensione della matrice B: ");
        scanf("%d, %d", &nb, &mb);
    } while((nb < 1 || nb > na) && (mb < 1 || mb > ma));
    
    printf("\nInserisci le righe di A che vuoi usare per la matrice B:\n");
    
    for(i = 0; i < nb; i++)
        {
            printf("\nRiga: ");
            scanf("%d", &selLineB[i]);
        }
        
    printf("\nInserisci le righe di A che vuoi usare per la matrice B:\n");
    
    for(i = 0; i < mb; i++)
        {
            printf("\nColonna: ");
            scanf("%d", &selColB[i]);
        }

    for(i = 0; i < nb; i++)
        for(j = 0; j < mb; j++)
            {
                matB[i][j] = matA[selLineB[i]][selColB[j]];
            }

    system("clear");

    printf("La matrice B è:\n");
    
    for(i = 0; i < nb; i++)
        {
            for(j = 0; j < mb; j++)
                {
                    printf("%f\t", matB[i][j]);
                }
        }

    return 0;
}