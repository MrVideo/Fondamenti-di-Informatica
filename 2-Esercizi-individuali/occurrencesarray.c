//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(char *s, char c, int len, int count);

int main()
{
    system("clear");

    char c, string[101];
    int len, found, count = 0;

    printf("Inserisci una stringa di testo: ");
    scanf("%[^\n]", string);

    printf("\nInserisci il carattere da cercare: ");
    scanf("%*c%c", &c);

    len = strlen(string);

    found = find(&string[0], c, len, count);

    printf("\nNella stringa ci sono %d occorrenze di %c\n", found, c);

    return 0;    
}

int find(char *s, char c, int len, int count)
{
    if(len == 0)
    {
        if(*s == c)
            count++;
            
        return count;
    }
    else
    {
        if(*(s + len) == c)
            count++;

        return find(s, c, len - 1, count);
    }
}