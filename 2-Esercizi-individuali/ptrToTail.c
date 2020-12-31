//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node *next;
    struct node *tail;
} toTail;

typedef toTail *list;

list add(list l, int n);
list delete(list l, int n);
void print(list l);
void printLast(list l);

int main()
{
    list l = NULL;

    l = add(l, 1);
    l = add(l, 2);
    l = add(l, 3);
    l = add(l, 4);

    print(l);

    l = delete(l, 2);

    print(l);
    
    printLast(l);

    return 0;
}

list add(list l, int n) //* Funziona correttamente
{
    list tmp, current, previous, start, last;

    if(l == NULL)
    {
        tmp = malloc(sizeof(toTail));
        tmp -> num = n;
        tmp -> next = NULL;
        tmp -> tail = tmp;
        l = tmp;
    }
    else
    {
        current = l;
        start = l;
        last = l;

        do
        {
            previous = current;
            current = current -> next;
        } while(current != NULL);

        tmp = malloc(sizeof(toTail));
        tmp -> num = n;
        tmp -> next = current;
        previous -> next = tmp;
        l = start;
        current = l;

        while(last -> next != NULL)
            last = last -> next;

        while(current != NULL)
        {
            current -> tail = last;
            previous = current;
            current = current -> next;
        }
    }

    return l;
}

void print(list l) //* Funziona correttamente
{
    if(l == NULL)
        printf("END\n");
    else
    {
        printf("[%d] ==> ", l -> num);
        print(l -> next);
    }
}

list delete(list l, int n) //* Funziona correttamente
{
    list current = l, previous = NULL, last = l, start = l;

    if(current -> num == n && previous == NULL)
    {
        l = current -> next;
        free(current);
    }
    else
    {
        while(current -> num != n)
        {
            previous = current;
            current = current -> next;
        }
    
        if(current -> next == NULL)
        {
            previous -> next = NULL;
            previous -> tail = previous;
            last = previous;
            while(start -> next != NULL)
            {
                start -> tail = last;
                start = start -> next;
            }

            free(current);
        }
        else
        {
            previous -> next = current -> next;
            free(current);
        }
    }

    return l;
}

void printLast(list l)
{
    list current = l, previous = NULL;
    
    while(current != NULL)
    {
        printf("Last: [%d]\n", current -> tail -> num);

        previous = current;
        current = current -> next;
    }
}