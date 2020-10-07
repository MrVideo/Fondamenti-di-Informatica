#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, fibo_n = 0, fibo_1 = 1, fibo_2 = 1;

    system("clear");

    do
    {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d",&n);
    } while (n < 0);

    if(n == 0 || n == 1)
    {
        printf("\nIl termine %d della Succesione di Fibonacci è 1.\n",n);

        return 0;
    }
    
    for(i = 2; i <= n; i++)
    {
        fibo_n = fibo_1 + fibo_2;
        fibo_2 = fibo_1;
        fibo_1 = fibo_n;
    }

    printf("\nIl termine %d della Succesione di Fibonacci è %d.\n",n,fibo_n);

    return 0;
}