/*
Si supponga di avere in memoria una lista dinamica che memorizza una sequenza di interi.
Si scriva una funzione ricorsiva in C che riceve come parametro la testa della lista e modifica
la lista sommando a ogni elemento il valore di tutti gli elementi a esso successivi
(l’ultimo elemento resta invariato) e restituisca la somma di tutti i valori nella lista.
*/

//! Da finire

#include <stdio.h>
#include <stdlib.h>

struct node {
    int n;
    struct nodo *next;
};

typedef struct node *list;

int sum(list *l)
{
    if(l == NULL)
        return 0;
    else
    {
        list prev = NULL, curr = l;


    }
}