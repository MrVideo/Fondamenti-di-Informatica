/*
Si definisce un numero intero positivo bisottratto se gode delle seguenti due proprietà:
- è formato da almeno 3 cifre;
- a partire dalla terza cifra meno significativa, ogni cifra deve essere pari alla differenza
  in valore assoluto delle due cifre precedenti (precedenti nel senso di meno significative).

A. Implementare la funzione int genera(int c1, int c2, int n) che restituisce il numero bisottratto
   di n cifre che ha c1 come cifra meno significativa e c2 come penultima cifra meno significativa.
   Se non esiste nessun numero bisottratto con le caratteristiche richieste (n, c1 e c2) la
   funzione deve restituire -1.
B. Implementare la funzione void stampa(int n) che stampa a video tutti i numeri
   bisottratti di n cifre (ogni numero su una riga diversa).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int genera(int c1, int c2, int n);
void stampa(int n);

int main()
{
    printf("Un numero bisottratto è: %d\n\n", genera(5, 5, 5));
    stampa(5);
    return 0;
}

int genera(int c1, int c2, int n)
{
    if(n < 3)
        return -1;
    else
    {
        int bisub = c1 + 10 * c2;
        int i, tmp, n1 = c1, n2 = c2, j = 2;
        
        for(i = 0; i < n - 2; i++)
        {
            tmp = abs(n1 - n2);
            if(tmp == 0 && i == n - 3)
                return -1;
            else
            {
                bisub += pow(10, j) * tmp;
                j++;
                n1 = n2;
                n2 = tmp;
            }
        }

        return bisub;
    }

    return -1;
}

void stampa(int n)
{
    if(n < 3)
        printf("\nNon esistono numeri bisottratti di meno di 3 cifre.\n");
    else
    {
        int i, j, test;

        for(i = 0; i < 10; i++)
        {
            for(j = 0; j < 10; j++)
            {
                test = genera(i, j, n);
                if(test != -1)
                    printf("%d\n", genera(i, j, n));
            }
        }
    }
}