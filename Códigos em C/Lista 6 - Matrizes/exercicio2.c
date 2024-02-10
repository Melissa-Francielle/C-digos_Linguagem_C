#include <stdio.h>
void leMatriz (int mat [][5], int m, int n){
    int i, j;
    for (i = 0; i < m; i++){
        for (j =0; j < n; j++){
            printf ("Digite os valores: ");
            scanf ("%d", &mat[i][j]);
            }
        }
}
int maiorElemento (int mat [][5], int m, int n){
    int maior = mat [0][0];
    int i, j;
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                if (maior < mat [i][j]){
                    maior = mat[i][j];
                }
            }
        }
    return maior;
}

int main (){
    int mat [4][5];
    int i, j;    
    
    leMatriz(mat, 4, 5);
    int resultado = maiorElemento (mat, 4, 5);
    printf ("%d ", resultado);
}