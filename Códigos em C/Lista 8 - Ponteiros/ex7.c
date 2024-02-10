//Faca um programa que leia uma matriz quadrada de ordem 4x4 de 
//numero inteiros. Depois, leia um numero x e verifique quantas
//vezes x aparece na matriz

#include<stdio.h>
#define MAX 4

int main (){
    int matriz[MAX][MAX];
    int x, i, j;
    int count =0;

        for(i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
                printf ("digite os valores dessa matriz: ");
                scanf ("%d", &matriz[i][j]);
            }
        }
        for (i = 0; i < 4; i++){
            for (j =0; j < 4; j++){
                printf ("%d ", matriz[i][j]);
            }
            printf ("\n");
        }
    int *numX = &x;

    printf ("digite o numero que voce quer procurar: ");
    scanf ("%d", numX);
        for (i = 0; i < 4; i++){
            for (j = 0; j <4; j++){
               if (*numX == matriz[i][j]){
                    count++;
               }
            }
        }
        printf ("O numero %d aparece: %d vezes", *numX, count);
}
