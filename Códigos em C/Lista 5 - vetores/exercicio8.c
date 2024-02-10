#include <stdio.h>
#define TAM 20
int main (){
    int i, vet[TAM], copia;
    int fim = 19;

        for (i = 0; i < TAM; i++){
            printf ("Digite %d: ", i);
            scanf ("%d", &vet[i]);
        }
        
        printf ("\nVetor Original: ");
        for (i = 0; i < TAM; i++){
            printf ("%2d ", vet[i]);
        }
        
        for (i = 0; i < 10; i++){
            copia = vet[i];
            vet[i] = vet [fim];
            vet[fim] = copia;
            fim--;
        }
        printf ("\nVetor Modificado: ");
        for (i = 0; i < TAM; i++){
            printf ("%2d ", vet[i]);
        }
    return 0;
}
