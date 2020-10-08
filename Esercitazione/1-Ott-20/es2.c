#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
        int anni1, anni2;
        
        for( ; ;)
            {
                printf("\nInserisci anni1: ");
                scanf("%d",&anni1);
                printf("\nInserisci anni2: ");
                scanf("%d",&anni2);

                if(anni1 == anni2)
                    {
                        printf("\nI due utenti sono coetanei.\n");
                    } 
                else
                    {
                        printf("\nI due utenti non sono coetanei.\n");
                    }

                return 0;
            }
    }