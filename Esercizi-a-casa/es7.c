#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, ris;
    
    system("clear");

    printf("Inserisci un numero intero: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        {
            ris = num + 2;
        }
    else
        {
            ris = num + 1;
        }

    printf("\nIl primo numero pari maggiore di %d è %d.\n", num, ris);

    return 0;
}