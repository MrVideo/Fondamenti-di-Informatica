#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define DIM 100

struct node {
    int n;
    struct node *next;
};

typedef struct node *list;

int contained(list l1, list l2);

int contained(list l1, list l2)
{
    list c1 = l1, p1 = NULL, c2 = l2, p2 = NULL;
    int counter = 0, chk = 0, elements[DIM];

    while(c1 != NULL)
    {
        elements[counter] = c1 -> n;
        counter++;
        p1 = c1;
        c1 = c1 -> next;
    }

    while(c2 != NULL)
    {
        if(elements[chk] == c2 -> n)
        {
            chk++;
            c2 = l2;
        }
        else
            return 0;
        
        p2 = c2;
        c2 = c2 -> next;
    }

    if(chk == counter)
        return 1;

    return 0;
}