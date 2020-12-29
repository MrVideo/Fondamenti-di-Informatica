#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    system("clear");

    int n, i, bin[32] = {0};
    long int calc;
    
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("\nIl numero 0 in CPL2 è:\n");
        for(i = 0; i < 32; i++)
            printf("%d", bin[i]);
        printf("\n");
    }
    else
    {
        if(n > 0)
            calc = n;
        else
            calc = pow(2, 32) - (long int)n;

        printf("%ld", calc);
        

        i = 31;
        
        while(calc != 0)
        {
            bin[i] = calc % 2;
            calc = calc / 2;
            i--;
        }

        printf("\nIl numero %d in CPL2 è:\n", n);

        for(i = 0; i < 32; i++)
            printf("%d", bin[i]);
        printf("\n");
    }

    return 0;
}