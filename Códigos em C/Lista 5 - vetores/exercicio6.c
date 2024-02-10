#include <stdio.h>
#define TAM 21
 
int main (){
    int vet[TAM];
    int i, count=0;

    for (i = 0; i < TAM; i++){
        printf("Entre com os valores %d: ", i);
        scanf ("%d", &vet[i]);
    }
    
    count = 1;
    for(i=1; i<TAM; i++){
        if(vet[i] == vet[TAM-1]){ 
            count++;
        }
        else {
            count = 1;
        }
    }
    printf("O numero %d aparece %d vezes!\n", vet[TAM-1], count);
    
    for (i = 0; i < TAM; i++){
        if (vet [i] == vet[TAM-1]){
            printf ("\nO elemento %d se encontra na posicao %d", vet[TAM-1], i);
        }
        else {
            count = count + 1;
        }
    }
    return 0;

}