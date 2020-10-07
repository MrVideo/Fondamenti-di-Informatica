// ! File d'esempio - Non completamente funzionale

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

float radice(int grado, float radicando); // Dichiarazione di prototipo di funzione
// float radice(int, float) può essere usato al posto della linea sopra
int main() // Definizione di funzione principale
{
    int g;
    float r;

    scanf("%d",&g);
    scanf("%df",&r);

    printf("%f\n",radice(g,r));
    
    return 0;
}

float radice(int grado, float radicando) // Definizione della funzione "radice"
{
    float ris;
    // Codice per il calcolo della radice
    return ris; // Valore di ritorno
}