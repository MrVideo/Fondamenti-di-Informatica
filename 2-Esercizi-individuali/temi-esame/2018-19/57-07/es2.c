/*
Implementare la funzione void selezione(lista *l, int sel[]), che riceve in ingresso la testa
di una lista l ed un vettore di interi sel (di lunghezza sempre uguale al numero di
elementi presenti nella lista puntata da l), contenente solo 0 ed 1. La funzione dovrà
modificare la lista l eliminando tutti i nodi che si trovano in una posizione corrispondente agli 0
del vettore sel. La funzione deve anche liberare la memoria occupata dai nodi che vengono rimossi.
*/

void selezione(lista l, int *sel);

struct nodo {
    int el;
    struct nodo *next;
};

typedef struct nodo *lista;

void selezione(lista l, int *sel)
{
    lista current = l, previous = NULL;
    int i = 0;

    while(current != NULL)
    {
        if(*(sel + i) == 0)
        {
            previous -> next = current -> next;
            free(current);
        }

        previous = current;
        current = current -> next;
        i++;
    }
}