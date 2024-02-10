#include <stdio.h>

int main () {
    int a, b, c;
    int resultado;
        printf ("digite um valor a: ");
        scanf ("%d", &a);

        printf ("digite um valor b: ");
        scanf ("%d", &b);

        printf ("digite um valor c: ");
        scanf ("%d", &c);
        resultado = a * b * c + b + c / 3 * 5 - 1;

        printf ("resultado: %d", resultado);
        return 0;
}