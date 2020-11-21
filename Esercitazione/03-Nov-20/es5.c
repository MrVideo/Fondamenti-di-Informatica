#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printMatrix(float **matrix, int n, int m);

void readMatrix(float **matrix, int n, int m);

int main()
{
    float matA[20][20], matB[20][20];
    int i, j, n, m;
    
    system("clear");

    printf("Inserisci le dimensioni delle matrici:");
    printf("\nRighe: ");
    scanf("%d", &n);
    printf("\nColonne: ");
    scanf("%d", &m);

    printf("\nInserisci i valori nella matrice A:\n");
    
    readMatrix(matA, n, m);

    printf("\nInserisci i valori nella matrice B:\n");

    readMatrix(matB, n, m);

    printf("\nLa matrice A è:\n");
    
    printMatrix(matA, n, m);

    printf("\nLa matrice B è:\n");
    
    printMatrix(matB, n, m);

    printf("\nLa sottrazione A - B è uguale a:\n");
    
    for(i = 0; i < n; i++)
    {
        printf("\n");
        
        for(j = 0; j < m; j++)
        {
            printf("%f\t", matA[i][j] - matB[i][j]);
        }
    }

    return 0;
}

void printMatrix(float **matrix, int n, int m)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        printf("\n");
        
        for(j = 0; j < m; j++)
        {
            printf("%f\t", matrix[i][j]);
        }
    }
}

void readMatrix(float **matrix, int n, int m)
{
    int i, j;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
            printf("\nElemento (%d, %d): ", i + 1, j + 1);
            scanf("%f", matrix[i][j]);
        }
}