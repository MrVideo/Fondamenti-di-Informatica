#include <stdio.h>
#include <stdlib.h>
#include <string.h>

lista add(lista l, char c);
lista load(lista l, FILE *in);
void save(lista l, FILE *out);

typedef struct _elem {
    char car;
    struct _elem * next;
} car_t;

typedef car_t *lista;

int main()
{
    system("clear");

    lista l = NULL;

    FILE *in = fopen("test.txt", "r");

    l = load(l, in);

    while(l != NULL)
    {
        printf("[%c] -> ", l -> car);
    }

    printf("END\n");
    
    return 0;
}

lista add(lista l, char c)
{
    lista *tmp = malloc(sizeof(struct _elem)), curr = l, prev = NULL;

    tmp -> car = c;
    
    if(l == NULL)
    {
        tmp -> car = c;
        tmp -> next = l;
    }
    else
    {
        while(curr -> car < c)
        {
            prev = curr;
            curr = curr -> next;
        }
        if(curr -> car == c) 
        {
            while(curr -> next -> car == c)
            {
                prev = curr;
                curr = curr -> next;
            }
            
            tmp -> next = curr -> next;
            prev -> next = tmp;
        }
        else
        {
            tmp -> next = curr;
            prev -> next = tmp;
        }
    }

    return l;
}

lista load(lista l, FILE *in)
{
    char readfile[100], letter;
    int freq, i, len;

    fscanf(in, "%s", readfile);
    len = strlen(readfile);

    for(i = 0; i < len; i + 2)
    {
        letter = readfile[i];
        freq = readfile[i + 1];
        while(freq > 0)
        {
            lista l = add(l, letter);
            freq--;
        }
    }

    return l;
}

void save(lista l, FILE *out)
{
    lista curr = l;
    int freq = 0;
    char letter;
    
    while(curr != NULL)
    {
        letter = curr -> car;

        while(curr -> next -> car == curr -> car)
        {
            freq++;
            curr = curr -> next;
        }

        fprintf(out, "%c%d", letter, freq);
        
        freq = 0;

        curr = curr -> next;
    }
}