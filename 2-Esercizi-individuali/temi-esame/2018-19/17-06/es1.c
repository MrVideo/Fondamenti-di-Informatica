/*
Un array binario (contenente cioè solo 0 o 1) può essere codificato usando la codifica
Run Length Code (RLC) mediante un array di interi, ciascuno dei quali rappresenta la lunghezza
di una sequenza di “0” consecutivi o di “1” consecutivi che si alternano nell’array binario
(vedere esempi sotto riportati). Si suppone che la codifica RLC di un array binario cominci sempre
per convenzione con il numero di “0” consecutivi che si trovano all’inizio dell’array stesso.

Si implementi la seguente funzione:

void codifica (int binario[], int rlc[], int n)

dove binario è un array di lunghezza n (contenente solo 0 e 1) ed rlc è un array di lunghezza n+1.
La funzione calcolerà la codifica RLC dell’array binario in ingresso e la memorizzerà nell’array rlc.
*/

//! Da finire

#include <stdio.h>

void codifica(int *binario, int *rlc, int n);

int main()
{
    int bin1[9] = {0, 0, 0, 0, 1, 1, 1, 0, 0}, bin2[9] = {1, 1, 1, 1, 1, 0, 0, 0, 1};
    int rlc[10] = {0};
    int i;
    
    codifica(&bin1[0], &rlc[0], 9);

    printf("Bin1:\n");
    for(i = 0; i < 11; i++)
        printf("%d ", rlc[i]);
    printf("\n");

    for(i = 0; i < 10; i++)
        rlc[i] = 0;
    printf("\nClear done.\n");

    codifica(&bin2[0], &rlc[0], 9);

    printf("Bin2:\n");
    for(i = 0; i < 11; i++)
        printf("%d ", rlc[i]);
    printf("\n");

    return 0;
}

void codifica(int *binario, int *rlc, int n)
{
    int i = 0, j, k = 0;
    
    if(*binario == 1)
        j = 1;
    else
        j = 0;
    do
    {
        while(*(binario + k) == 0)
        {
            *(rlc + j) += 1;
            k++;
        }

        while(*(binario + i) == 1)
        {
            *(rlc + j) += 1;
            k++;
        }
        j++;

        i = *(rlc + j) - 1;
    } while(i <= n);
}