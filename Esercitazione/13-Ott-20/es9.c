#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, area, s, p;
    int chk = 0;

    system("clear");

    do
    {
        printf("Inserire la lunghezza dei lati del triangolo: ");
        scanf("%f%f%f", &a, &b, &c);

        if((a + b > c) && (a > b - c) && (b > a - c) && (c > a - b))
        {
            p = a + b + c;
            s = p / 2;
            area = sqrtf(s * (s - a) * (s - b) * (s - c));
            chk = 1;
        } else {
            printf("\n\nErrore. Le misure non danno origine ad un triangolo. Riprovare.\n");
            chk = 0;
        }
    } while (!chk);

    printf("\n\nL'area del triangolo è %f ed il suo perimetro è %f.\n", area, p);

    return 0;
}