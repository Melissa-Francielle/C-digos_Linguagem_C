#include <stdio.h>
int vetorMaior (int n, int vet[]){
    int numeroMaior = vet[0];
        for (int i = 0; i < n; i++){
            if (vet[i] > numeroMaior){
                numeroMaior = vet[i];
            }
        }
    return numeroMaior;
}
int main (){
    int n, i;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    int vet[n];

        for (i = 0; i<n; i++){
            printf ("entre com os numeros %d: ", i);
            scanf ("%d", &vet[i]);
        }
    int maior = vetorMaior (n, vet);
    printf ("\nO maior: %d\n", maior);
}