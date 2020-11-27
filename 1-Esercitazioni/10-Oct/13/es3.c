#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("CLS");
    
    int n, m;

    printf("Inserisci due numeri: ");
    scanf("%d%d", &n, &m);

    printf("\nIl risultato è %d\n", n - m);
    return 0;
}