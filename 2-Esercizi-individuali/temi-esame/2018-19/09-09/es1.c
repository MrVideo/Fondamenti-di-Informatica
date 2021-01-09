// Consegna troppo lunga per rientrare nell'esercizio. Riferirsi al PDF.

//! Da completare

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int C(char *game, int len);

int main()
{
    system("clear");

    char s1[6] = "153/9-", s2[7] = "3/X-/3/";
    int pts, l1 = strlen(s1), l2 = strlen(s2);

    pts = C(s1, l1);
    printf("\n%d", pts);
    
    pts = C(s2, l2);
    printf("\n%d", pts);
    
    return 0;
}

int C(char *game, int len)
{

}