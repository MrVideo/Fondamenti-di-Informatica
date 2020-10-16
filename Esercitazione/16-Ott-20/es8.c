#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 201

int main()
{
    char testo[DIM], ricercata[DIM];
    int txt_len, q_len, i, j, match_index = 0, found = 0;

    system("clear");

    printf("Inserisci il tuo testo (massimo 200 caratteri):\n\n");
    scanf("%s", testo);
    txt_len = strlen(testo);

    printf("\n\nInserisci la parola che vuoi cercare: ");
    scanf("%s", ricercata);
    q_len = strlen(ricercata);

    for(i = 0; i < txt_len; i++)
    {
        if(testo[i] == ricercata[j])
        {
            if(j == 0)
            {
                match_index = i;
            }

            found = 1;
            j++;

            if(j == q_len - 1)
            {
                printf("\nLa stringa è stata trovata in posizione %d.", match_index);
            }
        } else {
            found = 0;
            j = 0;
        }
    }

    return 0;
}