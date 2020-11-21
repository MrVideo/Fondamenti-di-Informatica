#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
    int i, j, n, matrix[MAX][MAX], d = 0, d_up = 0, d_down = 0;
    
    system("clear");

    do
    {
        printf("Inserisci le dimensioni della matrice (righe e colonne): ");
        scanf("%d", &n);
    } while(n > MAX || n < 2);

    printf("\nInserisci gli elementi della matrice (interi):\n");
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("\nElemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        
        printf("\n");
    }

    for(i = 0; i < n; i++) // Somma diagonale principale
    {
        d += matrix[i][i];
    }

    for(i = 0; i < n; i++) // Elementi sopra la diagonale principale
    {
        for(j = 1; j < n; j++)
        {
            if(i + 1== j && i + 1 < n)
                d_up += matrix[i][j];
        }
    }

    for(i = 1; i < n; i++) // Elementi sotto la diagonale principale
    {
        for(j = 0; j < n; j++)
        {
            if(i == j + 1 && j + 1 < n)
                d_down += matrix[i][j];
        }
    }

    system("clear");

    printf("Matrice selezionata:\n\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nLa somma degli elementi della diagonale principale vale %d", d);
    printf("\nLa somma degli elementi sopra la diagonale principale vale %d", d_up);
    printf("\nLa somma degli elementi sotto la diagonale principale vale %d\n", d_down);

    return 0;
}