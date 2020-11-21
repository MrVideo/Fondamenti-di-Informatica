#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int digitCount(int n);

int main()
{
    system("CLS");

    int n, d = 0;

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    d = digitCount(n);

    if(d == 1)
        printf("\nIl numero %d ha 1 cifra\n", n);
    else
        printf("\nIl numero %d ha %d cifre\n", n, d);
    
    system("PAUSE");

    return 0;
}

int digitCount(int n)
{
    if(n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + digitCount(n / 10);
    }
}