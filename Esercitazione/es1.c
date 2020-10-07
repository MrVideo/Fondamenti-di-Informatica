#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
        int valore = 0;
        printf("\nInserisci il valore: ");
        scanf("%d",&valore);

        if(valore)
            {
                printf("\nMi piace il colore rosso.\n");
            }
        else
            {
                printf("\nMi piace il colore blu.\n");
            }
        return 0;
    }