#include <stdio.h>

int main () {
    int a, b, c;
    int resultado;
        printf ("digite um valor a, b, c: ");
        scanf ("%d%d%d", &a, &b, &c);

        resultado = (a*b*c) * (a*b*c) * (a*b*c) / 2;
        
        printf ("resultado: %d\n", resultado);
        return 0;
}