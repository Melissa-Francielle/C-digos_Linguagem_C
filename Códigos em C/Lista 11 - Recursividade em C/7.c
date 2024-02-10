#include <stdio.h>
#include <stdlib.h>

int soma(int x[], int tam){
    if (tam == 0){
        return 0;
    }
    else {
        return x[tam-1] + soma(x, tam-1);
        }
}
int main (){
    int tam;
    printf("Digite o tamanho desse ARRAY: ");
    scanf("%d", &tam);

    int x[tam];

        for (int i =0; i < tam; i++){
            printf("Digite os valores desse array: ");
            scanf("%d", &x[i]);
        }

    printf("Resultado: %d\n", soma(x, tam));    
}
