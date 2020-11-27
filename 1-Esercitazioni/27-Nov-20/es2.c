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

void inserisci(lista *l, char c)
{
    //Inizio lista
	lista cur, pre, p;
	cur = *l;
	pre = NULL;

    //Finché cur punta a qualcosa, cioè finché non siamo alla fine della lista
    //Finché il carattere passato alla funzione viene dopo a quello nella lista
	while(cur != NULL && c > cur->car)
	{
		pre = cur; //Scorri in avanti la lista
		cur = cur->next;
	}

	p = malloc(sizeof(car_t)); //Aggiungi un nodo
	p->car = c; //Assegna il carattere passato alla funzione a car nel nuovo nodo
	p->next = cur; //Fai puntare il next del nuovo nodo al nodo corrente

	//Aggiorna il next dell'elemento precedente a quello appena inserito
	if (pre!=NULL)
		pre->next = p;
	else //Se pre == NULL, p diventa la nuova testa della lista
		*l = p;	
}

void carica(char filename[], lista *l)
{
	FILE *f;
	char c;
	int n, i;

	f = fopen(filename,"r"); //Apre il file passato alla funzione in read mode
	if(f != NULL) //Se il file esiste (se il suo puntatore punta a qualcosa)
	{
		while (fscanf(f, "%c%d", &c, &n) == 2) //Finché la fscanf ritorna sempre 2 valori (lettera e frequenza della lettera) dal file
		{
			for (i = 0; i < n; i++) //Aggiungi questi due valori alla lista
				inserisci(l, c); //Passandoli all'interno della funzione inserisci
		}

		fclose(f); //Chiudi il file
	}	
}

void salva(char filename[], lista l)
{
	FILE *f;
	char c;
	int n;
	lista cur;

	f = fopen(filename,"w"); //Apri il file passato alla funzione in write mode
	if (f != NULL) //Se il file esiste (se il suo puntatore punta a qualcosa)
	{
		cur = l; //Inizia alla testa della lista
		
        while(cur != NULL) //Finché abbiamo ancora nodi nella lista (finché cur non punta a nulla)
		{
			if (cur == l) //Se il corrente è alla testa della lista
			{
				c = cur->car; //Il carattere da stampare è quello contenuto nel nodo corrente della lista
				n = 1; //E la sua frequenza è uno
			}
			else if (cur->car != c) //Altrimenti se il carattere successivo (siamo passati al nodo successivo) è diverso da c (cioè il carattere precedente)
			{
				fprintf(f, "%c%d", c, n); //Stampa sul file il carattere corrente e la sua frequenza (che aumenta se il c precedente è uguale al successivo)
				c = cur->car; //Assegna il carattere successivo nella lista a c
				n = 1; //Ed assegnagli frequenza 1
			}
			else
				n++; //Altrimenti aumenta la frequenza del carattere c se continua ad esserci lo stesso carattere

			cur = cur->next; //Scorri la lista in avanti
		}

		if(l != NULL) //Se la lista non è finita (se c'è almeno un nodo)		
			fprintf(f, "%c%d", c, n); //Stampa sul file il carattere e la sua frequenza

		fclose(f); //Chiudi il file
	}
}
