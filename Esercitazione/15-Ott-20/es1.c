#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRY 10

int main()
{
    int p, t, sel, i, chk;

    system("clear");

    printf("Giocatore 1\n");

    do
    {
        printf("Inserisci il numero di partenza ed il numero obiettivo (compresi tra 0 e 1000 e diversi tra loro)\n");
        printf("Numero di partenza: ");
        scanf("%d", &p);
        printf("Numero obiettivo: ");
        scanf("%d", &t);
    } while(p < 0 || p > 1000 && t < 0 || t > 1000 || p == t);

    printf("\nGiocatore 2\n");
    printf("Inizia la partita!\n");

    for(i = 0; i < 1000000000; i++)
    {/* wait */}

    for(i = 0; i < TRY; i++)
    {
        system("clear");
        
        printf("Numero di partenza: %d\n", p);
        printf("Numero da raggiungere: %d\n", t);
        printf("Mosse rimaste: %d\n", TRY - i);

        printf("Azioni disponibili: \n");
        printf("1. Aggiungi 1 al numero di partenza\n");
        printf("2. Raddoppia il numero di partenza\n");
        printf("3. Sostituisci il numero di partenza con il resto della divisione di p per 31\n");
        
        do
        {
            printf("\nScelta: ");
            scanf("%d", &sel);
            switch(sel)
            {
                case 1:
                    p += 1;
                    chk = 1;
                    break;
                case 2:
                    p *= 2;
                    chk = 1;
                    break;
                case 3:
                    p = p % 31;
                    chk = 1;
                    break;
                default:
                    printf("\nHai inserito un numero non valido. Riprova.\n");
                    chk = 0;
            }
        } while(!chk);

        if(p == t)
        {
            system("clear");

            if(i == 0)
            {
                printf("Congratulazioni! Hai raggiunto il numero %d in una mossa!\n", t);
            } else
            {
                printf("Congratulazioni! Hai raggiunto il numero %d in %d mosse!\n", t, i + 1);
            }
            
            return 0;
        }
    }

    if(p != t && (TRY - i) == 0)
    {
        system("clear");

        printf("Mi dispiace, hai esaurito le mosse. Ritenta, sarai più fortunato!\n");

        return 0;
    }
}