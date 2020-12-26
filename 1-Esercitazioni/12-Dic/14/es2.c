#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    unsigned ora; /* tra 0 e 23*/
    unsigned minuto; /* tra 0 e 59 */
} tempo;
typedef char stazione[30]; /* il nome di una stazione */
typedef struct{
    int numero; /* numero del treno */
    tempo tPartenza, tArrivo;/*tempo partenza e tempo arrivo*/
    stazione da, a; /* stazioni di partenza e di arrivo */
} treno;
typedef struct{
    treno t[200];
    int nTreni; /* il numero dei treni effettivamente presenti nell'orario, che occupano le prime nTreni posizioni nell'array */
} orario;

void trova(orario o, tempo t, stazione da, stazione a)
{
    int i;
    
    tempo curTempo;
    stazione curPartenza, curArrivo;

    for(i = 0; i < o.nTreni; i++)
    {
        curTempo = o.t[i].tPartenza;
        strcpy(curPartenza, o.t[i].da);
        strcpy(curArrivo, o.t[i].a);

        if((curTempo.ora > t.ora || (curTempo.ora == t.ora && curTempo.minuto > t.minuto)) && strcmp(curPartenza, da) == 0 && strcmp(curArrivo, a) == 0)
        {
            //Printf con le info del treno            
        }
    }
}