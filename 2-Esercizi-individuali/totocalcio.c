#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    unsigned day;
    unsigned month;
    unsigned year;
} date;

typedef struct{
    date betDay;
    int results[14];
} scheda;

int main()
{
    srand(time(NULL));

    system("clear");

    scheda game;
    int i, player[14], pts = 0;
    char c;

    game.betDay.day = 3;
    game.betDay.month = 11;
    game.betDay.year = 2014;

    for(i = 0; i < 14; i++)
        game.results[i] = rand()%3;
    
    printf("Inserisci i dati della tua giocata (1, X, 2):\n");
    
    for(i = 0; i < 14; i++)
    {
        printf("Partita %d: ", i + 1);
        scanf("%c%*c", &c);
        switch(c)
        {
            case '1':
                player[i] = 1;
                break;
            case 'X':
                player[i] = 0;
                break;
            case '2':
                player[i] = 2;
                break;
            default:
                printf("\nHai inserito un carattere errato. Riprova.\n");
                i--;
        }
    }

    system("clear");

    printf("Giocata del giocatore:\n");

    for(i = 0; i < 14; i++)
    {
        switch(player[i])
        {
            case 1:
                printf("1 ");
                break;
            case 0:
                printf("X ");
                break;
            case 2:
                printf("2 ");
                break;
        }
    }
    
    printf("\nRisultati partita (%d/%d/%d):\n", game.betDay.day, game.betDay.month, game.betDay.year);
    
    for(i = 0; i < 14; i++)
    {
        switch(game.results[i])
        {
            case 1:
                printf("1 ");
                break;
            case 0:
                printf("X ");
                break;
            case 2:
                printf("2 ");
                break;
        }
    }
    
    for(i = 0; i < 14; i++)
    {
        if(player[i] == game.results[i])
            pts++;
    }

    if(pts == 1)
        printf("\n\nHai totalizzato un punto.\n");
    if(pts == 0)
        printf("\n\nNon hai totalizzato alcun punto.\n");
    else
        printf("\n\nHai totalizzato %d punti.\n", pts);
    
    return 0;
}