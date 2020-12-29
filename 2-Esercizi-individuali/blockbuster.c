#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char title[30];
    char director[30];
    unsigned year;
} movie;

int main()
{
    movie library[50], found;
    int n, i;
    char director[30];

    system("clear");

    printf("Inserisci il numero di film da aggiungere: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Film #%d", i + 1);
        printf("\nTitolo: ");
        scanf("%*c%[^\n]", library[i].title);
        printf("\nRegista: ");
        scanf("%*c%[^\n]", library[i].director);
        printf("\nAnno: ");
        scanf("%u", &library[i].year);
        printf("\n");
    }

    system("clear");

    printf("Inserisci il regista da cercare: ");
    scanf("%[^\n]", director);

    for(i = 0; i < n - 1; i++)
    {
        if(strcmp(library[i].director, director) && library[i].year > library[i + 1].year)
            found = library[i];
    }

    printf("\nIl film più recente di %s è %s: anno %u\n", director, found.title, found.year);
    
    return 0;
}