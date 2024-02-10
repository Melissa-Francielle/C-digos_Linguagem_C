#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Game {
    int codigo;
    char nome[MAX];
    char plataforma[MAX];
    char tipo[MAX];
    float preco;
    int classificacao_publico;
    int ano;
    char fabricante[MAX];
    int classificacao_jogo;
};

void exibir_game(struct Game game) {
    printf("Codigo: %d\n", game.codigo);
    printf("Nome: %s\n", game.nome);
    printf("Plataforma: %s\n", game.plataforma);
    printf("Tipo: %s\n", game.tipo);
    printf("Preço: %.2f\n", game.preco);
    printf("Classificacao do publico: %d\n", game.classificacao_publico);
    printf("Ano: %d\n", game.ano);
    printf("Fabricante: %s\n", game.fabricante);
    printf("Classificacao: %d\n", game.classificacao_jogo);
}



void CadastrarGame(struct Game game){
    FILE *fp;
    fp = fopen("games.dat", "ab");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo de jogos!\n");
        return;
    }
    int n;
    printf("Digite o numero de jogos a serem cadastrados: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        printf("Digite o codigo do jogo: ");
        scanf("%d", &game.codigo);
        setbuf(stdin, NULL);
        printf("Digite o nome do jogo: ");
        fgets(game.nome, MAX, stdin);
        setbuf(stdin, NULL);
        printf("Digite a plataforma do jogo: ");
        fgets(game.plataforma, MAX, stdin);
        setbuf(stdin, NULL);
        printf("Digite o tipo do jogo: ");
        fgets(game.tipo, MAX, stdin);
        setbuf(stdin, NULL);
        printf("Digite o preco do jogo: ");
        scanf("%f", &game.preco);
        setbuf(stdin, NULL);
        printf("Digite a classificacao do publico do jogo: ");
        scanf("%d", &game.classificacao_publico);
        setbuf(stdin, NULL);
        printf("Digite o ano de lançamento do jogo: ");
        scanf("%d", &game.ano);
        setbuf(stdin, NULL);
        printf("Digite o fabricante do jogo: ");
        fgets(game.fabricante, MAX, stdin);
        setbuf(stdin, NULL);
        printf("Digite a classificacao do jogo: ");
        scanf("%d", &game.classificacao_jogo);
        setbuf(stdin, NULL);

        fwrite(&game, sizeof(struct Game), 1, fp);
        printf("Registro de jogo adicionado com sucesso.\n");
        }
    fclose(fp);
}

void ConsultarGame(struct Game game){
    int codigo;
    printf("Informe o codigo do jogo: ");
    scanf("%d", &codigo);

    // Abrindo o arquivo do jogo para leitura
    FILE *fp = fopen("games.dat", "rb");
    if (fp == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return;
    }


    int encontrado = 0;

    // Busca o registro do jogo com o código correspondente
    while (fread(&game, sizeof(struct Game), 1, fp) == 1) {
        if (game.codigo == codigo) {
            exibir_game(game);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Jogo nao encontrado.\n");
    }

    fclose(fp);
}


void atualizarGame(struct Game game){
    int codigo;
    printf("Informe o codigo do jogo: ");
    scanf("%d", &codigo);
    setbuf(stdin, NULL);

    //abrindo o arquivo para atualizar
    FILE *fp = fopen("games.dat", "rb+");
    if (fp == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return;
    }

    //Procurar o registro do jogo com o código correspondente
    while (fread(&game, sizeof(struct Game), 1, fp) == 1) {
        if (game.codigo == codigo) {
            struct Game Novogame; // cria um novo registro para armazenar os dados atualizados
            Novogame.codigo = codigo;
            printf("Digite o nome do jogo: ");
            fgets(Novogame.nome, MAX, stdin);
            setbuf(stdin, NULL);
            printf("Digite a plataforma do jogo: ");
            fgets(Novogame.plataforma, MAX, stdin);
            setbuf(stdin, NULL);
            printf("Digite o tipo do jogo: ");
            fgets(Novogame.tipo, MAX, stdin);
            setbuf(stdin, NULL);
            printf("Digite o preco do jogo: ");
            scanf("%f", &Novogame.preco);
            setbuf(stdin, NULL);
            printf("Digite a classificacao do publico do jogo: ");
            scanf("%d", &Novogame.classificacao_publico);
            setbuf(stdin, NULL);
            printf("Digite o ano de lancamento do jogo: ");
            scanf("%d", &Novogame.ano);
            setbuf(stdin, NULL);
            printf("Digite o fabricante do jogo: ");
            fgets(Novogame.fabricante, MAX, stdin);
            setbuf(stdin, NULL);
            printf("Digite a classificacao do jogo: ");
            scanf("%d", &Novogame.classificacao_jogo);
            setbuf(stdin, NULL);

            fseek(fp, -sizeof(struct Game), SEEK_CUR);
            fwrite(&Novogame, sizeof(struct Game), 1, fp);
            printf("Jogo atualizado com sucesso!\n");

            fclose(fp);
            return;
        }
    }

    printf("Jogo nao encontrado!\n");
    fclose(fp);
}


void remover_game(struct Game game) {
    int codigo;
    printf("Informe o codigo do jogo: ");
    scanf("%d", &codigo);
    
    FILE *fp;
    FILE *temp;

    fp = fopen("games.dat", "rb");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo de jogos!\n");
        return;
    }
    temp = fopen("temp.dat", "wb");
    if (temp == NULL) {
        printf("Erro ao abrir o arquivo temporário!\n");
        fclose(fp);
        return;
    }
    
    struct Game temp_game;
    while (fread(&temp_game, sizeof(struct Game), 1, fp) == 1) {
        if (temp_game.codigo != codigo) {
            fwrite(&temp_game, sizeof(struct Game), 1, temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("games.dat");
    rename("temp.dat", "games.dat");
    printf("Jogo removido com sucesso!\n");
}

void exibir(struct Game game) {
    FILE *fp;
    fp = fopen("games.dat", "rb");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo de jogos!\n");
        return;
    }

        while (fread(&game, sizeof(struct Game), 1, fp) == 1) {
        
        printf(" Codigo: %d \nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nClassificacao (publico): %d\nAno: %d\nFabricante: %s\nClassificacao (jogo): %d\n\n", game.codigo, game.nome, game.plataforma, game.tipo, game.preco, game.classificacao_publico, game.ano, game.fabricante, game.classificacao_jogo);
    }
    fclose(fp);
}


int main() {
    int opcao;  
    struct Game game;
    do {
        printf("\n-- MENU --\n");
        printf("1. Cadastrar\n");
        printf("2. Consultar\n");
        printf("3. Alterar\n");
        printf("4. Remover\n");
        printf("5. Exibir\n");
        printf("0. Sair\n");
        printf("Selecione uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                CadastrarGame(game);
                break;
            case 2:
                ConsultarGame(game);
                break;
            case 3:
                atualizarGame(game);
                break;
            case 4:
                remover_game(game);
                break;
            case 5:
                exibir(game);
                break;
            case 0:
                printf("Programa encerrado\n");
                break;
            default:
                printf("Escolha invalida. Por favor, tente novamente.\n");
                break;
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}
