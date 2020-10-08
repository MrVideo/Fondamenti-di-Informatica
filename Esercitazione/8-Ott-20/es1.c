#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Per le funzioni pow(), sin(), sqrt()

/* Siano date 3 formule matematiche:

P(a) = a^2 - a^3 + sin(a)
R(b) = sqrt(b^2 + 12)
S(x, y) = 13x + (x + y)/3

Scrivere un programma che accetti due numeri n ed m e calcoli il valore dell'espressione

S(P(n), R(n - m))

e lo stampi a video.
*/

double P(double a); // Dichiarazione delle firme delle funzioni

double R(double b);

double S(double x, double y);

void main()
{
    double n, m, s;

    system("clear");

    printf("Inserire due numeri\n");
    scanf("%lf %lf", &n, &m);

    s = S(P(n), R(n - m));

    printf("\nIl risultato delle funzioni è %f\n", s);
}

double P(double a)
{
    double quadrato = a * a;
    double cubo = pow(a, 3);

    return quadrato - cubo + sin(a);
}

double R(double b)
{
    return sqrt(b * b + 12);
}

double S(double x, double y)
{
    return 13 * x + (x + y) / 3;
}