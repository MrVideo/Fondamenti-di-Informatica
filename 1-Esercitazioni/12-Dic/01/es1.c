#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);

int main()
{
    system("clear");

    int n;

    printf("Inserisci il numero di iterazioni: ");
    scanf("%d", &n);

    fibonacci(n);
}

void fibonacci(int n)
{
    int mat[100][100], i, j;

    FILE *file = fopen("piramide.txt", "w");

    for(i = 1; i < n; i++)
    {
        mat[i][0] = 1;

        for(j = 1; j < n; j++)
        {
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
        }
    }

    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(mat[i][j] != 0)
                fprintf(file, "%d ", mat[i][j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
}