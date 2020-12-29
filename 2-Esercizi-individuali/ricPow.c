#include <stdio.h>
#include <stdlib.h>

int ricpow(int x, int y);

int main()
{
    system("clear");

    int x, y;

    printf("Inserisci la base: ");
    scanf("%d", &x);
    printf("Inserisci l'esponente: ");
    scanf("%d", &y);

    printf("%d elevato alla %d è uguale a %d.\n", x, y, ricpow(x, y));
    
    return 0;
}

int ricpow(int x, int y)
{
    if(y == 0)
        return 1;
    else if(y == 1)
        return x;
    else if(y % 2 == 0)
        return ricpow(x, y / 2) * ricpow(x, y / 2);
    else
        return x * ricpow(x, y - 1);
}