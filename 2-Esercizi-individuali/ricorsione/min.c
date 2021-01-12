#include <stdio.h>

float min(float *v, int len);

int main()
{
    float a[5] = {1.1, 3.4, -1.3, -4.9, 5.2};
    
    printf("Il valore minimo è %f\n", min(a, 5));
    
    return 0;
}

float min(float *v, int len)
{
    if(len == 0)
        return *v;
    else
    {
        float m = min(v + 1, len - 1);

        if(m < *v)
            return m;
        else
            return *v;
    }
    
}