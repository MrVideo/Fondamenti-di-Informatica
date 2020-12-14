#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
1. Con l'inserimento in coda, scorro la lista *l e per ogni elemento:
  - Se pari, inserisco due nodi in l2
  - Se dispari, inserisco un nodo in l2
2. Libero tutta la memoria di *l (con una funzione rimuovi)
3. *l = l2
*/

//Oppure

/*
Modifico la struttura di lista attuale aggiungendo i nodi necessari
*/

struct nodo
{
    int el;
    struct nodo *next;
};

typedef struct nodo *lista;

void split_pari(lista *l)
{
    lista cur = *l, temp;
    
    while(cur != NULL)
    {
        if(cur -> el % 2 == 0)
        {
            cur -> el = cur -> el / 2; //Divido l'elemento a metà
            temp = malloc(sizeof(struct nodo)); //Assegno spazio al nuovo nodo
            temp -> el = cur -> el; //Assegno al nuovo nodo lo stesso elemento
            temp -> next = cur -> next; //Faccio puntare il nuovo nodo al successivo di quello corrente
            cur -> next = temp; //Faccio puntare il nodo corrente al nuovo nodo
            cur = temp -> next; //Mi sposto al prossimo nodo
        }
        else
            cur = cur -> next; //Mi sposto al prossimo nodo
    }
}

lista inserisci(lista l, int el)
{
    //Da implementare
}