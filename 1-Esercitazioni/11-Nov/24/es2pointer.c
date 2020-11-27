#include <stdio.h>
#include <stdlib.h>

#define DIM 100

void fillArr(int *arr, int dim);
void printArr(int *arr, int dim);

int main()
{
    system("CLS");

    int arr[DIM], dim, *p;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &dim);

    p = &arr[0];

    fillArr(p, dim);

    printArr(p, dim);

    return 0;
}

void fillArr(int *arr, int dim)
{
    printf("\nInserisci i valori nell'array:\n");
    
    int i;

    for(i = 0; i < dim; i++)
    {
        printf("\nElemento %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void printArr(int *arr, int dim)
{
    int i;

    for(i = 0; i < dim; i++)
    {
        printf("\nElemento %d: %d", i + 1, *(arr + i));
    }
}