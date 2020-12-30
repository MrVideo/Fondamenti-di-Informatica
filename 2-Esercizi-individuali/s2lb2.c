#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char letter;
    int freq;
    struct node *next;
};

typedef struct node *list;

list string2list(char *s);
list add(list l, char c);
void print(list l);

int main()
{
    list l = NULL;
    int i;

    system("clear");

    l = string2list("esempio");

    print(l);

    return 0;
}

list string2list(char *s)
{
    list l;
    int i;
    
    for(i = 0; i < strlen(s); i++)
        l = add(l, *(s + i));

    return l;
}

list add(list l, char c)
{
    struct node *current, *tmp;

    current = l;

    while(current != NULL && current -> letter != c)
        current = current -> next;

    if(current != NULL)
        current -> freq = current -> freq + 1;
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp -> letter = c;
        tmp -> freq = 1;
        tmp -> next = l;

        l = tmp;
    }

    return l;
}

void print(list l)
{
    if(l == NULL)
        printf("END\n");
    else
    {
        printf("[ %c | %d ] -> ", l -> letter, l -> freq);
        return print(l -> next);
    }
}