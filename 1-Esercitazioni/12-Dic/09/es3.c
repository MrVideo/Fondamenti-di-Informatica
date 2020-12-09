#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_div(char *num);

int main()
{
    char num[10];
    
    system("clear");

    printf("Inserisci un numero: ");
    scanf("%s", num);

    printf("\nIl numero di divisori contenuti nel numero è %d\n", print_div(num));
    
    return 0;
}

int print_div(char *num)
{
    int number = atoi(num), i, digit, divCounter = 0;

    for(i = 0; i < strlen(num); i++)
    {
        digit = (int)num[i] - 48;        

        if(number % digit == 0)
            divCounter++;
    }

    return divCounter;
}