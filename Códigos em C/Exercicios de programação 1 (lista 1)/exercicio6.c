#include <stdio.h>

int main () {
    int km, lt;
    int resultado;
    printf ("digite uma distancia:");
    scanf ("%d", &km);

    printf ("digite um total de combustivel:");
    scanf ("%d", &lt);

    resultado = km / lt;
    printf ("resultado: %d\n", resultado);

    return 0;
}