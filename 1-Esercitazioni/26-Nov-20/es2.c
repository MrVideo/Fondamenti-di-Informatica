#include <stdio.h>
#include <stdlib.h>

int checkPow(int b, int exp);

int main()
{
    system("clear");

    int b, e, res;

    printf("Inserisci due numeri interi: ");
    scanf("%d%d", &b, &e);

    res = checkPow(b, e);

    if(res == 1)
        printf("\nIl numero %d è potenza di %d.\n", b, e);
    else if(res == -1)
        printf("\nIl numero %d non è potenza di %d.\n", b, e);

    return 0;
}

int checkPow(int b, int exp)
{
    if(b < exp)
        return -1;
    if(b == exp)
        return 1;
    if (b > exp)
    {
        if(b / exp == 1 && b % exp == 0)
            return 1;
        if((b / exp) % exp == 0)
            return checkPow((b / exp), exp);
        else
            return -1;
    }
}