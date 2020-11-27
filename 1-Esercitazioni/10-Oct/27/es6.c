#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int fact(int n);

int main()
{
    system("clear");

    int n, sum = 0;

    printf("Inserisci dei numeri interi positivi:\n");
    do
    {
        printf("Numero: ");
        scanf("%d", &n);

        sum = sum + fact(n);
    } while(n > 0);

    printf("\n\nLa somma dei fattoriali è %d\n", sum);
    
    return 0;
}

int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}