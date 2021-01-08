/*
28 Gennaio 2019 - Esercizio 1

Scrivere una funzione genera che riceve in ingresso un intero n e stampa a video la rappresentazione
in base 2 di tutti i numeri naturali che possono essere rappresentati usando n bit.
*/

#include <stdio.h>
#include <math.h>

void genera(int n);

int main() //Solo per testing, non richiesto dal problema
{
    int n;
    printf("\nInserisci un numero: ");
    scanf("%d", &n);
    genera(n);
    return 0;
}

void genera(int n)
{
    int i, j, k, bin[50] = {0}, dec, tmp;

    if(n == 0)
    {
        printf("\nNon si possono rappresentare numeri con 0 bit.\n");
        return;
    }
    else if(n < 0)
    {
        printf("\nNon si possono rappresentare numeri con un numero negativo di bit.\n");
        return;
    }
    else
    {    
        for(i = 0; i < pow(2, n); i++)
        {
            dec = pow(2, n) - 1 - i;
            tmp = dec;

            if(dec == 0)
            {
                for(k = 0; k < n; k++)
                    printf("0");
                printf("\n");
            }
            else
            {
                j = 0;

                while(tmp != 0)
                {
                    bin[j] = tmp % 2;
                    tmp /= 2;
                    j++;
                }
                
                for(k = n - 1; k >= 0; k--)
                    printf("%d", bin[k]);

                printf(", ");

                for(k = 0; k < n; k++)
                    bin[k] = 0;
            }
        }
    }
}

//! Corretto