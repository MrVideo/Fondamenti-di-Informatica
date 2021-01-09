/*
Scrivere un programma C che apre un file di testo “testo.txt” contenente parole
ciascuna di al massimo 15 caratteri. Il programma identifica e stampa a video tutte
le parole che rappresentano un numero (cioè composte soltanto da cifre).
*/

//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *input = fopen("testo.txt", "r");
    char string[16];

    rewind(input);

    while(!feof(input) && !ferror(input))
    {
        fscanf(input, "%s", string);
        if(atoi(string))
            printf("%d ", atoi(string));
    }
    printf("\n");

    return 0;
}