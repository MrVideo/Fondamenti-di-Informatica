#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float vertex, ans, a, b, c;

    srand(time(NULL));

    a = rand() % 5 + 1;
    b = rand() % 6;
    c = rand() % 6;

    vertex = -(b / (2 * a));

    printf("Dati i coefficienti a = %.0f, b = %.0f e c = %.0f di una parabola, calcolane il vertice.\n", a, b, c);
    printf("Inserisci la risposta: ");

    // debug

    printf("\n%f\n", vertex);

    // fine debug
    
    scanf("%f",&ans);

    if (ans == vertex)
    {
        printf("\nLa risposta è corretta.\n");
    } else {
        printf("\nLa risposta è sbagliata.\n");
    }

    return 0;
}