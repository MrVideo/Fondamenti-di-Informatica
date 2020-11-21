//! Scrivere una funzione ricorsiva che ritorni il numero di cifre di un numero n

// Caso base: N < 10 -> ncifre = 1
// Passo ricorsivo: cifre(n) = 1 + cifre(n / 10) poiché n ha una cifra in più di n / 10

#include <stdio.h>
#include <stdlib.h>

int cifre(int n);

int main()
{
    int n;
    
    system("clear");

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    int ncifre = cifre(n);

    if(ncifre == 1)
        printf("Il numero %d ha 1 cifra.\n", n);
    else
        printf("Il numero %d ha %d cifre.\n", n, ncifre);
    
    return 0;
}

int cifre(int n)
{
    if(n < 10)
        return 1;
    else
        return 1 + cifre(n / 10);
}