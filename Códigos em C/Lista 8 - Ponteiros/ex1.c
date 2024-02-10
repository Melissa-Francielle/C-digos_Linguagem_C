//Implemente uma função que receba um vetor de números int
//e retorne quantos numeros negativos há no vetor. A função 
//deve obedecer ao protótipo a seguir:

#include <stdio.h>
#define MAX 100

int negativos (int *vet, int tam){
    int contador = 0; 
    int i;
        for (int i = 0; i < tam; i++){
            printf("Digite os numeros: ");
            scanf ("%d", &vet[i]);
        }
        for (i = 0; i < tam; i++){
            if(*(vet+i) < 0){
                
                contador++;

            }
        }
    return contador;
}
int main (){
    int vet[MAX], tam;

    printf ("Digite o tamanho: ");
    scanf ("%d", &tam);

       printf ("%d", negativos(vet, tam));
}