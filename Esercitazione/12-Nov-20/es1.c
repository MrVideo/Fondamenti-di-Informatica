/* !
Scrivere in C una funzione void fun(FILE *f1, FILE *f2) che prende come parametri due puntatori a file;
f2 è un puntatore ad un file testuale (aperto in scrittura),
f1 è un puntatore a un file binario (aperto in lettura) che contiene una sequenza di coppie di valori interi v1 e v2;
v1 rappresenta la codifica ASCII del carattere da scrivere in f2 e v2 il numero di volte che l’operazione deve essere ripetuta, 
ovvero quanti caratteri v1 devono essere scritti in f2. Le diverse sequenze di v2 caratteri v1 devono essere separate
tra loro da uno spazio. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void fun(FILE *f1, FILE *f2);

int main()
{
    system("CLS");

    FILE *f1, *f2;

    f1 = fopen("test.dat", "wb");
    int val[] = {'z', 4, 'n', 2, 'h', 10};
    fwrite(val, sizeof(int), 8, f1);
    fclose(f1);

    f1 = fopen("test.dat", "rb");
    f2 = fopen("towrite.txt", "w");
    fun(f1, f2);

    return 0;
}

void fun(FILE *f1, FILE *f2)
{
    int i, v1, v2;
    
    while (fread(&v1, sizeof(int), 1, f1) != 0)
    {
        fread(&v2, sizeof(int), 1, f1);
    	for (i = 0; i < v2; i++)
    		fprintf(f2, "%c", v1);
    	fprintf(f2, "%c", ' ');
    }
}