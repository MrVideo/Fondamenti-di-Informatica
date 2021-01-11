#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char fname[31];
    char lname[31];
    char phonenum[14];
    char email[100];
    int fav;
    int full;
};

typedef struct contact[100] phonebook;

void new_contact();
struct contact search(char *fname, char *lname);
void print_fav();

int main()
{
    system("clear");

    int sel;
    char fname[31], lname[31];
    struct contact found;
    phonebook contacts;
    FILE *contacts_ptr = fopen("contacts.bin", "rb");

    fread(&contacts[0], sizeof(struct contact), 100, contacts_ptr);

    printf("Cosa desideri fare?\n");
    printf("1. Nuovo contatto\n");
    printf("2. Cerca contatto\n");
    printf("3. Mostra preferiti\n");
    printf("Inserisci la tua scelta: ");
    scanf("%d", &sel);

    switch(sel)
    {
        case 1:
            new_contact(contacts);
            break;
        case 2:
            printf("\nInserisci il nome del contatto: ");
            scanf("%s", fname);
            printf("\nInserisci il cognome del contatto: ");
            scanf("%s", lname);
            found = search(fname, lname);
            if(!strcmp(found.fname, "\0"))
                printf("Non è stato trovato questo contatto\n");
            else
            {
                printf("Nome: %s\n", found.fname);
                printf("Cognome: %s\n", found.lname);
                printf("Numero di telefono: %s\n", found.phonenum);
                printf("Email: %s\n", found.email);
                printf("Preferito: ");
                if(found.fav)
                    printf("sì\n");
                else
                    printf("no\n");
            }
            break;
        case 3:
            print_fav();
            break;
        default:
            printf("Hai digitato un carattere non valido.\n");
    }

    fclose(contacts_ptr);

    contacts_ptr = fopen("contacts.bin", "wb");
    fwrite(&contacts[0], sizeof(struct contact), 100, contacts_ptr);
    fclose(contacts_ptr);

    return 0;
}

void new_contact(contacts)
{
    system("clear");

    int num, i, clear = 0;

    printf("Quanti contatti vuoi aggiungere? ");
    scanf("%d", &num);

    for(i = 0; i < 100; i++)
    {
        if(contacts.full == 0)
            clear++;
    }

    if(clear >= num)
    {
        for(i = 100 - clear; i < clear + num; i++)
        {
            printf("\n\nContatto %d:", i + 1)
            printf("\nNome: ");
            scanf("%s%*c", contacts[i].fname);
            printf("\nCognome: ");
            scanf("%s%*c", contacts[i].lname);
            printf("\nNumero di telefono: ");
            scanf("%s%*c", contacts[i].phonenum);
            printf("\nEmail: ");
            scanf("%s%*c", contacts[i].email);
            printf("\nPreferito (1 sì, 2 no): ");
            scanf("%d", &contacts_ptr[i].fav);

            &contacts[i].full = 1;
        }
    }
    else
        printf("\nNon c'è più spazio per salvare %d contatti. Spazio disponibile: %d\n", num, clear);
}

struct contact search(char *fname, char *lname)
{
    //! Finire
}

void print_fav()
{
    //! Finire
}