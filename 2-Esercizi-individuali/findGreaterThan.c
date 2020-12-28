//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int main()
{
    int arr[DIM], in, thr, i = 0, j;
    
    system("clear");

    printf("Inserisci una sequenza di numeri (termina con 0):\n");
    
    do
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &in);
        *(arr + i) = in;
        i++;
    } while(in != 0);

    printf("Inserisci il tetto: ");
    scanf("%d", &thr);

    for(j = 0; j < i; j++)
    {
        if(*(arr + j) > thr)
            printf("%d ", *(arr + j));
    }
        
    return 0;
}