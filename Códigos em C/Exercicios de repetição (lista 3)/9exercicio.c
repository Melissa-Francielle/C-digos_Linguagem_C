// questão 9 - faça um programa que receba uma quantidade de numeros 
// inteiros, em seguida calcule e mostre a sua media. 

#include <stdio.h>

int main (){
    int numeroAtual, qttNumeros, total;
    float media;
    total = 0;
    qttNumeros = 0;

        do {
            printf ("\nInsira um numero: ");
            scanf ("%d", &numeroAtual);

            total += numeroAtual;
            qttNumeros++;
        } while (qttNumeros < numeroAtual);

       media = total / qttNumeros;

        printf ("\ntotal de numeros informado eh: %d ", qttNumeros);
        printf ("media = %.2f", media);

    return 0;
}