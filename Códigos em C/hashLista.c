#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 31
typedef struct no No;

struct no{
    int chave;
    struct no*proximo;
};

typedef struct lista Lista;
struct lista{
    No *inicio;
    int tam;
};

void inicializarLista(Lista *l){
    l->inicio = NULL;
    l-> tam = 0;
}

void inserir_lista(Lista *l, int valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo -> chave = valor;
        novo ->proximo = l->inicio;
        l -> inicio = novo;
    }
    else{
        printf("\nErro ao alocar");
    }
}

int buscar_naLista(Lista *l, int valor){
    No *aux = l->inicio;
    while(aux && aux->chave != valor)
        aux = aux -> proximo;
    if(aux)
        return aux->chave;
    return 0;
}

void imprime_lista(Lista *l){
    No *aux = l->inicio;
    printf(" Tam %d: ", l->tam);
    while(aux){
        printf("\n%d", aux->chave);
        aux = aux -> proximo;

    }
}

//agora para a tabela
void inicializarTabela(Lista* t){
    int i;

    for (i = 0; i < TAM; i++){
        inicializarLista(&t[i]);
    }
}

int funcao_Hash(int chave){
    return chave % TAM;
}

void inserir_tabela(Lista t[], int valor){
    int id = funcao_Hash(valor);
    inserir_lista(&t[id], valor);
}

int busca(Lista t[], int chave){
    int id = funcao_Hash(chave);
    printf("\nIndice gerada: %d\n",id);
    return buscar_naLista(&t[id], chave);
}

void imprimir_tabela(Lista t[]){
    int i;
    for(i = 0; i <TAM; i++){
        printf("%2d = ", i);
        imprime_lista(&t[i]);
        printf("\n");
    }
}

int main(){
    int op, valor, retorno;
    Lista tabela[TAM];

    inicializarTabela(tabela);
    do{
        printf("\n0 - Sair\n1 - Inserir\n2 - Buscar\n3 - Imprimir");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("\nQual valor deseja inserir? ");
            scanf("%d", &valor);
            inserir_tabela(tabela, valor);
            break;
        case 2:
            printf("\nQual valor deseja buscar? ");
            scanf("%d", &valor);
            retorno = busca(tabela, valor);
            if (retorno != 0){
                printf("\nValor encontrado: %d\n", retorno);
            }else{
                printf("\nValor não encontrado\n");
            }
            break;
        case 3:
            imprimir_tabela(tabela);
            break;
        default:
            break;
        }
    }while(op != 0);
    return 0;
}

