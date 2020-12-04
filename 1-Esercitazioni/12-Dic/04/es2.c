#include <stdio.h>
#include <string.h>

#define STR_LEN 30

void generate_output(FILE *in, FILE *out);

int main()
{
        char file_name[STR_LEN];
        FILE *input;
        printf("Inserire il nome del file\n");
        scanf("%s", file_name);
        //scanf ("%[^\n]%*c", variable); funziona ma vi prende anche gli spazi (nel caso ci siano)
        input = fopen(file_name, "r");

        if(input == NULL) {
                printf("Impossibile aprire il file\n");
        } else {
                FILE *output;
                output = fopen("output.txt", "w");
                printf("File aperto, genero il file di output\n");
                generate_output(input, output);
                printf("Generazione output conclusa, chiudo i file\n");
                fclose(input);
                fclose(output);
        }

        return 0;
}


void generate_output(FILE *in, FILE *out)
{
    int val;
    while(fscanf(in, "%d", &val) == 1) {
        int i;
        if(val<0){
            for(i=val;i<0;i++){
                fprintf(out,"-");
           }
        }
        if(val>0){
            for(i=0; i<val; i++){
                fprintf(out, "+");
			}
        }
    }
}