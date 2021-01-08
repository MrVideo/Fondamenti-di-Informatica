/*
Scrivere la funzione C ricorsiva int count_before (lista l, int el), che calcola quanti nodi ci
sono nella lista l prima di raggiungere o un nodo contenente il valore el oppure la fine della
lista (nel caso non ci sia nessun nodo contenente il valore el).

Nota: nel conteggio va escluso il nodo stesso contenente il valore el.
*/

struct nodo {
    int el;
    struct nodo *next;
};

typedef struct nodo *lista;

int count_before(lista l, int el);

int main()
{

}

int count_before(lista l, int el)
{
    if(l -> el == el || l = NULL)
        return 0;
    else
        return count_before(l -> next, el) + 1;
}