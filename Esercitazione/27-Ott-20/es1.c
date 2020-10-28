#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    system("clear");

    int max = 0, min = sizeof(int), i, tmp;

    do
    {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &tmp);

        if(tmp < min && tmp >= 0)
        {
            min = tmp;
        } else if(tmp > max && tmp >= 0)
        {
            max = tmp;
        }
        
    } while(tmp >= 0);

    printf("La differenza tra massimo e minimo è %d\n", max - min);
    
    return 0;
}