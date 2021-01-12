//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int valori(int *a, int d);

int main()
{
    system("clear");
    
    int arr[DIM], i, len;

    printf("Quanti numeri vuoi inserire nell'array? ");
    scanf("%d", &len);

    for(i = 0; i < len; i++)
    {
        printf("\nValore %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nLa somma dell'elemento maggiore e del minore è %d\n", valori(arr, len));

    return 0;
}

int valori(int *a, int d)
{
    int min = *a, max = *a, i;

    for(i = 0; i < d; i++)
    {
        if(*(a + i) < min)
            min = *(a + i);
        if(*(a + i) > max)
            max = *(a + i);
    }

    return min + max;
}