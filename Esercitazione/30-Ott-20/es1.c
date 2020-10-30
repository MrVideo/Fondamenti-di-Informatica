#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int *findInt(int *a, int c, int n);

int main()
{
    system("clear");

    int arr[DIM], c, *p = NULL, n, i;

    printf("Quanti valori vuoi immettere? ");
    scanf("%d", &n);
    
    printf("\nInserisci i valori nell'array:\n");
    for(i = 0; i < n; i++)
    {
        printf("\nElemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nInserisci il valore c da cercare: ");
    scanf("%d", &c);

    p = &arr[0];

    p = findInt(&arr[DIM], c, n);

    if(p == NULL)
    {
        printf("\nNon ci sono corrispondenze nell'array.\n");
    }
    
    return 0;
}

int *findInt(int *a, int c, int n)
{
    int i, found = 0;

    for(i = 0; i < n && found == 0; i++)
    {
        if(a[i] == c) {
            printf("\nTrovato %d in posizione %d", c, i);
            found = 1;
        }
    }

    if(found == 0)
        return NULL;
}