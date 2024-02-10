#include <stdio.h>

int main (){
    int m, n, i, j, k;
    int mat [15][20];
    int somaPares = 0, somaImpares =0;

    printf ("Digite o tamanho de >M e N<: ");
    scanf ("%d%d", &m, &n);

    
        if (m < 2){
            if (n < 3){
                printf ("Digite Novamente:");
            }
        }

        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                printf ("Digite os numeros: ");
                scanf ("%d", &mat[i][j]);

            }
        }
        printf ("\n\tMATRIZ\n");
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                printf ("%d ", mat[i][j]);
            }
        printf ("\n");
        }       
         for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                if (mat[i][j] % 2 == 0){
                    somaPares += mat[i][j];
                    k++;
                }   
            }
        }
        printf ("\n\tSoma dos Pares: %d\n", somaPares);

        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                if (mat[i][j] % 2 == 1){
                    somaImpares += mat[i][j];
                    k++;
                }   
            }
        }
        printf ("\n\tSoma dos Impares: %d\n", somaImpares);
}