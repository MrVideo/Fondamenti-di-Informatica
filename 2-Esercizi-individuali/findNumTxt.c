//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *input = fopen("testo.txt", "r");
    char read[16];

    while(!ferror(input) && !feof(input))
    {
        fscanf(input, "%s", read);
            
        if(atoi(read))
        {
            printf("Trovato: %d\n", atoi(read));
        }
    }

    fclose(input);

    return 0;
}