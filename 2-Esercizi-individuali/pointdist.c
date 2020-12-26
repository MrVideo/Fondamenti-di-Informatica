#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct {
    int x, y, z;
} p1, p2;

int main()
{
    system("clear");

    float dist = 0;

    printf("Inserisci le coordinate del primo punto (x, y, z): ");
    scanf("%d, %d, %d", &p1.x, &p1.y, &p1.z);

    printf("Inserisci le coordinate del secondo punto (x, y, z): ");
    scanf("%d, %d, %d", &p2.x, &p2.y, &p2.z);

    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));

    printf("\nLa distanza tra i due punti è %f\n", dist);
    
    return 0;
}