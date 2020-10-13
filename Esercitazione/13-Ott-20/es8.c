#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("clear");

    float x, y;
    char op, sel;
    int chk = 0, exit = 0;

    printf("Calcolatrice");

    do
    {
        printf("\nInserisci due numeri: ");
        scanf("%f%f",&x, &y);
        printf("\nChe operazione vuoi compiere? (+, -, *, /) ");
        scanf("%*c%c",&op);

        switch(op)
        {
            case '+':
                printf("\n\nIl risultato è %f\n\n", x + y);
                break;
            case '-':
                printf("\n\nIl risultato è %f\n\n", x - y);
                break;
            case '*':
                printf("\n\nIl risultato è %f\n\n", x * y);
                break;
            case '/':
                printf("\n\nIl risultato è %f\n\n", x / y);
                break;
            default:
                printf("\n\nHai digitato un carattere non valido.\n\n");
        }

        do
        {
            printf("Vuoi eseguire un'altra operazione? (y/n) ");
            scanf("%*c%c", &sel);
            switch(sel)
            {
                case 'y':
                    chk = 1;
                    exit = 0;
                    break;
                case 'n':
                    chk = 1;
                    exit = 1;
                    break;
                default:
                    printf("\n\nHai digitato un carattere non valido.\n\n");
                    chk = 0;
            }
        } while (!chk);
    } while(!exit);
    
    return 0;
}