#include <stdio.h>

int main (){
    int i = 1, numeros;
    float media, soma =0;
    printf ("entre com 5 numeros: \n");
    scanf ("%d", &numeros);
        
        while (i <= 5){
            soma += numeros;
            i++;
        }
    media = soma /5;
    printf ("A media = %f\n", media);
}