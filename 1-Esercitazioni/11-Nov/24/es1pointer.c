#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, *pa, *pb, tmp;

    system("CLS");

    printf("Inserisci due numeri interi: ");
    scanf("%d%d", &a, &b);

    pa = &a;
    pb = &b;

    printf("\nPrima: %d, %d", *pa, *pb);

    pb = &a;
    pa = &b;

    printf("\nDopo: %d, %d", *pa, *pb);

    return 0;
}