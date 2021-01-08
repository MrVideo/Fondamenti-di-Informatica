/*
Si ipotizzi di voler rappresentare nella memoria di un calcolatore un composto chimico.
In particolare, è necessario memorizzare il nome del composto (50 caratteri al massimo),
tutti gli elementi chimici presenti nel composto e la loro numerosità.
A sua volta, per ogni elemento chimico occorrerà memorizzare il nome (al massimo 15 caratteri),
il simbolo (al più due caratteri) e il suo numero atomico (un intero).

Ad esempio, nel caso dell’acqua dovranno essere memorizzate le seguenti informazioni:
il composto Acqua è formato da 2 atomi di Idrogeno (simbolo H e numero atomico 1)
e 1 atomo di Ossigeno (simbolo O e numero atomico 8).

A) Definire un tipo di dato composto, adatto a memorizzare tutte le informazioni descritte qui sopra.
B) Implementare una funzione visualizza che riceve in ingresso un parametro di tipo composto
   e ne stampa a video la formula (cioè una sequenza di <simbolo>_<numerosità> per tutti gli
   elementi chimici presenti nel composto, ad esempio nel caso dell’acqua verrà visualizzato
   H_2 O_1).
*/

struct elemento {
    char nome[16];
    char simbolo[3];
    int n;
};

struct componente {
    struct elemento elem;
    int quantity;
};

struct composto {
    char nome[51];
    struct componente componenti[50];
};

void formula(struct composto c);

#include <stdio.h>
#include <stdlib.h>

int main() //Per il testing
{

}

void formula(struct composto c)
{
    int i;
    
    for(i = 0; i < 50; i++)
        printf("%c_%d", c.componenti[i].elem.simbolo, c.componenti[i].quantity);
}