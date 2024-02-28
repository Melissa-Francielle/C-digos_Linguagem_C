#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 31

typedef struct data Data;
struct data{
    int dia, mes, ano;
};

typedef struct ed Endereco;
struct ed{
    char rua[50];
    char bairro[50];
    char cidade[50];
    char pais[50];
    int num, cep;
};

typedef struct contrato Contrato;
struct contrato{
    int codigo;
    Data dataAss;
    char cargo[50];
    float salario;
};

typedef struct pessoa Pessoa;
struct pessoa{
    char nome[50];
    int cpf;
    Data dataNas;
    Endereco end;
    Contrato contr;
};

void imprimirPessoa(Pessoa p){
    printf("\nNome: %s", p.nome);
    printf("\nCPF: %d\n", p.cpf);
    printf("\nData de nascimento: ");
    imprimirData(p.dataNas);
    imprimirEndereco(p.end);
    imprimirContrato(p.contr);
}
void imprimirData(Data d){
    printf("\nDia: %d\n", d.dia);
    printf("\nMes: %s\n", d.mes);
    printf("\nAno: R$%.2f\n", d.ano);
}

void imprimirEndereco(Endereco ed){
    printf("\nRua: %d\n", ed.rua);
    printf("\nBairro: %s\n", ed.bairro);
    printf("\nCidade: R$%.2f\n", ed.cidade);
    printf("\npais: %s\n", ed.pais);
    printf("\ncep: %d\n", ed.cep);
    printf("\nNum: %d\n", ed.num);

}

void imprimirContrato(Contrato c){
    printf("\nContrato: %d\n", c.codigo);
    printf("\nCargo: %s\n", c.cargo);
    printf("\nSalario: R$%.2f\n", c.salario);
    printf("\nData de ad.: ");
    imprimirData(c.dataAss);
}
Data lerData(){
    Data d;
    printf("\nDigite a data no formato dd mm aaaa: ");
    scanf("%d%d%d", &d.dia, &d.mes, &d.ano);
    return d;
}

Endereco lerEndereco(){
    Endereco end;
    printf("\nRua: ");
    fgets(end.rua, 50, stdin);
    printf("\nBairro: ");
    fgets(end.bairro, 49, stdin);
    printf("\nCidade: ");
    fgets(end.cidade, 49, stdin);
    printf("\nPais: ");
    fgets(end.pais, 49, stdin);
    printf("\nNumero: ");
    scanf("%d", &end.num);
    printf("\nCep: ");
    scanf("%d", &end.cep);
    return end;

}

Contrato lerContrato(){
    Contrato c;
    printf("\nCodigo do contrato: ");
    scanf("%d", &c.codigo);
    getchar(); // Limpar o buffer de entrada
    printf("\nData de assinatura: ");
    c.dataAss = lerData();
    printf("\nCargo: ");
    fgets(c.cargo, 49, stdin);
    printf("\nSalario: R$");
    scanf("%f", &c.salario);
    return c;
}

Pessoa lerPessoa(){
    Pessoa p;
    printf("\nNome: ");
    getchar();
    fgets(p.nome, 50, stdin);
    printf("\nCPF: ");
    scanf("%d", &p.cpf);

    printf("\nData de nascimento: ");
    p.dataNas = lerData();
    p.contr = lerContrato();
    p.end = lerEndereco();
    return p;
}

//FUN  ES E PROCEDIMENTO PARA A TABELA HASH

void inicializarTabela(Pessoa t[]) {
    int i;
    for(i = 0; i < TAM; i++) {
        strcpy(t[i].nome, "");//posicao vazio
        //cpf ser  nossa chave
    }
}

int funcao_Hash(int chave) {
    return chave % TAM;
}

int funcao_hash_string(char str[]){
    int i, tamanho = strlen(str);
    unsigned int hash = 0;

    for(i = 0; i < tamanho; i++){
        hash += str[i] * (i+1);
        //ele pega o código do caracter
    }
    return hash % TAM;
}

void inserir(Pessoa t[]) {
    Pessoa p = lerPessoa();
    int id = funcao_hash_string(p.nome);
    while(strlen(t[id].nome) > 0) {
        id = funcao_Hash(id + 1); // vai para o  ndice seguinte
    }
    t[id] = p;
}

Pessoa buscar(Pessoa t[], char chave) {
    int id = funcao_hash_string(chave);
    printf("\nIndice gerado: %d\n", id);
    while(strlen(t[id].nome) >0) {
        if(strcmp(t[id].nome, chave) == 0) {
            return t[id];
        }
        else {
            id = funcao_Hash(id+1);
        }
    }
    return printf("");
}

void imprimi_tabela(Pessoa t[]) {
    int i;
    for (i =0; i < TAM; i++) {
        printf("%d\n", i, t[i]);
        if(strlen(t[i].nome)>0){
            imprimirPessoa(t[i]);
        printf("\n\n---------------------------\n");
        }

    }
}

int main() {
    int op,  valor, retorno;
    Pessoa tabela[TAM];
    Pessoa *busca_t;
    char nome[50]; // Tamanho arbitr rio para a chave
    inicializarTabela(tabela);
    do {
        printf("\n\t0 - sair\n1 - Inserir\n2 - Buscar\n3 - Imprimir\n4 - Funcao de indice\n");
        scanf("%d", &op);
        switch(op) {
            case 1:

                inserir(tabela);
                break;
            case 2:
                printf("\nQual o nome deseja busacr");
                fgets(nome, 49, stdin);
                *busca_t = buscar(tabela, nome);
                if(busca_t) {
                    imprimirPessoa(*busca_t);
                }
                else {
                    printf("\nCPF n o encontrado\n");
                }
                break;
            case 3:
                imprimi_tabela(tabela);
                break;
        }
    }while(op != 0);
    return 0;
}
