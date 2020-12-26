#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main()
{
    int in[20][20], transp[20][20], i, j, dim, tmp;
    
    srand(time(NULL));

    system("clear");

    printf("Inserisci la dimensione della matrice: ");
    scanf("%d", &dim);

    printf("\nLa matrice iniziale è:\n");

    for(i = 0; i < dim; i++)
    {
        for(j = 0; j < dim; j++)
        {
            in[i][j] = rand()%100;
            printf("%d ", in[i][j]);
        }
        printf("\n");
    }

    printf("\nLa matrice trasposta è:\n");

    for(i = 0; i < dim; i++)
    {
        for(j = 0; j < dim; j++)
        {
            transp[i][j] = in[j][i];
            printf("%d ", transp[i][j]);
        }
        printf("\n");
    }

    return 0;
}