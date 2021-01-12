#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int occurrences(char *s, char c);

int main()
{
    char str[31], c;
    int found;

    printf("Inserisci una stringa: ");
    scanf("%[^\n]", str);
    printf("\nChe carattere vuoi cercare? ");
    scanf("%*c%c", &c);

    found = occurrences(str, c);

    if(found == 0)
        printf("\nIl carattere %c non è presente nella stringa\n", c);
    else
        printf("\nIl carattere %c è stato trovato %d volte\n", c, found);
    
    return 0;
}

int occurrences(char *s, char c)
{
    if(*s == '\0')
        return 0;
    else if(*s == c)
        return 1 + occurrences(s + 1, c);
    else
        return occurrences(s + 1, c);
}