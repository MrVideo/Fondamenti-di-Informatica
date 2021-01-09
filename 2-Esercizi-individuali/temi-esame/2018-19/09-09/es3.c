/*
Implementare la funzione void shift(lista *l), che riceve in ingresso la testa di una lista l.
La funzione deve modificare la lista l, spostando tutti i nodi in avanti di una posizione
(il primo nodo diventa il secondo, il secondo diventa il terzo e così via), mentre fa diventare
l’ultimo nodo della lista il primo nodo. Nel caso la lista sia vuota o contenga un solo elemento,
la funzione non farà niente.
*/

//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int el;
    struct nodo *next;
};

typedef struct nodo *lista;

void shift(lista *l);
lista inserisci_testa(lista l, int n);
lista inserisci(lista l, int n);
void stampa(lista l);

int main()
{
    lista l = NULL;

    l = inserisci(l, 1);
    l = inserisci(l, 2);
    l = inserisci(l, 3);

    stampa(l);

    shift(&l);

    stampa(l);

    return 0;
}

void shift(lista *l)
{
    lista current = *l, previous = NULL, head = *l;

    while(current -> next != NULL)
    {
        previous = current;
        current = current -> next;
    }

    current -> next = head;
    previous -> next = NULL;
    *l = current;
}

lista inserisci_testa(lista l, int n)
{
    lista tmp = malloc(sizeof(struct nodo));
    tmp -> el = n;
    tmp -> next = NULL;
    return tmp;
}

lista inserisci(lista l, int n)
{
    if(l == NULL)
        return inserisci_testa(l, n);
    else
    {
        l -> next = inserisci(l -> next, n);
        return l;
    }
}

void stampa(lista l)
{
    if(l == NULL)
        printf("END\n");
    else
    {
        printf("%d -> ", l -> el);
        stampa(l -> next);
    }
}