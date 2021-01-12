#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//! Da rivedere

int vow(char *s);

int main()
{
    char a[10], b[10];
    int n, m;

    printf("Inserisci la prima stringa: ");
    scanf("%s", a);
    printf("Inserisci la seconda stringa: ");
    scanf("%s", b);

    n = vow(a);
    m = vow(b);

    printf("\na: %s\n", a);
    printf("b: %s\n", b);
    

    if(!strcmp(a, b))
    {
        printf("\nLe due stringhe sono uguali a meno di vocali\n");
        printf("Vocali rimosse da a: %d\n", n);
        printf("Vocali rimosse da b: %d\n", m);
    }
    else
        printf("\nLe stringhe sono diverse anche a meno di vocali\n");
    
    return 0;
}

int vow(char *s)
{
    if(*s == '\0')
        return 0;
    else if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
    {
        *s = *(s + 1);
        return 1 + vow(s + 1);
    }
    else
        return vow(s + 1);
}