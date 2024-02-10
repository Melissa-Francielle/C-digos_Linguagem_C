#include <stdio.h>

int main (){
    int n, i;
    printf ("entre com a quantidade de vetores: ");
    scanf ("%d", &n);

    int vet[n];
        for (i = 0; i < n; i++){
            printf ("\nEntre com os numeros: ");
            scanf ("%d", &vet[i]);

        }
        for (i = n-1; i >= 0; i--){
            printf ("%d", vet[i]);
        }
}