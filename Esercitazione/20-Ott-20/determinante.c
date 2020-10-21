#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 50

int main()
{
    int i, j, dim, subdim, ok = 0, err = 0;
    float mat[MAX][MAX], det, par, col[MAX], matB[MAX][MAX];
    char sel;
    
    system("clear");

    do
    {
        printf("Inserisci la dimensione della matrice: ");
        scanf("%d", &dim);
    } while(dim < 0 || dim > MAX);

    do
    {
        printf("\nInserisci gli elementi della matrice:\n");

        for(i = 0; i < dim; i++)
            for(j = 0; j < dim; j++)
            {
                printf("\nElemento (%d, %d): ", i + 1, j + 1);
                scanf("%f", &mat[i][j]);
            }

        do
        {
            printf("\n\nHai inserito la matrice:\n\n");

            for(i = 0; i < dim; i++)
            {
                for(j = 0; j < dim; j++)
                {
                    printf("%.2f\t", mat[i][j]);
                }
                printf("\n");
            }

            printf("\n\nÈ corretta? (y/n): ");
            scanf("%*c%c", &sel);

            switch(sel)
            {
                case 'y':
                    ok = 1;
                    err = 0;
                    break;
                case 'n':
                    ok = 0;
                    err = 0;
                    break;
                default:
                    printf("\nHai digitato un carattere non valido. Riprova.");
                    ok = 0;
                    err = 1;
            }
        } while(err);
    } while(!ok);

    do
    {
        if(dim == 1) {
            det = mat[0][0];
        } else if(dim == 2) {
            det = mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1];
        } else if(dim == 3) {
            par = (mat[0][0] * mat[1][1] * mat[2][2]) + (mat[0][1] * mat[1][2] * mat[2][0]) + (mat[0][2] * mat[1][0] * mat[2][1]);
            det = par - ((mat[0][2] * mat[1][1] * mat[2][0]) + (mat[0][0] * mat[1][2] * mat[2][1]) + (mat[0][1] * mat[1][0] * mat[2][2]));
        } else {
            //! Da completare

            subdim = dim;

            for(i = 0; i < dim; i++)
            {
                col[i] = mat[i][0];
            }

            subdim--;
        
            for(i = 0; i < subdim; i++)
            {
                for(j = 0; j < subdim; j++)
                {
                    if(i + 1 < dim && j + 1 < dim)
                        mat[i][j] = mat[i + 1][j + 1];
                }
            }

            if(dim == 2) {
                for(i = 0; i < dim; i++)
                    det = det + col[i] * (mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1]);
            } else if(dim == 3) {
                for(i = 0; i < dim; i++)
                {
                    par = (mat[0][0] * mat[1][1] * mat[2][2]) + (mat[0][1] * mat[1][2] * mat[2][0]) + (mat[0][2] * mat[1][0] * mat[2][1]);
                    det = det + col[i] * (par - ((mat[0][2] * mat[1][1] * mat[2][0]) + (mat[0][0] * mat[1][2] * mat[2][1]) + (mat[0][1] * mat[1][0] * mat[2][2])));
                }
            }

        }
    } while(dim > 3);

    printf("\n\nIl determinante della matrice è %.3f\n", det);
    
    return 0;
}