#include "liste.h"

int lunghezza(lista l)
{
    if(l == NULL)
        return 0;
    else
        return 1 + lunghezza(l -> next);
}

lista ricerca(lista l, data el)
{
    if(l == NULL || l -> el == el)
        return l;
    else
        return ricerca(l -> next, el);
}

lista inserisci_testa(lista l, data el)
{
    struct nodo *temp = malloc(sizeof(struct nodo));
    temp -> el = el;
    temp -> next = l;
    return temp;
}

lista inserisci_coda(lista l, data el)
{
    if(l == NULL)
        return inserisci_testa(l, el);
    else
    {
        l -> next = inserisci_coda(l -> next, el);
        return l;
    }
}

lista rimuovi_testa(lista l)
{
    if(l != NULL)
    {
        lista temp = l;
        l = l -> next;
        free(temp);
    }

    return l;
}

lista rimuovi_coda(lista l)
{
    if(l != NULL)
    {
        if(l -> next == NULL)
            return rimuovi_testa(l);
        else
        {
            l -> next = rimuovi_coda(l -> next);
            return l;
        }
    }
    else
        return NULL;
}

lista rimuovi(lista l, data el)
{
    if(l == NULL)
        return l;
    if(l -> el == el)
        return rimuovi_testa(l);
    else
    {
        l -> next = rimuovi(l -> next, el);
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