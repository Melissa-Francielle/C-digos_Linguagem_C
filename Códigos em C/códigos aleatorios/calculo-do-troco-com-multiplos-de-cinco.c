#include <stdio.h>

int main (){
    int dinheiro, troco;

    printf ("digite um valor multiplo de cinco: ");
    scanf ("%d", &dinheiro);

        troco = dinheiro %7;

        printf ("o troco do cliente: %d", troco);
        
}