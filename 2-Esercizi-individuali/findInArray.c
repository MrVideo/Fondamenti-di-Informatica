#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *findInArr(int *a, int c);

void fillArrRand(int *a);

void printArr(int *a);

int main()
{
    int arr[50], c, *pArr, *foundPos;

    srand(time(NULL));

    pArr = &arr[0];

    fillArrRand(pArr);

    system("clear");

    printArr(pArr);

    printf("\nInserisci il valore da cercare: ");
    scanf("%d", &c);

    foundPos = findInArr(pArr, c);

    if(foundPos == NULL)
        printf("\nIl valore non è stato trovato nell'array\n");
    else
        printf("\nIl valore è stato trovato alla posizione %ld\n", foundPos - pArr + 1);
    
    return 0;
}

int *findInArr(int *a, int c)
{
    int i;

    for(i = 0; i < 25; i++)
    {
        if(*(a + i) == c)
            return a + i;
    }

    return NULL;
}

void fillArrRand(int *a)
{
    int i;
    
    for(i = 0; i < 25; i++)
    {
        *(a + i) = rand()%10;
    }
}

void printArr(int *a)
{
    int i;

    for(i = 0; i < 25; i++)
    {
        printf("%d\t", *(a + i));
    }
}