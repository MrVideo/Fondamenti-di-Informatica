/*
Implementare la funzione void shift(lista *l), che riceve in ingresso la testa di una lista l.
La funzione deve modificare la lista l, spostando tutti i nodi in avanti di una posizione
(il primo nodo diventa il secondo, il secondo diventa il terzo e così via), mentre fa diventare
l’ultimo nodo della lista il primo nodo. Nel caso la lista sia vuota o contenga un solo elemento,
la funzione non farà niente.
*/

#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int el;
    struct nodo *next;
};

typedef struct nodo *lista;

void shift(lista l);
lista inserisci_testa(lista l, int n);
lista inserisci_coda(lista l, int n);
void stampa(lista l);

int main()
{
    lista l;
    l = NULL;

    l = inserisci_testa(l, 1);
    l = inserisci_coda(l, 2);
    l = inserisci_coda(l, 3);

    stampa(l);

    shift(l);
    
    stampa(l);

    return 0;
}

void shift(lista l)
{
    lista current = l, previous = NULL, head = l;

    if(current == NULL || current -> next == NULL)
        printf("\nNon può essere applicata la funzione shift alla lista\n");
    else
    {
        while(current -> next != NULL)
        {
            previous = current;
            current = current -> next;
        }
        previous -> next = NULL;
        current -> next = l;
        l = current;
    }
}

lista inserisci_testa(lista l, int n)
{
    struct nodo *tmp = malloc(sizeof(struct nodo));
    tmp -> next = NULL;
    tmp -> el = n;
    return tmp;
}

lista inserisci_coda(lista l, int n)
{
    if(l == NULL)
        return inserisci_testa(l, n);
    else
    {
        l -> next = inserisci_coda(l -> next, n);
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