#include <stdio.h>
#include <stdlib.h>

void swap(float *a, float *b);

int main()
{
    system("clear");

    float arr[10];
    int i, j;

    printf("Inserisci 10 numeri decimali:\n");
    
    for(i = 0; i < 10; i++)
    {
        printf("\nElemento %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    for(i = 9; i >= 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    printf("\nL'array ordinato è:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%f\t", arr[i]);
    }
    printf("\n");
    
    return 0;
}

void swap(float *a, float *b)
{
    float tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}