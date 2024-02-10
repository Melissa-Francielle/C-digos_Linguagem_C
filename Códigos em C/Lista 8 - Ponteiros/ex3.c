//Implemente uma funcao que receba um vetor de inteiros, o tam
//do vetor e um inteiro pos passado por referencia. A funcao
//retorna o maior elemento do vetor e, na variavel pos, a posicao do maior
//elemento do vetor. 

#include <stdio.h>
#define MAX 100

int funcao (int *vet, int tam, int *pos){
    int i;
    int maior = 0;
    printf ("Digite o tamanho: ");
    scanf ("%d", &tam);

        for (i = 0; i < tam; i++){
            printf ("Digite os numeros %d: ", i);
            scanf ("%d", &vet[i]);
        }
        for (i = 0; i< tam; i++){
            if (*(vet+i) > maior){
                maior = *(vet+i);
            }
        }
    
        for (i = 0; i < tam; i++){
            if (maior == *(vet+i)){
                *pos = i;
                printf ("O elemento %d esta na posicao %d\n", maior, *pos);
            }
        }
    return maior; 
}

int main (){
    int vet [MAX], tam;
    int *pos;

    printf ("\nO maior elemento: %d", funcao(vet, tam, pos));
}