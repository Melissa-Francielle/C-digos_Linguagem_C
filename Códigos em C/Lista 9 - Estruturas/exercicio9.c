#include <stdio.h>
#include <string.h>
#define MAX 2
struct cadastro{
    char nome[30];
    char genero[20];
    char modo[15];
    char plataforma[40];
    int ranking;
};
void cadastro_jogos (struct cadastro *jogos, int tam){
    for (int i = 0; i<tam; i++){
        printf("\nDigite o nome do jogo: \n");
        fgets(jogos[i].nome, 30, stdin);
        printf("\nDigite o genero do jogo: \n");
        fgets(jogos[i].genero, 20, stdin);
        printf("\nDigite o modo do jogo: \n");
        fgets(jogos[i].modo, 15, stdin);
        printf("\nDigite as plataformas que irao roda o jogo: \n");
        fgets(jogos[i].plataforma, 40, stdin);
        printf("\nDigite o ranking do jogo: \n");
        scanf("%d", &jogos[i].ranking);
        setbuf(stdin, NULL);
    }
}
void exibir_jogos(struct cadastro *jogos, int tam){
    for (int i = 0; i<tam; i++){
        printf("\nNome do jogo ---- %s\n", jogos[i].nome);
        printf("\nGenero ---- %s\n", jogos[i].genero);
        printf("\nModo ---- %s\n", jogos[i].modo);
        printf("\nAs plataformas disponiveis ---- %s\n", jogos[i].plataforma);
        printf("\nRanking ---- %d\n", jogos[i].ranking);
    }
}
void exibe_genero (struct cadastro *jogos, int tam){
    char opcao[20];
    printf("\nEscolha uma opcao: \n");
    fgets (opcao, 20, stdin);
        for(int i = 0; i < tam; i++){
            if (stricmp(opcao, jogos[i].genero)==0){
                printf("\nOs jogos ---- %s\n", jogos[i].nome);
            }
        }
}
void exibe_ranking(struct cadastro jogos[], int tam){
    int opcao;
    printf("\nEscolha um ranking de 1 a 5: \n");
    scanf("%d", &opcao);
    setbuf(stdin, NULL);
        for (int i = 0; i < tam; i++){
            if (jogos[i].ranking == 5){
                printf("\nOs jogos ---- %s\n", jogos[i].nome);
            }
        }
}
void favorito (struct cadastro *jogos, int tam){
    char opcao[30];
    printf("\nDigite seu favorito: \n");
    fgets(opcao, 30, stdin);
        for (int i = 0; i < tam; i++){
            if (jogos[i].ranking == 5){
                if (stricmp(opcao, jogos[i].nome)==0){
                    printf("\nEh um dos seus favoritos\n");
                }
            }
            else{
                printf("\nNao eh um dos seus favoritos: \n");
            }
        }
}
int main (){
    struct cadastro jogos[MAX];
    int op;

    printf("\n....Escolha uma opcao....\n");
    printf("\n(1). Cadastro de Jogos\n");
    printf("\n(2). Exibe todos os jogos\n");
    printf("\n(3). Exibe por genero\n");
    printf("\n(4). Exibe por ranking\n");
    printf("\n(5). Exibe os favoritos\n");
    printf("\n(0). Sair\n");
    scanf("%d", &op);
    setbuf(stdin, NULL);
    do {
        switch (op){
            case 1: cadastro_jogos(jogos, MAX);
            break;
            case 2: exibir_jogos(jogos, MAX);
            break;
            case 3: exibe_genero(jogos, MAX);
            break;
            case 4: exibe_ranking(jogos, MAX);
            break;
            case 5: favorito(jogos, MAX);
            break;
            case 0:
            break;
        }
    }while (op != 0);
}