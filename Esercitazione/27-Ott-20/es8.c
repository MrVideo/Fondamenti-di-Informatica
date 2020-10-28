#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int randPar(int n);

int main()
{
    srand(time(NULL));
    
    int numDadi, i;

    printf("Inserisci il numero di dadi da lanciare: ");
    scanf("%d", &numDadi);
    printf("\n");

    for(i = 0; i < numDadi; i++)
    {
        printf("Dado %d: %d\n", i + 1, randPar(6));
    }
}

int randPar(int n)
{
    return rand() % n + 1;
}