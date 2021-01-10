#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[30] = "Hello ";

    sprintf(str, "%sWorld!\n", str);

    printf("%s", str);

    return 0;   
}