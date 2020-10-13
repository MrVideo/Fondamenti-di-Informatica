#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Scrivere un programma che prenda in ingresso un prezzo in euro e restituisca il numero minimo di
banconote utilizzando solo pezzi da 50, 20 e 5 euro. Indicare anche la moneta rimanente.
Note: usare l'operazione modulo "%" che calcola il resto di una divisione intera.
Bonus: Provare ad eseguire il programma con 547.35 come input e spiegare cosa succede */

int main()
{
    float change;
    int price, tmp, e50, e20, e5;

    printf("Inserisci il prezzo: ");
    scanf("%d", &price);

    e50 = price / 50;
    tmp = price - e50 * 50;

    e20 = price / 20;
    tmp = price - e20 * 20;

    e5 = price / 5;
    tmp = price - e5 * 5;

    change = tmp;
}