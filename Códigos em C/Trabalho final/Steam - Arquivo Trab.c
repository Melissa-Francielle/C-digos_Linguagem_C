#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100], plataforma[100], tipo[100], fabricante[100];
    float preco;
    int ano, classificacao, rating;
} Game;

void exibir_registros (Game *g, int quant, char arq_txt[]){
    FILE *file = fopen (arq_txt, "r");
    if (file == NULL){
        printf("\nERRO\n");
        exit(1);
    }
    else{

        printf(file, "\n\t\tLista de Registros: \n");
        printf(file, "\t--------------------------------------\n");
        for(int i = 0; i < quant; i++){
            fscanf(file, "%s %s %s %f %d %d %s %d", g[i].nome, g[i].plataforma, g[i].tipo, &g[i].preco, &g[i].rating, &g[i].ano, g[i].fabricante, &g[i].classificacao);
            printf("\nRegistro - %d\nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nRating: %d\nAno: %d\nFabricante: %s\nClassificacao: %d", i + 1, g[i].nome, g[i].plataforma, g[i].tipo, g[i].preco, g[i].rating, g[i].ano, g[i].fabricante, g[i].classificacao);
            printf(file, "\n\t--------------------------------------\n");    
        }
        
        fclose(file);
    }
}
void cadastrar_jogo (Game *g, char arq_txt[], int tam, int quant){
    FILE *file = fopen (arq_txt, "w");
    int user;
    if (file == NULL){
        printf("\nERRO\n");
        exit(1);
    }
    else{
        if (quant < tam){
            do {
            printf("\n\t\b____ENTRE COM OS DADOS____\b\n");
            printf("Digite o nome do jogo: ");
            fgets(g->nome, 100, stdin);
            printf("Digite a plataforma: ");
            fgets(g->plataforma, 100, stdin);
            printf("Digite o tipo do jogo: ");
            fgets(g->tipo, 100, stdin);
            printf("Digite o preco: ");
            scanf("%f", &g->preco);
            setbuf(stdin, NULL); 
            printf("Classificacao do publico: ");
            scanf("%d", &g->rating);
            setbuf(stdin, NULL);
            printf("Digite o ano de lancamento do jogo: ");
            scanf("%d", &g->ano);
            setbuf(stdin, NULL);
            printf("Digite o fabricante: ");
            fgets(g->fabricante, 100, stdin);
            printf("Digite a classificacao geral do jogo: ");
            scanf("%d", &g->classificacao);
            setbuf(stdin, NULL);
            int resultado = fprintf(file, "\nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nRating: %d\nAno: %d\nFabricante: %s\nClassificacao: %d\n", g->nome, g->plataforma, g->tipo, g->preco, g->rating, g->ano, g->fabricante, g->classificacao);
                if (resultado < 0){
                    printf("Erro na escrita\n");
                }
                else {
                    printf("Gravacao feita com sucesso\n");
                }
            printf("\nDigite 0 finalizar: ");
            scanf("%d", &user);
            setbuf(stdin, NULL);
            }while(user == 0);
        }
    }
    
    fclose(file);
}
void consultar_cadastro(Game *g, int quant, char arq_txt[]){
    FILE *file = fopen(arq_txt, "r");
    int id;

    if (file == NULL){
        printf("\nERRO\n");
        exit(1);
    }
    else{  
        exibir_registros(g, arq_txt);
        printf("\nDigite o codigo que deseja consultar: \n");
        scanf("%d", &id);
        id--;

        if (id >=0 && id < quant){
            fseek(file, id * sizeof(Game), SEEK_SET);
            fscanf(file, "%s %s %s %f %d %d %s %d", g->nome, g->plataforma, g->tipo, &g->preco, &g->rating, &g->ano, g->fabricante, &g->classificacao);
            printf("\nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nRating: %d\nAno: %d\nFabricante: %s\nClassificacao: %d\n", g->nome, g->plataforma, g->tipo, g->preco, g->rating, g->ano, g->fabricante, g->classificacao);
        }
    }
        fclose(file);
}
void altera_att(Game *g, int quant, char arq_txt[]){
    int escolha=0, id=0;

    printf("\nDigite 1 para alterar um registro ou 2 para atualizar: \n");
    scanf("%d", &escolha);
    setbuf(stdin, NULL);
    if (escolha == 1){
        FILE *file = fopen (arq_txt, "r+");
         
        if (file == NULL){
            printf("\nERRO\n");
            exit(1);
        }
        else{
            exibir_registros(g, quant, arq_txt);
            printf("\nDigite o codigo do registro que deseja alterar: \n");
            scanf("%d", &id);
            setbuf(stdin, NULL);
            id--;

            if (id >= 0 && id < quant){
                printf("\n\t-- ATUALIZACAO PODE SER FEITA --\n");
                printf("Digite o nome do jogo: ");
                fgets(g->nome, 100, stdin);
                printf("Digite a plataforma: ");
                fgets(g->plataforma, 100, stdin);
                printf("Digite o tipo do jogo: ");
                fgets(g->tipo, 100, stdin);
                printf("Digite o preco: ");
                scanf("%f", &g->preco);
                setbuf(stdin, NULL); 
                printf("Classificacao do publico: ");
                scanf("%d", &g->rating);
                setbuf(stdin, NULL);
                printf("Digite o ano de lancamento do jogo: ");
                scanf("%d", &g->ano);
                setbuf(stdin, NULL);
                printf("Digite o fabricante: ");
                fgets(g->fabricante, 100, stdin);
                printf("Digite a classificacao geral do jogo: ");
                scanf("%d", &g->classificacao);
                setbuf(stdin, NULL);
                
                fseek(file, id * sizeof(Game), SEEK_SET);
                int resultado = fprintf(file, "\nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nRating: %d\nAno: %d\nFabricante: %s\nClassificacao: %d\n", g->nome, g->plataforma, g->tipo, g->preco, g->rating, g->ano, g->fabricante, g->classificacao);
                    if (resultado < 0){
                        printf("Erro na escrita\n");
                    }
                    else {
                        printf("Alteracao feita com sucesso\n");
                    }
            }
        }
        fclose(file);
    }
    else if (escolha == 2){
        FILE *file = fopen (arq_txt, "a");
            if (file == NULL){
                printf("\nERRO\n");
                exit(1);
            }
            else {
                printf("\n\t\b____ENTRE COM OS DADOS____\b\n");
                printf("Digite o nome do jogo: ");
                fgets(g->nome, 100, stdin);
                printf("Digite a plataforma: ");
                fgets(g->plataforma, 100, stdin);
                printf("Digite o tipo do jogo: ");
                fgets(g->tipo, 100, stdin);
                printf("Digite o preco: ");
                scanf("%f", &g->preco);
                setbuf(stdin, NULL); 
                printf("Classificacao do publico: ");
                scanf("%d", &g->rating);
                setbuf(stdin, NULL);
                printf("Digite o ano de lancamento do jogo: ");
                scanf("%d", &g->ano);
                setbuf(stdin, NULL);
                printf("Digite o fabricante: ");
                fgets(g->fabricante, 100, stdin);
                printf("Digite a classificacao geral do jogo: ");
                scanf("%d", &g->classificacao);
                setbuf(stdin, NULL);
                int resultado = fprintf(file, "\nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nRating: %d\nAno: %d\nFabricante: %s\nClassificacao: %d\n", g->nome, g->plataforma, g->tipo, g->preco, g->rating, g->ano, g->fabricante, g->classificacao);
                    if (resultado < 0){
                        printf("Erro na escrita\n");
                    }
                    else {
                        printf("Atualizacao feita com sucesso\n");
                    }
            }
        fclose(file);
    }

}
void remove_arquivo (Game *g, char arq_txt[]){
    FILE *f = fopen(arq_txt, "r");

    if(file == NULL){
        printf("\nERRO\n");
        printf("\nRetorno: %d\n", remove(file));
    }
    else{
        printf("\nArquivo abero com sucesso\n");
        fclose(file);

        printf("Retorno: %d\n", remove(file));
    }
}
void excluir_registro (Game *g, int quant, char arq_txt[]){
    FILE *file = fopen (arq_txt, "r");
    int id;
    if (file == NULL){
        printf("\nERRO\n");
        exit(1);
    }
    else{
        exibir_registros(g, quant, arq_txt);

        printf("\nDigite o codigo ao do registro que deseja excluir: \n");
        scanf("%d", &id);
        id--;
    
            if(id >= 0 && id < quant){
                free(g[id]);
                    if(id < quant){
                        g[id] = g[quant-1];
                    }
                    return -1;
            } 
            else{
                printf("\nERRO\n");
                return 0;
            }
    }
}
void cadastrar_binario(char arq_dat[]){
    Game g;
    FILE *file = fopen(arq_dat, "ab");

    if(file == NULL){
        printf("\nERRO\n");
        exit(1);
    }
    else{
        printf("\n\t\b____ENTRE COM OS DADOS____\b\n");
        printf("Digite o nome do jogo: ");
        fgets(g->nome, 100, stdin);
        printf("Digite a plataforma: ");
        fgets(g->plataforma, 100, stdin);
        printf("Digite o tipo do jogo: ");
        fgets(g->tipo, 100, stdin);
        printf("Digite o preco: ");
        scanf("%f", &g->preco);
        setbuf(stdin, NULL); 
        printf("Classificacao do publico: ");
        scanf("%d", &g->rating);
        setbuf(stdin, NULL);
        printf("Digite o ano de lancamento do jogo: ");
        scanf("%d", &g->ano);
        setbuf(stdin, NULL);
        printf("Digite o fabricante: ");
        fgets(g->fabricante, 100, stdin);
        printf("Digite a classificacao geral do jogo: ");
        scanf("%d", &g->classificacao);
        setbuf(stdin, NULL);
            
        fclose(file);
    }
}
void consultar_binario(char arq_dat[]){
    Game g;
    FILE *file = fopen (arq_dat, "rb");

    if (file == NULL){
        printf("\nERRO\n");
        exit(1);
    }
    else {
        while(!feof(file)){
            if (fread(&g, sizeof(Game), 1, file)){
                printf("\nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nRating: %d\nAno: %d\nFabricante: %s\nClassificacao: %d\n", g.nome, g.plataforma, g.tipo, g.preco, g.rating, g.ano, g.fabricante, g.classificacao);
            }
        fclose(file);
        }
    }
}
void alterar_binario(char arq_dat[]){
    Game c;
    FILE *file = fopen(arq_dat, "rb+");
    i = 1;
    if (file == NULL){
        printf("\nERRO\n");
        exit(1);
    }
    else{
        printf("\n\t---------LISTA REGISTRO -------\n");
        printf("\n\t----------------------------------\n");
            while(fread(&g, sizeof(Game), 1, file)){
               printf("\nNome: %s\nPlataforma: %s\nTipo: %s\nPreco: %.2f\nRating: %d\nAno: %d\nFabricante: %s\nClassificacao: %d\n", g.nome, g.plataforma, g.tipo, g.preco, g.rating, g.ano, g.fabricante, g.classificacao);
                i++;
            }
        printf("\nDigite o indice que gostaria de alterar: \n");
        int id;
        scanf("%d", &id);
        id--;
            if(id >= 0 && id < i -1){
                printf("\n\t\b____ENTRE COM OS DADOS____\b\n");
                printf("Digite o nome do jogo: ");
                fgets(g->nome, 100, stdin);
                printf("Digite a plataforma: ");
                fgets(g->plataforma, 100, stdin);
                printf("Digite o tipo do jogo: ");
                fgets(g->tipo, 100, stdin);
                printf("Digite o preco: ");
                scanf("%f", &g->preco);
                setbuf(stdin, NULL); 
                printf("Classificacao do publico: ");
                scanf("%d", &g->rating);
                setbuf(stdin, NULL);
                printf("Digite o ano de lancamento do jogo: ");
                scanf("%d", &g->ano);
                setbuf(stdin, NULL);
                printf("Digite o fabricante: ");
                fgets(g->fabricante, 100, stdin);
                printf("Digite a classificacao geral do jogo: ");
                scanf("%d", &g->classificacao);
                setbuf(stdin, NULL);
                
                fseek(file, id * sizeof(Game), SEEK_SET);
                int resultado = fwrite (&g, sizeof(Game), 1, file);
                if (resultado < 0){
                        printf("Erro na escrita\n");
                    }
                    else {
                        printf("Atualizacao feita com sucesso\n");
                    }

            }
        fclose(file);
    }
}
int main (){
    Game *g[100];
    char arq_txt[]= {"games.txt"};
    char arq_dat[] = {"games.dat"};
    int opcao, quant = 0, tam = 100;

    do {
        printf("\n\t-- MENU -- \n");
        printf("-> 0 - SAIR\n");
        printf("-> 1 - CADASTRAR\n");
        printf("-> 2 - CONSULTAR REGISTRO\n");
        printf("-> 3 - ALTERAR OU ATUALIZAR\n");
        printf("-> 4 - REMOVER ARQUIVO\n");
        printf("-> 5 - EXIBIR\n");
        printf("-> 6 - REMOVER REGISTRO\n");
        printf("\n\t-- OPCOES PARA ARQUIVOS BINARIOS --\n");
        printf("-> 7 - CADASTRAR ARQUIVO BINARIO\n");
        printf("-> 8 - CONSULTAR ARQUIVO BINARIO\n");
        printf("-> 9 - ALTERAR ARQUIVO BINARIO\n");
        printf("\n\tDigite uma opcao: \n");
        scanf("%d", &opcao);
        setbuf(stdin, NULL);

        switch (opcao){
        case 1: cadastrar_jogo(g, arq_txt, tam, quant);
            break;
        case 2: consultar_cadastro(g, quant, arq_txt);
            break;
        case 3: altera_att(g, quant, arq_txt);
            break;
        case 4: remove_arquivo(g, arq_txt);
            break;
        case 5: exibir_registros (g, quant, arq_txt);
            break;
        case 6: excluir_registro (g, quant, arq_txt);
            break;
        case 7: cadastrar_binario(arq_dat);
            break;
        case 8: consultar_binario(arq_dat);
            break;
        case 9: alterar_binario(arq_dat);
            break;
        default:
            if(opcao != 0){
                printf("\n\tOPCAO INVALIDA\n");
            }
            break;
        }
    } while(opcao != 0);
    return 0;
}