#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define WORD_LENGTH 15

void printNum(FILE *fp);

int main()
{
    FILE *input = fopen("input.txt", "r");

    system("clear");

    if(input == NULL)
        printf("\nFile error\n");
    else
        printNum(input);
    
    printf("\n");

    return 0;
}

void printNum(FILE *fp)
{
    char word[WORD_LENGTH + 1];

    while(fscanf(fp, "%s", word) == 1)
    {
        int found = 1;
        int i = 0;

        for(i = 0; found == 1 && word[i] != '\0'; i++)
        {
            if(word[i] < '0' || word[i] > '9')
                found = 0;
        }

        if(found)
        {
            printf("%s ", word);
        }
    }
}