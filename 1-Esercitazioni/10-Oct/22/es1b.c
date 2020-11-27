#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct punto {
    float x, y;
};

struct rettangolo {
    struct punto se;
    struct punto no;
};

struct punto leggiPunto()
{
    struct punto P;
    printf("\nInserisci la coordinata x: ");
    scanf("%f", &P.x);
    printf("\nInserisci la coordinata y: ");
    scanf("%f", &P.y);
    return P;
}

int degenere(struct rettangolo r)
{
    return (r.no.x >= r.se.x) || (r.no.y <= r.se.y);
}

void stampaRettangolo(struct rettangolo r)
{
    printf("\n");
    printf("punto SE (%2.2f, %2.2f)\n", r.se.x, r.se.y);
    printf("punto NO (%2.2f, %2.2f)\n", r.no.x, r.no.y);
}

struct rettangolo leggiRettangolo()
{
    struct rettangolo r;
    int deg;
    do
    {
        printf("\nInserisci il vertice NO: ");
        r.no = leggiPunto();
        printf("\nInserisci il vertice NO: ");
        r.no = leggiPunto();
        deg = degenere(r);
    } while(deg);
}

struct rettangolo inviluppo(struct rettangolo r1, struct rettangolo r2)
{
    struct rettangolo i;

    i.no.x = fmin(r1.no.x, r2.no.x);
    i.no.y = fmax(r1.no.y, r2.no.y);
    i.se.x = fmax(r1.se.x, r2.se.x);
    i.se.y = fmin(r1.se.y, r2.se.y);

    return i;
}

struct rettangolo inters(struct rettangolo r1, struct rettangolo r2)
{
    struct rettangolo i;

    i.no.x = fmax(r1.no.x, r2.no.x);
    i.no.y = fmin(r1.no.y, r2.no.y);
    i.se.x = fmin(r1.se.x, r2.se.x);
    i.se.y = fmax(r1.se.y, r2.se.y);

    return i;
}

int intersEmpty(struct rettangolo r1, struct rettangolo r2)
{
    return degenere(inters(r1, r2));
}

int main()
{
    struct rettangolo r1, r2, i, inters;

    printf("\nInserisci il primo rettangolo:\n");
    r1 = leggiRettangolo();
    printf("\nInserisci il secondo rettangolo:\n");
    r2 = leggiRettangolo();

    i = inviluppo(r1, r2);

    if(intersEmpty(r1, r2))
    {
        printf("\nIntersezione vuota.\n");
    } else {
        inters = inters(r1, r2);
        stampaRettangolo(inters);
    }

    return 0;
}