#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*

Mosse minime per D = 3

1. A > C
2. A > B
3. C > B
4. A > C
5. B > A
6. B > C
7. A > C

*/

void hanoiSolve(int d, char from, char to, char tmp);

int main()
{
    system("CLS");

    int d;

    printf("Inserisci il numero di dischi: ");
    scanf("%d", &d);

    hanoiSolve(d, 'A', 'C', 'B');

    printf("\n");
    
    system("PAUSE");

    return 0;
}

void hanoiSolve(int d, char from, char to, char tmp)
{    
    if(d == 1)
        printf("\nSposta il disco %d da %c a %c", d, from, to);
    else
    {
        hanoiSolve(d - 1, from, tmp, to);
        printf("\nSposta il disco %d da %c a %c", d, from, to);
        hanoiSolve(d - 1, tmp, to, from);
    }           
}