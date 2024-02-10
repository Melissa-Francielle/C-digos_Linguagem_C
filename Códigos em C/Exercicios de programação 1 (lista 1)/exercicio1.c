#include <stdio.h>

int main () {
    int numero;
    int antecessor, sucessor;
    printf ("digite um numero:");
    scanf ("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;

    printf ("%d%d", antecessor, sucessor);

    return 0;
}