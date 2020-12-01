#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, i, newline = 0;
    FILE *input = fopen("input.txt", "r"), *output = fopen("output.txt", "w");
    char str[1000], *ptr = &str[0];

    system("clear");

    printf("Inserisci il numero di righe: ");
    scanf("%d", &n);

    while(newline < n)
    {
        if(fgetc(input) == '\n')
            newline++;
        else
            fputc(output, fgetc(input));
    }

    fclose(input);
    fclose(output);        

    return 0;
}