#include <stdio.h>
#include <string.h>

struct dados {
    char nome[50];
    int idade;
    float altura;
    int peso;
};

void leitura_dados (struct dados pesquisa[], int tam){
    for (int i = 0; i < tam; i++){
        printf("\n");
        printf ("Digite o nome: ");
        fgets (pesquisa[i].nome, 50, stdin);
        printf ("\nDigite a idade: ");
        scanf ("%d", &pesquisa[i].idade);
        setbuf(stdin, NULL);
        printf ("\nDigite a altura: ");
        scanf ("%f", &pesquisa[i].altura);
        setbuf(stdin, NULL);
        printf("\nDigite o peso: ");
        scanf ("%f", &pesquisa[i].peso);
        setbuf(stdin, NULL);
    }
}
void aluno_mais_novo (struct dados pesquisa [], int tam){
    int i = 0;
    int mais_novo = 50000;
    int aux1= 0;
        do {
            if (pesquisa[i].idade < mais_novo){
                mais_novo = pesquisa[i].idade;
                aux1 = i;
            }
        i++;
        }while (i < tam);
        printf ("O nome do aluno mais novo >>> %s", pesquisa[aux1].nome);

}

void maior_peso (struct dados *pesquisa, int tam){
    int peso = 0;
    int i = 0;
    int aux;
        do {
            if (pesquisa[i].peso > peso){
                peso = pesquisa[i].peso;
                aux = i;
            }
        i++;
        }while (i < tam);
        printf ("O nome do aluno com maior peso >>> %s", pesquisa[aux].nome);
        
}
int main (){
    struct dados pesquisa [2];

    printf("\n\t....Entre com os dados....\n");
    leitura_dados(pesquisa, 2);

    printf("\nAluno mais novo: ");
    aluno_mais_novo (pesquisa, 2);
    printf("\nAluno com maior peso: ");
    maior_peso (pesquisa, 2);
}
