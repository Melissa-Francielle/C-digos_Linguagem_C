#include <stdio.h>
#define MAX 100
int buscaElemento (int mat[MAX][MAX], int m, int n){
    int i, j, elemento;
        for (i = 0; i < m; i++){
            for (j =0; j< n; j++){
                if (mat[i][j] == elemento){
                    return 1;
                }
                else {
                    return 0;
                }
            }
        }
}
void matriz (int mat[MAX][MAX], int m, int n){
    int i, j;
        for (i = 0; i <m; i++){
            for (j = 0; j < n; j++){
                printf ("%d ", mat[i][j]);
            }
         printf ("\n");
        }
}
int main (){
    int elemento, i, j, m, n;
    int mat[MAX][MAX];

    printf ("Digite o numero de >colunas< e de >linhas<: ");
    scanf ("%d%d", &m, &n);

     for (i = 0; i < m ; i++){
            for (j = 0; j < n ;j++){
                printf ("Digite os numeros que preenchem essa matriz: ");
                scanf ("%d", &mat[i][j]);
            }
        }

    printf ("Digite o elemento a ser encontrado: ");
    scanf ("%d", &elemento);

    printf("\t\nMATRIZ ORIGINAL\n");
    matriz (mat, m, n);


    int buscando = buscaElemento( mat, m, n);
        if (buscando == 1){
        printf ("Elemento encontrado!");
        }
        else {
            printf ("Elemento nao encontrado");
        }
}
