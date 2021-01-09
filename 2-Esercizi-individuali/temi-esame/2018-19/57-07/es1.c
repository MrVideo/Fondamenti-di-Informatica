/*
Scrivere una funzione che riceve in ingresso un valore intero, quindi calcola e restituisce
il numero di cifre che lo compongono e sono divisori del numero stesso.
*/

//! Funziona correttamente

#include <stdio.h>

int divdigits(int n);

int main()
{
    printf("\n%d: %d", 1012, divdigits(1012));
    printf("\n%d: %d", 12, divdigits(12));
    printf("\n%d: %d", 100, divdigits(100));

    return 0;
}

int divdigits(int n)
{
    int div = 0, r = 0, tmp = n;

    while(tmp != 0)
    {
        if(n % (tmp % 10) == 0)
            r++;
        tmp = tmp / 10;
    }

    return r;
}