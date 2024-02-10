#include <stdio.h>

int main (){
    int mat [10][10];
    int i, j;


        for (i = 0; i < 10; i++){
            for (j = 0; j< 10; j++){
                mat[i][j] = i == j ? 0 : 1;
                printf ("%d ", mat[i][j]);
           }
        printf ("\n");
        }
}