#include <stdio.h>
#include <stdlib.h>

typedef struct _elem 
{ 
	char car; 
	struct _elem *next; 
} car_t; 

typedef car_t *lista;

void inserisci (lista *l, char c);
void carica(char filename[], lista *l);
void salva(char filename[], lista l);

int main()
{
	lista l = NULL;

	carica("input.txt", &l);
	inserisci(&l, 's');
	salva("output.txt", l);

	return 0;
}

void inserisci (lista *l, char c)
{
	lista cur, pre, p;
	cur = *l;
	pre = NULL;

	while(cur != NULL && c > cur->car)
	{
		pre = cur;
		cur = cur->next;
	}

	p = malloc(sizeof(car_t));
	p->car = c;
	p->next = cur;

	// aggiorna il next dell'elemento precedente a quello appena inserit
	if (pre!=NULL)
		pre->next = p;
	else //se pre == NULL, p diventa la nuova testa della lista
		*l = p;	
}

void carica(char filename[], lista *l)
{
	FILE *f;
	char c;
	int n, i;

	f = fopen(filename,"r");
	if (f != NULL)
	{
		while (fscanf(f, "%c%d", &c, &n) == 2)
		{
			for (i = 0; i < n; i++)
				inserisci(l, c);
		}

		fclose(f);
	}	
}

void salva(char filename[], lista l)
{
	FILE *f;
	char c;
	int n;
	lista cur;

	f = fopen(filename,"w");
	if (f != NULL)
	{
		cur = l;
		while(cur != NULL)
		{
			if (cur == l)
			{
				c = cur->car;
				n = 1;
			}
			else if (cur->car != c)
			{
				fprintf(f, "%c%d", c, n);
				c = cur->car;
				n = 1;
			}
			else
				n++;

			cur = cur->next;
		}

		if (l != NULL)			
			fprintf(f, "%c%d", c, n);

		fclose(f);
	}
}
