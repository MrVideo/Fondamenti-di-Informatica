/*
28 Gennaio 2019 - Esercizio 2

Implementare la funzione lista selezione(lista x, int sel[]), che riceve in ingresso
una lista x ed un vettore di interi sel (di lunghezza sempre uguale al numero di elementi presenti
nella lista x) e contenente solo 0 ed 1. La funzione dovrà restituire una nuova lista che contenga
solo gli elementi di x che si trovano nella lista in una posizione corrispondente agli 1 del
vettore sel.
*/

#include <stdio.h>

lista selezione(lista x, int *sel);

struct nodo {
    char c;
    struct nodo *next;
};

typedef struct nodo *lista;

int main() //Per testing
{

}

lista selezione(lista x, int *sel)
{
    lista current = x, previous = NULL, new = NULL;
    int nodes = 0;

    if(*sel == 1)
    {
        lista tmp = malloc(sizeof(struct nodo));
        tmp -> c = current -> c;
        tmp -> next = NULL;
        new = tmp;
    }

    while(current != NULL)
    {
        previous = current;
        current = current -> next;
        nodes++;

        if(*(sel + nodes) == 1)
        {
            if(new == NULL)
            {
                lista tmp = malloc(sizeof(struct nodo));
                tmp -> c = current -> c;
                tmp -> next = NULL;
                new = tmp;
            }
            else
            {
                lista tmp = malloc(sizeof(struct nodo));
                tmp -> c = current -> c;
                tmp -> next = NULL;
                new -> next = tmp;
            }
        }
    }

    return new;
}