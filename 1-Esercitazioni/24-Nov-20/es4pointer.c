#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define DIM 10

int binary_search(int *p, int elem, int a, int b);

int main()
{
    int v[DIM], toSearch, start, end, i, found, *p;

    srand(time(NULL));

    for(i = 0; i < DIM; i++)
        v[i] = rand()%10;

    system("clear");

    p = &v[0];

    printf("L'array è:\n");

    for(i = 0; i < DIM; i++)
        printf("%d ", v[i]);

    printf("\nInserisci l'elemento da cercare: ");
    scanf("%d", &toSearch);

    printf("\nInserisci la posizione di ricerca iniziale: ");
    scanf("%d", &start);
    printf("\nInserisci la posizione di ricerca finale: ");
    scanf("%d", &end);

    found = binary_search(p, toSearch, start, end);

    if(found == -1)
        printf("\nL'elemento non è stato trovato.\n");
    else
        printf("\nL'elemento è stato trovato in posizione %d.\n", found);
        
    return 0;
}

int binary_search(int *p, int elem, int a, int b)
{
    if(a == b)
    {
        if(*(p + a) == elem)
            return a;
        else
            return -1;
    }
    else
    {
        if(*(p + a) == elem)
            return a;
        else if(*(p + b) == elem)
            return b;
        else
            return binary_search(p, elem, a + 1, b - 1);
    }
}