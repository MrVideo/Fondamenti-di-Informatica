#include <stdio.h>
#include <stdlib.h>

int *search(int *a, int c, int len);

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, toSearch, *found;

    printf("Inserisci il valore da cercare: ");
    scanf("%d", &toSearch);

    found = search(arr, toSearch, 10);

    if(found == NULL)
        printf("\nNon è stato trovato alcun valore corrispondente.\n");
    else
        printf("\nValore trovato in posizione %ld.\n", found - arr);
    
    return 0;
}

int *search(int *a, int c, int len)
{
    if(len == 0)
        return NULL;
    else if(*a == c)
        return a;
    else
        return search(a + 1, c, len - 1);
}