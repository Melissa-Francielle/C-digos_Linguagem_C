#include <stdio.h>

int main (){
    float notas, media, soma;
    int i = 0;
    soma = 0;

        while(i <= 3){
            printf ("digite a %d notas: ", i);
            scanf ("%f\n", &notas);
            soma += notas;
            media = soma/3;
        i++;
        }
    printf ("A media das notas: %.2f\n", media);
}