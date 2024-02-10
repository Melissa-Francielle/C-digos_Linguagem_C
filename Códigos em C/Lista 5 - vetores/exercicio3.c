#include <stdio.h>

int main (){
    int n, i;
    int count = 0, troca;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    int vet[n];
        for (i = 0; i < n; i++){
            printf ("\nEntre com os numeros reais %d: ", i);
            scanf ("%d", &vet[i]);
        }
        do{
            troca = 0;
            count++;
                for (i = 0; i < n; i++){
                    if (vet [i]> vet [i+1]){
                        int copia = vet [i];
                        vet [i] = vet [i+1];
                        vet [i+1] = copia;
                        troca = 1;
                    }
                }
        } while (troca);
        for (i = 0; i < n; i++){
            printf ("%3d", vet[i]);
        }
}