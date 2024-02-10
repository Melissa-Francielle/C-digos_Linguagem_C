#include <stdio.h>

int main (){
    int mat [5][3];
    int i, j;
        for (i = 0; i < 5; i++){
            for (j = 0; j < 3; j++){
                printf ("Digite os numeros: ");
                scanf ("%d", &mat[i][j]);
            }
        }
        for (i = 0; i < 5; i++){
            for (j = 0; j < 3; j++){
                printf ("%d ", mat[i][j]);
            }
        printf ("\n");
        }
        for (i = 0; i < 5; i++){
            for (j = 0; j < 3; j++){
                 if ( mat[i][j] % 7 == 0){
                    printf ("%d ", mat[i][j]);
                }
            }
        }
}