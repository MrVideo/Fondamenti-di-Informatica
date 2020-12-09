#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int el;
    struct nodo *next;
};

typedef struct nodo lista;

void shift(lista *l);
void print(lista *l);

int main()
{

}

void shift(lista *l)
{   
    if(l != NULL)
    {
        struct nodo *cur, *prev;

        cur = *l;
        prev = NULL;

        while(cur.next != NULL)
        {
            prev = cur;
            cur = curr.next;
        }

        cur.next = *l;
        prev.next = NULL;
        *l = cur;
    }
}

void print(lista *l)
{

}