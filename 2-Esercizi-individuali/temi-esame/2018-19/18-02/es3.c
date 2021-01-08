/*
Si scriva una funzione void offusca(char in[], char out[]) che riceve in ingresso due stringhe
contenenti i nomi di due file (compresi di path). La funzione deve aprire il file testuale il cui
nome è specificato dalla stringa in e copiarne il contenuto in un file testuale il cui nome è
specificato dalla stringa out (si ipotizzi che questo file di output non esista), sostituendo ogni
occorrenza del carattere ‘@’ con la sequenza di caratteri “_AT_” ed ogni occorrenza del carattere
‘.’ con la sequenza di caratteri “_DOT_”.
*/

#include <stdio.h>
#include <stdlib.h>

void offusca(char *in, char *out);

int main()
{
    offusca("input.txt", "output.txt");

    return 0;
}

void offusca(char *in, char *out)
{
    FILE *src = fopen(in, "r"), *cp = fopen(out, "w");
    char c;

    while(!feof(src) && !ferror(src))
    {
        c = fgetc(src);
        if(c == '@')
            fputs("_AT_", cp);
        else if(c == '.')
            fputs("_DOT_", cp);
        else
            fputc(c, cp);
    }
}