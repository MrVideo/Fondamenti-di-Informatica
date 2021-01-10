struct nodo {
    int data;
    struct nodo *next;
};

typedef struct nodo *lista;

lista interseca(lista a, lista b)
{
    lista curr1 = a, curr2 = b, new = NULL;
    int found;

    while(curr1 != NULL)
    {
        while(curr2 != NULL && found == 0)
        {
            if(curr1 -> data == curr2 -> data)
                found = 1;
            else
                found = 0;

            curr2 = curr2 -> next;
        }

        if(found == 1)
        {
            lista *tmp = malloc(sizeof(struct nodo));
            tmp -> data = curr1 -> data;
            tmp -> next = new;
            new = tmp;
        }

        curr1 = curr1 -> next;
        found = 0;
    }

    return new;
}