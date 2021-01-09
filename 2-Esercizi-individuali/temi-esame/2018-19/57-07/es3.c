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
    contatto record;

    system("clear");

    printf("Inserisci il nome del file: ");
    scanf("%s", filename);

    input = fopen(filename, "rb+");
    rewind(input);

    while(!feof(input) && !ferror(input))
    {
        fread(&record, sizeof(contatto), 1, input);

        strcpy(phonenum, record.tel);

        if(phonenum[0] == '0')
            phonenum[0] = '+';
        else if(phonenum[0] >= 49 && phonenum[0] <= 57)
        {
            strcat(prefix, phonenum);
            strcpy(phonenum, prefix);
        }

        strcpy(record.tel, phonenum);

        fwrite(&record, sizeof(contatto), 1, input);

        fseek(input, sizeof(contatto), SEEK_CUR);
    }

    fclose(input);

    return 0;
}