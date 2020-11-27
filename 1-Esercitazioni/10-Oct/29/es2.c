#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void swap(float *a, float *b);

int main()
{
    float a, b;
    
    system("clear");

    printf("Inserisci due numeri decimali: ");
    scanf("%f%f", &a, &b);

    swap(&a, &b);

    printf("\nI nuovi valori sono:\n");
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    
    return 0;
}

void swap(float *a, float *b)
{
    float tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}