#include <stdio.h>
#include <stdlib.h>

int main()
  {
    int sel; //Variabile selettore
    char rep; //Variabile ripetizione programma
    float c,f; //Dichiarazione variabili

    system("clear"); //Elimina le informazioni dallo schermo
    for( ; ; ) //Loop infinito
      {
        printf("In che verso vuoi convertire?\n"); //Verso di conversione
        printf("1. °F > °C\n");
        printf("2. °C > °F\n");
        printf("Scelta: "); //Selezione verso di conversione
        scanf("%d",&sel);
        switch (sel) { //Switch - va al verso della conversione giusto
          case 1:
            printf("\nInserisci la temperatura in °F: "); //Input Farenheit
            scanf("%f",&f);

            c = (f - 32) * (5.0 / 9.0); //Conversione - Usando 5/9 otteniamo un risultato intero pari a 0

            printf("\nLa temperatura è di %.2f °C\n",c); //Output

            break;
          case 2:
            printf("\nInserisci la temperatura in °C: "); //Input Celsius
            scanf("%f",&c);

            f = c * (9.0/5.0) + 32; //Conversione inversa alla precedente

            printf("\nLa temperatura è di %.2f °F\n",f); //Output

            break;
          default: //Se non c'è stata una selezione tra le scelte poste
            printf("\nHai digitato un carattere non valido.\n");
            return 1;
        }

        printf("Vuoi convertire un'altra temperatura (s/n)? "); //Richiesta ripetizione
        scanf("\n%c",&rep);

        switch (rep) {
          case 's': //Torna all'inizio - loop infinito
            break;
          case 'n': //Interrompe l'esecuzione
            return 0;
            break;
          default: //Se non c'è stata una selezione tra le scelte poste
            printf("\nHai digitato un carattere non valido.\n");
            return 1;
        }
      }
  }
