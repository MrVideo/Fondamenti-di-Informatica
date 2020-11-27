#include <stdio.h>

int main()
  {
    char c;

    printf("Inserisci un carattere maiuscolo: ");
    scanf("%c",&c);

    printf("\nIl carattere minuscolo corrispondente è %c.",c+32);

    return 0;
  }
