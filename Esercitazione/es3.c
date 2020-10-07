#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
        int yr, isBis, isSec, isSecBis;


        system("clear");

        printf("Inserisci un anno: ");
        scanf("%d",&yr);

        isBis = yr % 4 == 0; //Divisibile per 4
        isSec = yr % 100 == 0; //Divisibile per 100
        isSecBis = yr % 400 == 0; //Divisibile per 400

        if(isSecBis) //Se è entrambi
            {
                printf("\nL'anno è secolare e bisestile.\n");
                return 0;
            }
        else
            {
                if(isBis && !isSec) //Solo bisestile
                    {
                        printf("\nL'anno è bisestile.\n");
                        return 0;
                    }
                else
                    {
                        if(isSec) //Solo secolare
                            {
                                printf("\nL'anno è secolare.\n");
                                return 0;
                            }
                        else //Nessuno dei due
                            {
                                printf("\nL'anno non è né bisestile, né secolare.\n");
                                return 0;
                            }
                    }   
            }
    }