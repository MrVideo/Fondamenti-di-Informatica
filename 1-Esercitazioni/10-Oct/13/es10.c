#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("clear");

    int n, i;

    printf("Inserisci la tabellina che vuoi vedere: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d", n, i, n * i);
    }

    printf("\n");

    return 0;
}