#include <stdio.h>

int main()
  {
    char c;

    printf("Inserisci un numero tra 0 e 255: ");
    scanf("%d",&c);

    printf("\nA quel numero corrisponde il carattere %c.\n",c);

    return 0;
  }
