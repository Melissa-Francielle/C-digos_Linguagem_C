//Implemente uma funcao achar() que receba um vetor 
//de inteiros e mostra o maior e o menor elemento. Nao imprima
//os valores na funcao achar() e sim na main().

#include<stdio.h>
#define MAX 100

void maiorMenor (int *vet, int tam, int *maior, int *menor){
    int i;
    *menor = *vet;
    *maior = *vet;
        for (i = 1; i < tam; i++){
            if (*menor > *(vet+i)){
                *menor = *(vet+i);
            }
            if (*maior < *(vet+i)){
                *maior = *(vet+i);
            }
        }
}
int main (){
    int menor, maior, vet[MAX], tam, i;

     printf ("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
        for (i = 0; i < tam; i++){
            printf ("Os valores dentro desse vetor %d: ", i);
            scanf ("%d", &vet[i]);
        }
    maiorMenor(vet, tam, &maior, &menor);
    printf ("Maior %d\nMenor %d", maior, menor);
    return 0;
}