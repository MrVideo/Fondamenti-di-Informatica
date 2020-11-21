#include <stdio.h>
#include <stdlib.h>

void fun(FILE *f1, FILE *f2);

int main()
{
    system("CLS");

    FILE *f1, *f2;
    int val[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, pval[10] = {0};

    f1 = fopen("seq.dat", "wb");
    fwrite(val, sizeof(int), 10, f1);
    fclose(f1);

    f1 = fopen("seq.dat", "rb");
    f2 = fopen("towrite.dat", "wb");
    fun(f1, f2);

    fclose(f1);
    fclose(f2);

    int i, j;
    i = fread(pval, sizeof(int), 10, f1);

    for(j = 0; j < i; j++)
        printf("%d", pval[j]);
    printf("\n");

    return 0;
}

void fun(FILE *f1, FILE *f2)
{
    int a, b;

    a = fseek(f1, -sizeof(int), SEEK_END);

    while(a == 0)
    {
        if(fread(&b, sizeof(int), 1, f1) != 0 && (b % 2 == 0))
            fwrite(&b, sizeof(int), 1, f2);
        a = fseek(f1, -2 * sizeof(int), SEEK_CUR);
    }
}