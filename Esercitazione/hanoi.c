#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void hanoi(int n, char from, char to, char tmp);

int main()
{
    system("CLS");
    
    int n;

    printf("Quanti dischi vuoi utilizzare? ");
    scanf("%d", &n);
    printf("\nEseguire le seguenti mosse:\n");
    hanoi(n, 'A', 'B', 'C');

    printf("\n");

    system("PAUSE");

    return 0;
}

void hanoi(int n, char from, char to, char tmp)
{
    if(n == 1)
    {
        printf("\nMuovi il disco %d da %c a %c", n, from, to);
    }
    else
    {
        hanoi(n - 1, from, tmp, to);
        printf("\nMuovi il disco %d da %c a %c", n, from, to);
        hanoi(n - 1, tmp, to, from);
    }
}