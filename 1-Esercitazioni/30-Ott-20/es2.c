#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void findInt(int *a, int *f, int c, int n);

int main()
{
    int a[DIM], f[DIM], i, n, c, *pos = NULL;

    system("clear");

    do
    {
        printf("Quanti numeri vuoi inserire nell'array? ");
        scanf("%d", &n);
    } while(n > DIM || n <= 0);

    printf("Popola l'array:\n");
    for(i = 0; i < n; i++)
    {
        printf("\nElemento %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nInserisci l'elemento da cercare: ");
    scanf("%d", &c);
    
    findInt(a, f, c, n);

    printf("\nA\tF");

    for(i = 0; i < DIM; i++)
    {
        printf("\n%d\t%d", a[i], f[i]);
    }
    

    for(i = 0; i < n; i++)
    {
        if(f[i] == -1)
            printf("\nNessuna corrispondenza trovata.\n");
        else
            printf("\nCorrispondenza trovata in posizione %d\n", f[i]);
    }

    return 0;
}

void findInt(int *a, int *f, int c, int n)
{
    int i, j; 

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i] == c)
            {
                f[j] = i;
            }
            else
            {
                f[j] = -1;
            }
        }
    }
}