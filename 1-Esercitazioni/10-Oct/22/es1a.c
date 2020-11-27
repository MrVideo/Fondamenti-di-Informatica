#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define SOGLIA 1.0

struct punto {
    float x, y;
};

struct triangolo {
    struct punto A;
    struct punto B;
    struct punto C;
};

int degenere(struct triangolo t)
{
    if(distanza(t.A, t.B) == 0 || distanza(t.A, t.C) == 0 || distanza(t.B, t.C) == 0)
        return 1;
    else return 0;
}

float distanza(struct punto P1, struct punto P2)
{
    return sqrtf(pow((P1.x-P2.x), 2) + pow((P1.y-P2.y), 2));
}

struct punto leggiPunto()
{
    struct punto P;
    printf("\nInserisci la coordinata x: ");
    scanf("%f", &P.x);
    printf("\nInserisci la coordinata y: ");
    scanf("%f", &P.y);
    return P;
}

struct triangolo leggiTriangolo()
{
    struct triangolo t;
    int deg;
    do
    {
        t.A = leggiPunto('A');
        t.B = leggiPunto('B');
        t.C = leggiPunto('C');
        deg = degenere(t);
        if(deg)
            printf("Triangolo non valido. Riprova.\n");
    } while(deg);

    return t;
}

void stampaTri(struct triangolo t)
{
    printf("\n");
    printf("punto A (%2.2f, %2.2f)\n", t.A.x, t.A.y);
    printf("punto B (%2.2f, %2.2f)\n", t.B.x, t.B.y);
    printf("punto C (%2.2f, %2.2f)\n", t.C.x, t.C.y);
}

int pseudoUguali(float a, float b)
{
    float max, min;
    
    if(a == b)
        return 1;
    else if(a * b == 0.0) 
        return 0;
    else {
        min = a;
        max = b;
        if(min > max)
        {
            min = b;
            max = a;
        }

        return (max - min) / max * 100 < SOGLIA;
    }
}

float erone(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return sqrtf(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    struct triangolo t;
    float ab, ac, bc;
    int coppieLatiUguali;

    t = leggiTriangolo();

    printf("\nHai inserito il seguente triangolo:");
    stampaTri(t);

    ab = distanza(t.A, t.B);
    ac = distanza(t.A, t.C);
    bc = distanza(t.B, t.C);

    coppieLatiUguali = pseudoUguali(ab, bc) + pseudoUguali(ab, ac) + pseudoUguali(bc, ac);

    if(coppieLatiUguali == 3)
        printf("\nPseudo-equilatero\n\n");
    else if(coppieLatiUguali == 2 || coppieLatiUguali == 1)
        printf("\nPseudo-isoscele\n\n");
    else
        printf("\nDecisamente scaleno\n\n");
    
    printf("Il perimetro del triangolo è %f e l'area è %f.", ab + ac + bc, erone(ab, ac, bc));

    return 0;
}