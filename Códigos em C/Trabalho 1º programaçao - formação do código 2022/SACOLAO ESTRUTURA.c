#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 255
struct fruta {
    char fruta[MAX];
    float preco;
};
void itens (struct fruta *f, int T){
    int i;
        for ( i = 0; i < T; i++){
            printf("\nDigite o nome da fruta %i: ", i + 1);
            fgets(f[i].fruta, MAX, stdin);
            printf("\nDigite o preco da fruta %i: ", i + 1);
            scanf("%f", &f[i].preco);
            setbuf(stdin, NULL);
        }
}
void menu (struct fruta *f, int T){
    int i;
        for ( i = 0; i < T; i++){
            printf("%s\t\tcodigo %i\t\tR$ %.2f\n", f[i].fruta, i, f[i].preco);
        }
}
float total (struct fruta *f, int auxiliar, int quantidade){
    float soma = 0;
        do {
            printf ("\n\tEscolha os codigos das frutas que gostaria de comprar ou digite -1  para encerrar o programa:\n");
            scanf ("%i", &auxiliar);
                if (auxiliar != -1){
                    printf("\n\t Digite a quantidade: ") ;
                    scanf("%i", &quantidade );
                    setbuf(stdin, NULL);
                        soma += f[auxiliar].preco * quantidade;
                }
        }while (auxiliar != -1);

    return soma;
}
int main(){
    struct fruta *f;
    int T, auxiliar, quantidade;


    printf("Digite o total de itens: ");
    scanf("%i", &T);
    setbuf(stdin, NULL);

    f = (struct fruta *) malloc (T * sizeof(struct fruta));
        if ( f == NULL){
            printf("\nERRO!\n");
            exit(1);
        }

    itens (f, T);

    printf("\n\t\t MENU: \n");
    menu (f, T);

    float totalSoma = total (f, auxiliar, quantidade);
    printf ("\n\tO total da compra deu = %.2f", totalSoma);
    return 0;
}
