/*
Scrivere un programma C, che legge da tastiera il nome di un file binario
(che comprende anche il percorso del file sul disco) contenente un array di tipo
contatto di lunghezza non superiore a 100.
Il programma dovrà quindi modificare il contenuto del file cambiando il campo tel, di tutti
i contatti, come segue:

- se inizia con ‘0’, dovrà sostituire lo ‘0’ con un ‘+’
- se inizia con una cifra (fra ‘1’ e ‘9’), dovrà aggiungere all’inizio ‘+39’
- in tutti gli altri casi lascerà il campo invariato
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100]; //nome e cognome
    char tel[30]; // numero di telefono
    int eta; // età del contatto
} contatto;

int main()
{
    char filename[30], phonenum[30], prefix[30] = "+39";
    FILE *input;
    contatto record[100];
    int i;

    system("clear");

    printf("Inserisci il percorso del file: ");
    scanf("%s", filename);

    input = fopen(filename, "rb+");
    
    fread(&record[i], sizeof(contatto), 100, input); //Lettura di tutto l'array di struct

    for (i = 0; i < 100; i++)
    {
        if(record[i].tel[0] == '0')
            record[i].tel[0] = '+';
        else if(record[i].tel[0] >= 49 && record[i].tel[0] <= 57)
        {
            sprintf(phonenum, "+39%s", record[i].tel);
            strcpy(record[i].tel, phonenum);
        }
    }

    fwrite(&record[i], sizeof(contatto), 100, input);

    fclose(input);

    return 0;
}