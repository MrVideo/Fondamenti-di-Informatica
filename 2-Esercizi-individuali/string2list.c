#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct node {
    char c;
    int freq;
    struct node *next;
};

typedef struct node *list;

list string2list(char *string);
list search(list l, char c);
list add(list l, char c, int f);
list append(list l, char c, int f);
void print(list l);

int main()
{
    char string[30];
    list l;
    int i;

    system("clear");

    printf("Inserisci un messaggio: ");
    scanf("%s", string);

    l = string2list(string);

    print(l);

    return 0;
}

list string2list(char *string)
{
    int i, j, count = 0;
    list l = malloc(sizeof(struct node)), current = malloc(sizeof(struct node)); //Creazione lista

    for(i = 0; i < strlen(string); i++) //Scorre la stringa
    {
        count = 0;
        current = search(l, *(string + i)); //Cerca elementi già aggiunti
        printf("\nSearch OK\n");

        if(current == NULL) //Se non c'è questo elemento
        {
            for(j = 0; j < strlen(string); j++) //Conta le occorrenze di un carattere
            {
                if(*(string + j) == *(string + i))
                    count++;
            }

            l = append(l, *(string + i), count); //Aggiungi alla lista
        }
    }

    return l;
}

list search(list l, char c) //Ricerca
{
    if(l -> c == c || l == NULL) //Se la lista è vuota o se l'elemento cercato è nel nodo corrente
        return l; //Ritorna quell'indirizzo
    else //Altrimenti
        return search(l -> next, c); //Cerca nel prossimo nodo
}

list add(list l, char c, int f) //Aggiungi in testa
{
    list tmp = malloc(sizeof(struct node)); //Crea un nodo temporaneo
    tmp -> c = c; //Poni nel nuovo nodo il carattere in ingresso...
    tmp -> freq = f; //... la frequenza di quel carattere...
    tmp -> next = l; //... e l'indirizzo della vecchia testa

    return tmp; //Ritorna il nuovo nodo
}

list append(list l, char c, int f) //Aggiungi in coda
{
    if(l == NULL) //Se la lista è vuota
        return add(l, c, f); //Aggiungi in testa
    else //Altrimenti
    {
        l -> next = append(l -> next, c, f); //Passa al nodo successivo e controlla se è l'ultimo
        return l; //Ritorna l'indirizzo di quel nodo
    }
}

void print(list l) //Stampa la lista
{
    if(l == NULL) //Se la lista è alla fine o è vuota
        printf("END\n"); //Stampa END
    else //Altrimenti
    {
        printf("%c / %d -> ", l -> c, l -> freq); //Stampa carattere e frequenza di un nodo
        print(l -> next); //E passa al prossimo
    }
}