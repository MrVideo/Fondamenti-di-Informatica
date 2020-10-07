#include <stdio.h>
#include <stdlib.h> // system() si trova qui

int main()
  {
    system("clear");

    int a = 5, b = 2, c;
    float x = 5, y = 2, z;

    printf("a / b = c: \t"); //Tutti interi
    c = a / b;
    printf("%d / %d = %d\n",a,b,c);

    printf("x / y = z: \t"); //Tutti decimali
    z = x / y;
    printf("%f / %f = %f\n",x,y,z);

    printf("a / b = z: \t"); //Risultato decimale
    z = a / b;
    printf("%d / %d = %f\n",a,b,z);

    printf("x / y = c: \t"); //Operatori decimali
    c = x / y;
    printf("%f / %f = %d\n",x,y,c);

    return 0;
  }
