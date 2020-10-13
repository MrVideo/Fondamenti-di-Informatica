#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, max, min;

    printf("Inserisci tre numeri: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c) //Se a è il maggiore
    {
        max = a;
        if (b < c) //Minore tra b e c
        {
            min = b;
        } else {
            min = c;
        }
    } else {
        if (b > c) //Se b è il maggiore
        {
            max = b;
            if (a < c) //Minore tra a e c
            {
                min = a;
            } else {
                min = c;
            }
        } else { //Se c è il maggiore
            max = c;
            if (a < b) //Minore tra a e b
            {
                min = a;
            } else {
                min = b;
            }
        }
    }

    printf("\nIl numero maggiore è %d, mentre il minore è %d\n", max, min);
    printf("La loro differenza è %d\n", max - min);
    
    return 0;
}