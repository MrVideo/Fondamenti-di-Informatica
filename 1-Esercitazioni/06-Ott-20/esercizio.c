#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
        int n, i, sum = 0, tmp = 0, chk = 0;
        
        system("clear");

        while(!chk)
        {
            printf("Quanti numeri vuoi inserire? ");
            scanf("%d",&n);

            if(n <= 0)
                {
                    printf("\nHai inserito un numero negativo. Inseriscine uno positivo.\n\n");
                    chk = 0;
                }
            else
                {
                    for(i = 0; i < n; i++)
                        {
                            printf("Numero %d: ",i+1);
                            scanf("%d",&tmp);

                            sum = sum + tmp;
                        }

                    chk = 1;
                }
        }

        printf("\nLa somma dei numeri inseriti è %d.\n",sum);

        return 0;
    }