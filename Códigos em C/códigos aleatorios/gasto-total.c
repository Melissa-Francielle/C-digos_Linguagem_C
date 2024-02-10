#include <stdio.h>

int main (){
    float valorGasto, valorTotal;

    printf ("Digite o valorGasto: ");
    scanf ("%f", &valorGasto);

        valorTotal = valorGasto + (valorGasto * 0.10);

        printf ("valor total: %f\n", valorTotal);
}