#include <stdio.h>
#include <stdlib.h>

int chkpow(int a, int b);

int main()
{
    system("clear");
    
    int x, y;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &x, &y);

    if(chkpow(x, y))
        printf("\n%d è una potenza di %d\n", x, y);
    else
        printf("\n%d non è una potenza di %d\n", x, y);
    
    return 0;
}

int chkpow(int a, int b)
{
    if(a < b)
        return 0;
    else if(a == b)
    {
        if(a == 0)
            return 0;
        else
            return 1;
    }
    else if(a > b)
    {
        if(a % b == 0)
            return chkpow(a / b, b);
        else
            return 0;
    }

    return 0;
}