#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void branch(int n);

void tree(int m);

int main()
{
    int n;

    printf("Insersici un numero: ");
    scanf("%d", &n);

    system("clear");

    branch(n);

    return 0;
}

void branch(int n)
{
    if(n == 0)
    {
        printf("+|+\n");
        return;
    }
    else
    {
        printf("-");
        branch(n - 1);
    }    
}

void tree(int m)
{   
    if(m == 1)
        printf("+");
    else if(m > 1)
    {
        branch(m);
        printf("\n");
        tree(m - 1);
    }
}