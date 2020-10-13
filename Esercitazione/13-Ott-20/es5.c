#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Scrivere un programma che prenda in ingresso un prezzo in euro e restituisca il numero minimo di
banconote utilizzando solo pezzi da 50, 20 e 5 euro. Indicare anche la moneta rimanente.
Note: usare l'operazione modulo "%" che calcola il resto di una divisione intera.
Bonus: Provare ad eseguire il programma con 547.35 come input e spiegare cosa succede */

int main()
{
    int price, e50, e20, e5;

    printf("Inserisci il prezzo: ");
    scanf("%d", &price);

    e50 = price / 50;
    price = price - e50 * 50;

    e20 = price / 20;
    price = price - e20 * 20;

    e5 = price / 5;
    price = price - e5 * 5;

    printf("\nPer pagare serviranno:\n- %d banconote da 50\n- %d banconote da 20\n- %d banconote da 5\n", e50, e20, e5);

    if(price > 0)
    {
        printf("Rimangono ancora %d Euro.\n", price);
    }

    return 0;
}