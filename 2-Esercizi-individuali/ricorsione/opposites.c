#include <stdio.h>
#include <stdlib.h>

int fun(int *a, int d);

int main()
{
    int a[6] = {1, 2, 2, 1, 1, 2}, b[5] = {1, 3, 4, 1, 3};

    printf("\nArray a: %d\n", fun(a, 6));
    printf("\nArray b: %d\n", fun(b, 5));
    
    return 0;
}

int fun(int *a, int d)
{
    if(d == 0 || d == 1 || d == 2)
        return 1;
    else if(d == 3)
        if(*a + *(a + 2) == *(a + 1))
            return 1;
        else
            return 0;
    else
        if(*a + *(a + d - 1) == *(a + 1) + *(a + d - 2))
            return fun(a + 1, d - 2);
        else
            return 0;
    return 0;
}