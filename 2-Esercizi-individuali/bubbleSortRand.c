//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 100

void swap(float *a, float *b);

int main()
{
    float arr[DIM];
    int i;

    system("clear");

    srand(time(NULL));

    for(i = 0; i < DIM; i++)
        *(arr + i) = ((float)rand() / (float)(RAND_MAX)) * 100;

    printf("Prima:\n");   
    for(i = 0; i < DIM; i++)
        printf("%.1f ", arr[i]);

    for(i = 0; i < DIM - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            swap(arr + i, arr + i + 1);
            i = -1;
        }
    }

    printf("\nDopo:\n");
    for(i = 0; i < DIM; i++)
        printf("%.1f ", arr[i]);
    
    printf("\n");

    return 0;
}

void swap(float *a, float *b)
{
    float tmp = 0;

    tmp = *b;
    *b = *a;
    *a = tmp;
}