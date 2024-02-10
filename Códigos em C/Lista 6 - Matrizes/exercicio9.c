#include <stdio.h>

int main (){
    int mat[5][3];
    int i, j, soma;
    int somaLinhas[5];

        for (i = 0; i < 5; i++){
            for (j = 0; j < 3; j++){
                printf ("entre com os valores: ");
                scanf ("%d", &mat[i][j]);

            }
        }
        printf("\n\tA matriz: \n");
        for (i = 0; i < 5; i++){
            for (j = 0; j < 3; j++){
                printf ("%d ", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n\tA soma das linhas: \n");
        for (i = 0; i < 5; i++){
            soma = 0;
            for (j = 0; j < 3; j++){
                soma += mat[i][j];
            }
            somaLinhas[i] = soma;
        }
        for (i = 0; i < 5; i++){
            printf ("Soma da linha %d: %d\n", i, somaLinhas[i]);
        }
    return 0;
}