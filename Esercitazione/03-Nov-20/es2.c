#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*

offset = 32
A = 65 - a = 97
E = 69 - e = 101
I = 73 - i = 105
O = 79 - o = 111
U = 85 - u = 117

*/

void caseFinder(char *string);

int main()
{
    char string[101];
    int i;

    system("clear");

    printf("Inserisci una stringa di caratteri minuscoli (max 100 caratteri): ");
    scanf("%[^\n]", string);

    caseFinder(string);

    printf("\nLa stringa modificata è:\n");
    
    for(i = 0; i < strlen(string); i++)
        printf("%c", string[i]);
    printf("\n");
    
    return 0;
}

void caseFinder(char *string)
{
    int i; 

    for(i = 0; i < strlen(string); i++)
    {
        switch(string[i])
        {
            case 'a':
                string[i] = 'A';
                break;
            case 'e':
                string[i] = 'E';
                break;
            case 'i':
                string[i] = 'I';
                break;
            case 'o':
                string[i] = 'O';
                break;
            case 'u':
                string[i] = 'U';
                break;
            default:
                break;
        }
    }
}