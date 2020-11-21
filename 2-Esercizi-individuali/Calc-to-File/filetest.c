#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main()
{
    FILE *file = fopen("result-log.txt", "a");
    int a, b, r, chk = 0;
    char sel;
    time_t rawtime;
    struct tm *timeinfo;

    system("clear");

    printf("Inserisci due numeri interi: ");
    scanf("%d%d", &a, &b);

    do
    {
        printf("\nInserisci un'operazione (+, -, *, /): ");
        scanf("%*c%c", &sel);
        switch(sel)
        {
            case '+':
                r = a + b;
                chk = 1;
                break;
            case '-':
                r = a - b;
                chk = 1;
                break;
            case '*':
                r = a * b;
                chk = 1;
                break;
            case '/':
                r = a / b;
                chk = 1;
                break;
            default:
                printf("\nCarattere non valido, riprova.\n");
                chk = 0;
        }
    } while(!chk);

    printf("\nIl risultato è %d", r);
    printf("\nIl risultato verrà salvato nel file result-log.txt\n");

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    if(fprintf(file, "%sResult: %d\n", asctime(timeinfo), r) < 0)
    {
        printf("\nC'è stato un errore nell'apertura del file.\n");
    } else {
        printf("\nOperazione eseguita con successo\n");
    }
    
    int fclose(FILE *file);

    return 0;
}