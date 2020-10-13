#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Scrivere un programma che chieda all'utente di inserire un numero intero n e visualizzi
a video la somma dei primi n numeri naturali (la formula per il calcolo è [n*(n+1)/2]). */

int main()
{
    int n;

    system("CLS");

    do
    {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("\nLa somma dei primi %d numeri naturali è %d\n", n, (n * (n + 1)) / 2);
    
    return 0;
}
