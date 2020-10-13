#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("clear");
    
    int n, k, i, j;

    printf("Inserisci fino a che tabellina vuoi arrivare: ");
    scanf("%d", &n);

    printf("Inserisci quanti elementi vuoi vedere: ");
    scanf("%d", &k);

    for(i = 2; i <= n; i++)
    {
        for(j = 1; j <= k; j++)
        {
            printf("%d\t",i * j);
        }
        printf("\n");
    }

    return 0;
}