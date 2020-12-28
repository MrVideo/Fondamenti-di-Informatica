#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define DIM 100

int main()
{
    char str[DIM], rev[DIM];
    int len, i;

    system("clear");

    printf("Insersici un messaggio: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    for(i = 0; i <= len; i++)
        rev[len - i] = str[i];

    printf("Il messaggio al contrario è: \"");
    for(i = 0; i <= len; i++)
        printf("%c", rev[i]);
    printf("\"\n");

    return 0;
}