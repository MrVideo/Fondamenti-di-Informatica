#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct nodo
{
    int dato;
    struct nodo *pre;
    struct nodo *suc;
};

typedef struct nodo elem;
typedef elem *lista;

int main()
{

}

lista inscerisci(lista l, int val)
{
    elem *temp, *cur, *prec;

    prec = NULL;
    cur = l;

    while(cur != NULL && val > cur -> dato)
    {
        prec = cur;
        cur = cur -> suc;
    }

    if(cur == NULL && val > cur -> dato)
    {
        temp = malloc(sizeof(elem));
        temp -> dato = val;
        temp -> suc = cur;
        temp -> pre = prec;

        if(cur != NULL)
        {
            cur -> pre = temp;
        }
        if(prec != NULL)
        {
            prec -> suc = temp;
        }
        else
        {
            l = temp;
        }
    }
    return l;
}