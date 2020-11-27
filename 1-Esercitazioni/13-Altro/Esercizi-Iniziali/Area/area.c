#include <stdio.h>

int main()
    {
        int lung, larg, area;

        printf("Inserisci lunghezza e larghezza separati da una virgola:\t");
        scanf("%d, %d",&lung,&larg);

        area = lung * larg;

        printf("L'area della stanza è %d\n",area);

        return 0;
    }
