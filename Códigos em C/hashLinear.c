#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 31

void inicia_tabela(int t[]) {
    int i;
    for(i = 0; i < TAM; i++) {
        t[i] = 0;
    }
}

int funcao_Hash(int chave) {
    return chave % TAM;
}

void inserir(int t[], int valor) {
    int id = funcao_Hash(valor);
    while(t[id] != 0) {
        id = funcao_Hash(id + 1); // vai para o índice seguinte
    }
    t[id] = valor;
}

int busca_hash(int t[], int chave) {
    int id = funcao_Hash(chave);
    while(t[id] != 0) {
        if(t[id] == chave) {
            return t[id];
        }
        else {
            id = funcao_Hash(id+1);
        }
    }
    return 0;
}

void imprimi_tabela(int t[]) {
    int i;
    for (i =0; i < TAM; i++) {
        printf("%d = %d\n", i, t[i]);
    }
}

int main() {
    int op;
    int tabela[TAM], valor, retorno, tamanho_p;
    char chave[100]; // Tamanho arbitrário para a chave
    inicia_tabela(tabela);
    do {
        printf("\n\t0 - sair\n1 - Inserir\n2 - Buscar\n3 - Imprimir\n4 - Funcao de indice\n");
        scanf("%d", &op);
        switch(op) {
            case 1:
                printf("\nQual valor deseja inserir? ");
                scanf("%d", &valor);
                inserir(tabela, valor);
                break;
            case 2:
                printf("\tQual valor deseja buscar? ");
                scanf("%d", &valor);
                retorno = busca_hash(tabela, valor);
                if(retorno != 0) {
                    printf("\nValor encontrado\n");
                }
                else {
                    printf("\nValor não encontrado\n");
                }
                break;
            case 3:
                imprimi_tabela(tabela);
                break;
        }
    }while(op != 0);
    return 0;
}
