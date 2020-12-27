//! Funziona correttamente

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun(int *a, int d);

int main()
{
    int a[6] = {1, 3, 2, 2, 1, 3}, b[5] = {1, 1, 3, 2, 2};

    system("clear");

    if(fun(a, 6))
    {
        printf("Gli elementi opposti di a hanno somma costante.\n");
    }
    else
    {
        printf("Gli elementi opposti di a non hanno somma costante.\n");
    }

    if(fun(b, 5))
    {
        printf("Gli elementi opposti di b hanno somma costante.\n");
    }
    else
    {
        printf("Gli elementi opposti di b non hanno somma costante.\n");
    }
    
    return 0;
}

int fun(int *a, int d)
{
    if(d == 0 || d == 1 || d == 2)
        return 1;
    else if(d == 3)
    {
        if(*a + *(a + 2) == *(a + 1))
            return 1;
        
        return 0;
    }
    else
    {
        int chk = 0;

        while(!chk)
        {
            if(*a + *(a + d - 1) == *(a + 1) + *(a + d - 2))
            {
                chk = 0;
                return fun(a + 1, d - 2);
            }
            else
                chk = 1;
        }

        return 0;
    }
    
    return 0;
}