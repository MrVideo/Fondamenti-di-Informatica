#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findInArr(int *a, int c, int *found);

void fillArrRand(int *a);

void printArr(int *a);

int main()
{
    int arr[50], c, *pArr, foundNum, found[50] = {-1}, *pFound, i;

    srand(time(NULL));

    pArr = &arr[0];
    pFound = &found[0];

    fillArrRand(pArr);

    system("clear");

    printArr(pArr);

    printf("\nInserisci il valore da cercare: ");
    scanf("%d", &c);

    foundNum = findInArr(pArr, c, pFound);

    if(found[0] != -1)
    {
        printf("\nIl valore è stato trovato alle seguenti posizioni: ");
        
        for(i = 0; i < foundNum; i++)
            printf(" %d,", found[i] + 1);
    }
    else
    {
        printf("\nNon sono state trovate corrispondenze\n");
    }

    printf("\n");

    return 0;
}

int findInArr(int *a, int c, int *found)
{
    int i, foundIndex = 0;

    for(i = 0; i < 25; i++)
    {
        if(*(a + i) == c)
        {
            *(found + foundIndex) = i;
            foundIndex++;
        }       
    }

    return foundIndex;
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