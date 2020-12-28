//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>

void swap(float *a, float *b);

int main()
{
    float arr[10] = {10, 8, 9, 7, 5, 6, 4, 2, 3, 1};
    int i;

    system("clear");

    printf("Prima:\n");   
    for(i = 0; i < 10; i++)
        printf("%.1f ", arr[i]);

    for(i = 0; i < 9; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            swap(arr + i, arr + i + 1);
            i = -1;
        }
    }

    printf("\nDopo:\n");
    for(i = 0; i < 10; i++)
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