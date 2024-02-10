#include <stdio.h>

int main () {
    float valorGasto;
    int valorTotal, resultado;
        printf ("digite um valor gasto:");
        scanf ("%f", &valorGasto);

    valorTotal = valorGasto * 10;
    resultado = valorTotal + valorGasto;

        printf ("valorTotal: %d\n", valorTotal);
        printf ("resultado: %d\n", resultado);
        return 0;
}