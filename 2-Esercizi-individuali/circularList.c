//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>

typedef struct circular
{
    int data;
    struct circular *next;
} circularList;

typedef circularList *lista;

lista inserisci(lista l, int n);
void print(lista l);

int main()
{
    lista l = NULL;

    l = inserisci(l, 1);
    l = inserisci(l, 2);
    l = inserisci(l, 2);
    l = inserisci(l, 3);

    print(l);

    return 0;
}

lista inserisci(lista l, int n)
{
    lista current, previous, tmp;
    int found = 0;
    
    if(l == NULL)
    {
        tmp = malloc(sizeof(circularList));
        tmp -> data = n;
        tmp -> next = tmp;
        l = tmp;
    }
    else
    {
        current = l;
        
        do
        {
            if(current -> data == n)
                found = 1;
            previous = current;
            current = current -> next;
        } while(found == 0 && current != l);

        if(found == 0)
        {
            tmp = malloc(sizeof(circularList));
            tmp -> data = n;
            tmp -> next = l;
            previous -> next = tmp;
            l = tmp;
        }
    }
    return l;
}

void print(lista l)
{    
    if(l == NULL)
        printf("\nLista vuota\n");
    else
    {
        lista current = l;
        do
        {
            printf("[%d] --> ", current -> data);
            current = current -> next;
        } while(current != l);
    }
    
    printf("HEAD\n");
}