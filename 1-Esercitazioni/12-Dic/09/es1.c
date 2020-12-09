#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista {
    char val;
    int freq;
    struct node *next;
};

struct lista *l(char *string);
struct lista inserisci_testa(lista l, data el);

int main()
{
    system("clear");

    char string[30];

    printf("Inserisci una stringa di caratteri: ");
    scanf("%s", string);

    struct lista = string2list(string);
}

struct lista *string2list(char *string)
{
    int i = 0;

    for(i = 0; i < strlen(string); i++)
    {
        inserisci_testa(struct lista, )
    }
}

struct lista inserisci_testa(lista l, data el)
{
  struct nodo *temp = malloc(sizeof(struct nodo));
  temp->el = el;
  temp->next = l;
  return temp;
}