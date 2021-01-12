#include <stdio.h>
#include <stdlib.h>

int search(int *a, int c, int len, int *save);

int main()
{
    int a[10] = {1, 2, 1, 4, 1, 6, 7, 8, 1, 0}, save[10], toSearch, len = 10, i = 0, found = 0;

    printf("Inserisci il valore da cercare: ");
    scanf("%d", &toSearch);

    found = search(a, toSearch, len, save);

    if(found == 0)
        printf("\nNell'array non è presente il valore %d.\n", toSearch);
    else
    {
        printf("\nIl valore %d è stato trovato nelle posizioni ", toSearch);
        
        for(i = 0; i < found; i++)
            printf("%d ", save[i]);
            
        printf("\n");
    }
    
    return 0;
}

int search(int *a, int c, int len, int *save)
{
    int i, found = 0;

    for(i = 0; i < len; i++)
    {
        if(*(a + i) == c)
        {
            *(save + found) = i;
            found++;
        }
    }

    return found;
}