// questaõ 5 - faça um programa que receba 2 numeros inteiros quaisquer
// representados por x e y e mostre, em ordem crescente, todos os numeros
// entre x e y cujo resto da divisão deles por 5
// for igual a 2 ou igual a 3

#include <stdio.h>

int main (){
    int x, y, aux, i;

        scanf ("%d%d", &x, &y);
        if (x > y){
            aux = x;
            x = y;
            y = aux;
        }
        for (i = x+1; i < y; i++){
            if (i % 5 == 2){
            printf ("Resto = 2 -> %d\n", i);
            }
            else if(i % 5 == 3){
                printf ("Resto = 3 -> %d\n", i);
            }
        }
    return 0;
}