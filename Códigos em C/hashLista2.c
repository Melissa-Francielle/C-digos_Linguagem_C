#include <stdio.h>
#include <stdlib.h>

#define M 19

typedef struct pessoa Pessoa;
//tipo pessoa
struct pessoa{
    int matricula;
    char nome[50];
};

typedef struct no No;
struct no{
    Pessoa pessoa; //objeto pessoa
    No *proximo; //unico ponteiro
};

// tipo lista
typedef struct lista Lista;
struct lista{
    No *inicio;
    int tam;
};

// tabela(vetor de ponteiros para lista)
Lista *tabela[M];

// definição das variaveis

Pessoa criarPessoa(){
    Pessoa p;
    printf("\nDigite o nome da Pessoa: ");
    scanf("%*c");
    fgets(p.nome, 50, stdin);
    printf("\nDigite a matricula dessa pessoa: ");
    scanf("%d", &p.matricula);
    return p; //retorna um objeto pessoa
}
//imprime uma pessoa
void imprimirPessoa(Pessoa p){
    printf("\nNome: %s\nMatricula: %d\n", p.nome, p.matricula);
}

// inicio funçõe slista
Lista* criaLista(){
    Lista *l = malloc(sizeof(Lista));
    l->inicio = NULL;
    l-> tam = 0;
    return l;
}

/* Inserir no inicio da lista
p - nova pessoa a ser inserida
*lista - endereço de um lista encadeada
*/

void inserirInicio (Pessoa p, Lista *lista){
    No *no = malloc (sizeof(No));
    no->pessoa = p;

    no->proximo = lista->inicio;
    lista->inicio = no;
    lista->tam++;
}

//Busca um elemento na lista
No* buscarNo(int mat, No *inicio){
    while(inicio != NULL){

        //inicio é um ponteiro para um nó, então usasse ->
        //pessoa é um objeto, então usasse o ponto.
        if (inicio->pessoa.matricula == mat){
            return inicio;
        }
        else{
            inicio = inicio->proximo;
        }
    }
    return NULL; //matricula não encontrada
}

void imprimirLista(No *inicio){
    while(inicio!= NULL){
        imprimirPessoa(inicio->pessoa);
        inicio = inicio->proximo;
    }
}

//Inicio das funções tabela hash

//inicializar a tabela
void inicializar(){
    int i;
    for(i = 0; i < M; i++){
        tabela[i] = criaLista();

    }
}
// função de espalhamento
int funcao_hash(int mat){
    return mat % M;
}

// cria uma pessoa e a insere na tabela
void inserir_tabela(){
    Pessoa pes = criarPessoa();
    int indice = funcao_hash(pes.matricula);
    inserirInicio(pes, tabela[indice]);

}
//buscar uma pessoa
Pessoa* buscarPessoa(int mat){
    int indice = funcao_hash(mat);
    No *no = buscarNo(mat, tabela[indice]->inicio);
    if(no){
        return &no->pessoa;
    }
    else{
        return NULL;
    }
}
// imprimir
void imprimirTabela(){
    int i;
    printf("\n-------------------Inicio da tabela---------------\n");

    for(i = 0; i < M; i++){
        printf("%d\n", i);
        printf("Lista tamanho: %d\n", tabela[i]->tam);
        imprimirLista(tabela[i]->inicio);
    }
    printf("\n----------------fim da tabela------------------\n");

}
int main (){
    int op, mat;
    Pessoa *p;

    inicializar();

    do{
        printf("\n0 - Sair\n1 - Inserir\n2 - Buscar\n3 - Imprimir tabela\n");
        scanf("%d", &op);
        switch(op){
        case 0:
            printf("\nSaindo...\n");
             break;

        case 1:
            inserir_tabela();
            break;
        case 2:
            printf("Qual a matricula a ser buscada? ");
            scanf("%d", &mat);
            p = buscarPessoa(mat);
            if(p){
                printf("Pessoa encontrada \nMatricula: %d\nNome: %s\n", p->matricula, p->nome);
            }
            else{
                printf("Pessoa não encontrada\n");
            }
        case 3:
            imprimirTabela();
            break;
        default:
            break;

        }
    }while(op != 0);
}
