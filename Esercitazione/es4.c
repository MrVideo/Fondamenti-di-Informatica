#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
        int x, y, r;
        char c;

        system("clear");

        printf("Inserisci due numeri separati da una virgola: ");
        scanf("%d,%d",&x,&y);

        printf("\n\nChe operazione vuoi eseguire?\n");
        printf("s. Somma\n");
        printf("p. Prodotto\n");
        printf("Scelta: ");
        scanf("%*c%c",&c);

        switch(c)
            {
                case 's':
                    r = x + y;
                    printf("\n\nIl risultato della somma è %d\n",r);
                    break;
                case 'p':
                    r = x * y;
                    printf("\n\nIl risultato del prodotto è %d\n",r);
                    break;
                default:
                    printf("\n\nHai digitato un carattere non valido.\n");
            }
        return 0;
    }