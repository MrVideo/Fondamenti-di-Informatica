#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIM 100

int main()
{
    int num[DIM], rev[DIM], i, j, end;

    system("clear");
    
    for(i = 0; i < DIM; i++)
    {
        printf("Inserisci un numero (posizione %d): ", i);
        scanf("%d", &num[i]);
        if(num[i] <= 0)
        {
            end = i - 1;
            break;
        }
    }

    for(j = 0; j <= end; j++)
    {
        rev[j] = num[end - j];
    }
    
    /* Debug
    for(i = 0; i <= end; i++)
    {
        printf("\nnum[%d] = %d - rev[%d] = %d\n", i, num[i], i, rev[i]);
    }
    */

    return 0;
}