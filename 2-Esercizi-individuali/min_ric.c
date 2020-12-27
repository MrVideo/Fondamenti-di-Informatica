#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

float minric(float *v, int dim);

int main()
{
    float v[10], minV;
    int i;

    srand(time(NULL));

    system("clear");

    for(i = 0; i < 10; i++)
    {
        v[i] = ((float)rand() / (float)(RAND_MAX)) * 10;
        printf("%d. %f\n", i, v[i]);
    }

    minV = minric(&v[0], 10);

    printf("\nIl valore minimo dell'array è %f\n", minV);
    
    return 0;
}

float minric(float *v, int dim)
{
    float minV;
    
    if(dim == 1)
        return *v;
    else
    {
        minV = minric(v + 1, dim - 1);
        
        if(minV < *v)
            return minV;
        else
            return *v;
    }
}