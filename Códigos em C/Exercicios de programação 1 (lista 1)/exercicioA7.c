#include <stdio.h>

int main () {
    int a, b, c;
    int resultado;
    printf ("digite um valor1: ");
    scanf ("%d", &a);

    printf ("digite um valor2: ");
    scanf ("%d", &b);

    printf ("digite um valor3: ");
    scanf ("%d", &c);
    resultado = (a*b) / c;

    printf ("resultado = %d", resultado);
    return 0;
}