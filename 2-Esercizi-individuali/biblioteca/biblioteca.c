#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    char title[101];
    char author[101];
    int year;
} book;

typedef struct {
    book books[100];
    int bookNum;
} library;

library readBook(FILE *in);

int main()
{
    FILE *input = fopen("libriin.txt", "r");

    readBook(input);
}

library readBook(FILE *in)
{
    library lib;
    lib.bookNum = 0;

    while(!feof(in) && !ferror(in))
    {
        book b;
        int n = 0;

        n = fscanf(in, "%[^\n]%*c", b.title);
        n += fscanf(in, "%[^\n]%*c", b.author);
        n += fscanf(in, "%d%*c", b.year);

        if(n == 3)
        {
            lib.books[lib.bookNum] = b;
            lib.bookNum++;
        }
    }

    return lib;
}