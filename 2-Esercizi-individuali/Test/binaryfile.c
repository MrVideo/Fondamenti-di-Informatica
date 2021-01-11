#include <stdio.h>
#include <stdlib.h>

struct s {
    int n;
    char c;
};

int main()
{
    FILE *out = fopen("test.bin", "wb");
    struct s mystruct[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        mystruct[i].n = i;
        mystruct[i].c = i + 49;
    }

    fwrite(&mystruct[0], sizeof(struct s), 10, out);

    printf("Dimensione struct: %ld byte\n", sizeof(struct s));
    

    fclose(out);

    out = fopen("test.bin", "rb");

    fread(&mystruct[0], sizeof(struct s), 10, out);

    for(i = 0; i < 10; i++)
        printf("Record %d: n = %d, m = %c\n", i + 1, mystruct[i].n, mystruct[i].c);

    fclose(out);

    return 0;
}
