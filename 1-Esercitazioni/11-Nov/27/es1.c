#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMaxMin(int *arr, int dim);

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum, *arrp;

    arrp = &arr[0];

    system("clear");

    sum = findMaxMin(arr, 10);

    printf("La somma degli elementi maggiore e minore dell'array è uguale a %d\n", sum);
    
    return 0;
}

int findMaxMin(int *arr, int dim)
{
    int i, max, min;

    min = *arr;
    max = *arr;

    for(i = 0; i < dim; i++)
    {
        if(*(arr + i) < min)
        {
            min = *(arr + i);
        }
        if(*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    
    return max + min;
}