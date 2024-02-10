#include <stdio.h>
#include <stdlib.h>

int maior_elemento (int *vet, int tam, int ind){
    if (tam == 0){
        return vet[ind];
    }
    else {
        if (vet[tam-1] > vet[ind]){
            return maior_elemento (vet, tam-1, tam -1);
        }
        else {
            return maior_elemento (vet, tam-1, ind);
        }
    }
}
int main (){
    int n, i;

    printf ("entre com a quantidade de vetores: ");
    scanf ("%d", &n);

    int vet[n];
        for (i = 0; i < n; i++){
            printf ("\nEntre com os numeros: ");
            scanf ("%d", &vet[i]);
        }


        printf("maior = %d\n", maior_elemento(vet, n, 0));

}