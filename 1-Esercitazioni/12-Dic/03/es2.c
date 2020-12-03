#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int data;
    struct nodo *next;
};

typedef struct nodo *lista;

lista selezione(lista l, int sel[]);
lista inserisci_in_testa(lista l, int elem);
lista inserisci_in_coda(lista l, int elem);

void stampa(lista l);

int main()
{
    lista l = NULL;

    l = inserisci_in_coda(l, 20);
    l = inserisci_in_coda(l, 16);
    l = inserisci_in_coda(l, 12);
    l = inserisci_in_coda(l, 2);

    stampa(l);

    int arr[4] = {0, 1, 1, 0};

    lista l2 = selezione(l, arr);

    stampa(l);
}

lista selezione(lista l, int sel[])
{
    if(l == NULL)
        return l;
    else if(sel[0] == 0)
        return selezione(l -> next, sel + 1);
    else
    {
        struct nodo *p;
        p = malloc(sizeof(struct nodo));

        p -> data = l -> data;
        p -> next = selezione(l -> next, sel + 1);
        
        return p;
    }
}

lista inserisci_in_testa(lista l, int elem)
{
    struct nodo *p;
    p = malloc(sizeof(struct nodo));
    p -> next = l;
    p -> data = elem;
    return p;
}

lista inserisci_in_coda(lista l, int elem)
{
    if(l == NULL)
        return inserisci_in_testa(l, elem);
    else
    {
        l -> next = inserisci_in_coda(l -> next, elem);
        return l;
    }
}

void stampa(lista l)
{
    
}