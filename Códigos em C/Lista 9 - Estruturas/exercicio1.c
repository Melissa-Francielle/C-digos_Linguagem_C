#include <stdio.h>
#define MAX 100
struct loja {
    char nome[MAX];
    char endereco[MAX];
    char telefone[15];
    float precoProduto;
    int quantidade;
};
void lojaCadastro(struct loja *produtos, int tam){
    int i;

        for (i = 0; i < tam; i++){
            printf ("\n");
            printf ("Escreva o nome da loja: ");
            fgets (produtos[i].nome, MAX, stdin);
            printf ("\nEscreva o endereco da loja: \n");
            fgets (produtos[i].endereco, MAX, stdin);
            printf ("\nDigite o telefone da loja: \n");
            fgets ( produtos[i].telefone, 15, stdin);
            printf ("\nDigite o preco dos produtos: \n");
            scanf ("%f", &produtos[i].precoProduto);
            setbuf(stdin, NULL);
            
        }
}
void exibir_dados (struct loja *produtos, int tam){
    int i;
        for (i = 0; i < tam; i++){
            printf("\n__________________________\n");
            printf ("\nNome da loja: %s\n", produtos[i].nome);
            printf ("\nO endereco da loja: %s\n", produtos[i].endereco);
            printf ("\nO telefone da loja: %s\n", produtos[i].telefone);
            printf ("\nPreco dos produtos: %.2f\n", produtos[i].precoProduto);
            printf("\n____________________\n");
            
        }
}

float mediaGeral (struct loja *produtos, int tam){
    float soma = 0;
        for (int i = 0; i < tam; i++){
            soma += produtos[i].precoProduto;
        }
    return soma / tam;
}
void exibe_menor_preco (struct loja *produtos, int tam){
    float menor =0;
    int aux=0;
        for (int i = 0; i < tam; i++){
            if (produtos[i].precoProduto < menor){
                menor = produtos[i].precoProduto;
                aux = i;
            }
        }
    printf ("\nA loja com menor preco: %s\n", produtos[aux].nome);
}
int main (){
    struct loja produtos[2];
    int num;

    printf("\n\tCadastro do produtos....\n");
    lojaCadastro(produtos, 2);
    printf("\n\t....Os dados....\n");
    exibir_dados(produtos, 2);

    float resultado = mediaGeral(produtos, 2);
    printf("\nA media geral: %.2f", resultado);

    printf("\nO menor preco");
    exibe_menor_preco(produtos, 2);
}