#include <stdio.h>
#define MAX 100
void leMatriz (int mat [MAX][MAX] , int m , int n) {
   int i , j ;
       for(i =0; i < m; i ++) {
           for ( j =0; j < n; j ++) {
               printf ("\nEntre com o elemento [%d %d]: ", i , j);
                   scanf ("%d", & mat[i][j]);
            }
        }
}
int multiplicar (int mat[MAX][MAX], int m, int n, int k){
    int i, j;
        for (i = 0; i < m; i++){
            for (j = 0; j <n; j++){
               if (i == n - 1 - j){
                    k *= mat[i][j];
               }
            }
        }
    return k;
}
void matriz (int mat[][MAX], int m, int n){
    int i, j;
        for (i = 0; i < m; i++){
            for (j =0; j < n; j++){
                printf ("%d ", mat[i][j]);
            }
            printf ("\n");
        }
}
 int main (){
    int mat[MAX][MAX];
    int k, m, n;

    printf ("Preencha com o mesmo valores de linhas e colunas: ");
    scanf ("%d%d", &m, &n);
    if (m < 2 || n < 2){
        printf ("Digite novamente um valor acima de 2, ou, 2");
    } 

    printf ("\n\tPreenchendo a matriz: \n");
    leMatriz (mat, m, n);

    printf ("Digite o valor de k:");
    scanf ("%d", &k);

    int resultado = multiplicar(mat, m, n, k);
    printf ("Resultado = %d\n", resultado);

    printf ("\n\tMATRIZ\n");
    matriz (mat, m, n);

}

