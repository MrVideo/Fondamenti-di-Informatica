#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define DIM 10

int binary_search(int v[], int elem, int a, int b);

int main()
{
    int v[DIM], toSearch, start, end, i, found;

    srand(time(NULL));

    for(i = 0; i < DIM; i++)
        v[i] = rand()%10;

    system("CLS");

    printf("Inserisci l'elemento da cercare: ");
    scanf("%d", &toSearch);

    printf("\nInserisci la posizione di ricerca iniziale: ");
    scanf("%d", &start);
    printf("\nInserisci la posizione di ricerca finale: ");
    scanf("%d", &end);

    found = binary_search(&v[0], toSearch, start, end);

    if(found == -1)
        printf("\nL'elemento non è stato trovato.\n");
    else
        printf("\nL'elemento è stato trovato in posizione %d.\n", found);

    system("PAUSE");
        
    return 0;
}

int binary_search(int v[DIM], int elem, int a, int b)
{
    if(a == b)
    {
        if(v[a] == elem)
            return a;
        else
            return -1;
    }
    else
    {
        if(v[a] == elem)
            return a;
        else if(v[b] == elem)
            return b;
        else
            return binary_search(v[DIM], elem, a + 1, b - 1);
    }
}