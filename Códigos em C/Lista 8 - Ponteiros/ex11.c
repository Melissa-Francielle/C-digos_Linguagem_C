//Faça um programa que receba o preço de 30 produtos de
//catálogo e armazene em um array. Depois, atualize o preço de
//todos os produtos concedendo um reajuste de 8% e mostre na tela

#include <stdio.h>
#define MAX 4

int main (){
    float catalago[MAX];
    int i;
    float *p;
    p = catalago;

        for (i =0; i< MAX; i++){
            printf ("digite os valores: ");
            scanf ("%f", &p[i]);
        }

        for (i =0; i < MAX; i++){
            p = &catalago;
            *p = *p * 0.8;
        printf ("Os precos reajustados: %.2f\n", *p);
        }

}
