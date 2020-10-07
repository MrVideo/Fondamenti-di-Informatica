#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sum = 0, tmp;

    system("clear");

    do //Usare do-while per evitare di usare variabili non inizializzate.
    {
        printf("Inserisci un numero: ");
        scanf("%d",&tmp);

        sum = sum + tmp;
    } while(tmp != 0);

    printf("\nLa somma di tutti i numeri è %d.\n",sum);
    
    return 0;
}