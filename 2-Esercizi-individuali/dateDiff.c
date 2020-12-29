//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned day;
    unsigned month;
    unsigned year;
} date;

int main()
{
    date d1, d2;

    system("clear");

    printf("Inserisci la prima data (gg mm aaaa): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Inserisci la seconda data (gg mm aaaa): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    if(d1.day <= d2.day && d1.month <= d2.month && d1.year <= d2.year)
        printf("\nLa differenza tra le due date è di %d giorni.\n", ((d2.day - d1.day) + 30 * (d2.month - d1.month) + 365 * (d2.year - d1.year)));
    
    return 0;
}