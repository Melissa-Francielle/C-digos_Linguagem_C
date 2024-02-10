#include <stdio.h>

int main (){
    int mat [5][5];
    int i, j, soma = 0;
    float media;

        for (i =0; i < 5; i++){
            for (j = 0; j < 5; j++){
                printf ("Entre com os valores: ");
                scanf ("%d", &mat[i][j]);
            }
        }
        for (i =0; i < 5; i++){
            for (j = 0; j < 5; j++){
                printf ("%d ", mat[i][j]);
                
            }
        printf ("\n");
        }

       for (i =0; i < 5; i++){
            for (j = 0; j < 5; j++){
               if (i == j){
                soma += mat [i][j];
               } 
            }
       }
       media = soma / 5;
    printf ("A media dos elementos da diagonal principal: %f", media);
}