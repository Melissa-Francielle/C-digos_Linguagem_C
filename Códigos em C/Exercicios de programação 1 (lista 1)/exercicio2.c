#include <stdio.h>

int main () {
    int dinheiro, troco;
    printf ("digite um quantia de dinheiro:");
    scanf ("%d", &dinheiro);
    troco = dinheiro%7;
    printf ("troco: %d\n", troco);
    
    return 0;
}