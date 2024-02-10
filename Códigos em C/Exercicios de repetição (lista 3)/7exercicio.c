#include <stdio.h>

int main (){
    int n, produto;
    printf ("Entre com um numero inteiro positivo ou para encerra: ");
    scanf ("%d", &n);

        produto = n;
        while (n > 0){
            if (n % 2 == 0){
                produto *= n;
            printf ("entre com um numero inteiro positivo ou para encerrar: ");
            scanf ("%d", &n);

            }
        }
        printf ("Produto: %d\n", produto);
    return 0;
}