#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void conv(int A[][100], int B[][100], int K[3][3], int nr, int nc);

void printMatrix(int mat[][100], int nr, int nc);

void fillMatrix(int mat[][100], int nr, int nc);

void printMatrix(int mat[][100], int nr, int nc);

int main()
{
    system("CLS");

    srand(time(0));

    int K[3][3] = {{0, 1, 0}, {-1, 3, -1}, {0, -1, 0}}, A[100][100], B[100][100];
    int nc, nr;

    printf("Inserisci il numero di colonne: ");
    scanf("%d", &nc);
    printf("Inserisci il numero di righe: ");
    scanf("%d", &nr);

    fillMatrix(A[100][100], nr, nc);

    printMatrix(A[100][100], nr, nc);
    printMatrix(K[3][3], 3, 3);

    conv(A[100][100], B[100][100], K[3][3], nr, nc);

    printMatrix(B[100][100], nr, nc);

    return 0;
}

void conv(int A[][100], int B[][100], int K[3][3], int nr, int nc)
{
    int i, j, k, l;

    for(i = 0; i < nr; i++)
        for(j = 0; j < nc; j++)
        {
            int tmp = 0;
            for(k = 0; k < 3; k++)
                for(l = 0; l < 3; l++)
                {
                    int ARowIndex = i - 1 + k;
                    int AColumnIndex = j - 1 + l;

                    if(ARowIndex < 0 || ARowIndex >= nr)
                        ARowIndex = i;
                    if(AColumnIndex < 0 || AColumnIndex >= nc)
                        AColumnIndex = j;
                    
                    tmp += A[i + k - 1][j + l - 1] * K[k][l];
                }
            B[i][j] = tmp;
        }
}

void fillMatrix(int mat[][100], int nr, int nc)
{
    int i, j;
    
    for(i = 0; i < nr; i++)
        for(j = 0; j < nc; j++)
        {
            mat[i][j] = rand() % 11;
        }
}

void printMatrix(int mat[][100], int nr, int nc)
{
    int i, j;

    for(i = 0; i < nr; i++)
    {
        printf("\n");

        for(j = 0; j < nc; j++)
        {
            printf("\t%d", mat[i][j]);
        }
    }
}