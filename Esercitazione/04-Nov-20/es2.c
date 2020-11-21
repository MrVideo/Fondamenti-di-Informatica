#include <stdio.h>

int f(int n, int r);

int main()
{
    printf("%d\n", f(7891, 0));
    return 0;
}

int f(int n, int r)
{
    if(n == 0)
        return r;
    else
        return f(n / 10, r * 10 + n % 10);
}

//Passo 1: n = 7891 / 10 = 189, r = 0 + 1
//Passo 2: n 789 / 10 = 78, r = 10 + 9
//Passo 3: n 78 / 10 = 7, r = 190 + 8
//Passo 4: n 7 / 10 = 0, r = 1980 + 7
//Stampa 1987, inverso di 7891