#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 100

int main()
{
    system("clear");

    int n, i, j, dec[MAX];

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            n /= i;
            while(n > 0)
                i = dec[i];
        }
    }
    
    printf("\n\nIl numero %d si scompone così:\n", n);
    printf("%d = ", n);
    
    for(j = 0; j < i; j++)
    {
        printf("%d * ", dec[j]);
    }

    printf("\n");

    return 0;
}