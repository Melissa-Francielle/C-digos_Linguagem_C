#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 255
int main(){
    int T, i = 0, auxiliar, quantidade;
    float soma =0;

    printf("Digite o total de itens: ");
    scanf("%i", &T);
    float preco[T];
    char fruta[MAX][MAX];
    
    for ( i = 0; i < T; i++){
        printf("\nDigite o nome da fruta %i: ", i + 1);
        scanf("%s", fruta[i]);
        printf("\nDigite o preco da fruta %i: ", i + 1);
        scanf("%f", &preco[i]);
    }
    printf("\n\t\t MENU: \n");
    for ( i = 0; i < T; i++){
        printf("%s \t\t codigo %i \t\t R$ %.2f\n", fruta[i], i, preco[i]);
    }
    do {
    printf ("\n\tEscolha os codigos das frutas que gostaria de comprar ou digite -1  para encerrar o programa:\n");
    scanf ("%i", &auxiliar);   
    
        if (auxiliar != -1)
        {
            printf("\n\t Digite a quantidade: ") ;
            scanf("%i", &quantidade );
                soma += preco[auxiliar] * quantidade;
        }
    }while (auxiliar != -1);

    printf ("\n\ttotal = %.2f", soma);
    return 0;
}
