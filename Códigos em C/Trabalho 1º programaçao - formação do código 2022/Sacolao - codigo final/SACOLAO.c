#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 255
void itens (char fruta[][MAX], float preco[], int T){
    int i;
        for ( i = 0; i < T; i++){
            printf("\nDigite o nome da fruta %i: ", i + 1);
            scanf("%s", fruta[i]);
            printf("\nDigite o preco da fruta %i: ", i + 1);
            scanf("%f", &preco[i]);
        }
}
void menu (char fruta[][MAX], float preco[], int T){
    int i;
        for ( i = 0; i < T; i++){
            printf("%s\t\tcodigo %i\t\tR$ %.2f\n", fruta[i], i, preco[i]);
        }
}
float total (int auxiliar, float preco[], int quantidade){
    float soma = 0;
        do {
            printf ("\n\tEscolha os codigos das frutas que gostaria de comprar ou digite -1  para encerrar o programa:\n");
            scanf ("%i", &auxiliar);   
                if (auxiliar != -1){
                    printf("\n\t Digite a quantidade: ") ;
                    scanf("%i", &quantidade );
                        soma += preco[auxiliar] * quantidade;
                }
        }while (auxiliar != -1);

    return soma;
}
int main(){
    int T, i = 0, auxiliar, quantidade;
    float soma =0;

    printf("Digite o total de itens: ");
    scanf("%i", &T);
    float preco[T];
    char fruta[MAX][MAX];

    itens (fruta, preco, T);

    printf("\n\t\t MENU: \n");
    menu (fruta, preco, T);
    
    float totalSoma = total (auxiliar, preco, quantidade);
    printf ("\n\tO total da compra deu = %.2f", totalSoma);
    return 0;
}