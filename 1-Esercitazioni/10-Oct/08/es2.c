#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Scrivere un programma che, dati in input due numeri interi a e b non
negativi, stampi a video tutti i numeri di Armstrong compresi tra a e b
(con a e b compresi tra 0 e 999)

Un numero è detto di Armstrong se la somma dei cubi delle sue cifre è uguale
al numero stesso.
Ad esempio, 371 è di Armstrong perché 3^3=27, 7^3=343 e 1^3 = 1 e
27 + 343 + 1 = 371*/

int is_armstrong(unsigned int a); //Calcola se il numero è di Armstrong

unsigned int cifra_n(unsigned int input, unsigned int n); //Estrae il numero in input cifra per cifra

unsigned int ord_grand(unsigned int n); //Calcola la quantità di cifre di un numero

int main()
{
    int a, b, tmp;
    unsigned int i;
    
    system("clear");

    do
    {
        printf("Inserire due numeri tra 0 e 999: ");
        scanf("%d", &a);
        scanf("%d", &b);

        if(a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
    } while(a < 0 || b > 999);
    
    for(i = a; i <= b; i++)
    {
        if(is_armstrong(i))
        {
            printf("\nIl numero %u è di Armstrong\n", i);
        }
    }

    return 0;
}

unsigned int ord_grand(unsigned int n)
{
    //Ritorna l'esponente della più piccola potenza di 10 maggiore di n
    unsigned int result = 0;

    while(n != 0)
    {
        n = n / 10;
        result++;
    }

    return result; 
}

unsigned int cifra_n(unsigned int input, unsigned int n)
{
    // (a / (10 ^ (n - 1))) % 10
    // 144, 2: (144 / (10 ^ (2 - 1))) % 10 == 14 % 10 == 4
    unsigned int pow10 = 1; //Potenza di dieci
    unsigned int i;

    for(i = 0; i < n; i++)
    {
        pow10 *= 10;
    }

    return (input / pow10) % 10;
}

int is_armstrong(unsigned int a)
{
    unsigned int pos; //Posizione della cifra
    unsigned int cifra; //Cifra di cui calcolare il cubo
    unsigned int potenza = ord_grand(a);
    unsigned int somma_cifre = 0; //Somma dei cubi delle cifre

    for(pos = 1; pos <= potenza; pos++)
    {
        cifra = cifra_n(a, pos);
        somma_cifre = somma_cifre + pow(cifra, 3);
    }

    return somma_cifre == a;
}