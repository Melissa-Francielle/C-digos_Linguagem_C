#include <stdio.h>

int main (){
    float dolar, reais;
     printf("digite o valor em dolares:");
     scanf ("%f", &dolar);

    reais = dolar*4.87;
    printf("conversao em reais: %.2f", reais);

}