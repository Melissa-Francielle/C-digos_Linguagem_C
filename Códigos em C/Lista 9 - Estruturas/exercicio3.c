#include <stdio.h>
#include <string.h>
#define MAX 100

struct registro {
    int idade;
    char nome[MAX];
    char sexo[10];
    char estadoCivil[10];
    int quantAmigos;
    int quantFotos;
};
void preencher (struct registro *person, int quantidade){
    int i;
        for (i = 0; i < quantidade; i++){
            printf ("Digite a idade: ");
            scanf ("%d", &person[i].idade);
            setbuf(stdin, NULL);
            printf ("\nDigite o nome: \n");
            fgets (person[i].nome, MAX, stdin);
            printf ("\nDigite o sexo <F para Feminino, M para Masculino, N para neutro, PE para prefiro nao especificar: \n");
            scanf("%c", person[i].sexo);
            setbuf(stdin, NULL);
            printf ("\nDigite o estado civil em que voce se encontra <Solteiro/a, Casado/a, Namorando ou Divorciado/a: \n");
            fgets (person[i].estadoCivil, 10, stdin);
            printf("\nDigite a quantidade de amigos: \n");
            scanf("%d", &person[i].quantAmigos);
            setbuf(stdin, NULL);
            printf ("\nDigite a quantidade de fotos: \n");
            scanf ("%d", &person[i].quantFotos);
            setbuf(stdin, NULL);
        }
}
void mostra (struct registro *person, int quantidade){
    int i;
    
        for (i = 0; i < quantidade; i++){
            printf("\n______________________\n");
            printf ("\nIdade %d", person[i].idade);
            printf ("\nNome %s", person[i].nome);
            printf ("\nSexo: %s", person[i].sexo);
            printf ("\nEstado Civil: %s", person[i].estadoCivil);
            printf ("\nQuantidade de amigos: %d", person[i].quantAmigos);
            printf ("\nQuantidade de fotos: %d", person[i].quantFotos);
        }
}
int main (){
    struct registro person[MAX];

    int quantidade;
    printf ("Digite a quantidade: ");
    scanf ("%d", &quantidade); 
    setbuf(stdin, NULL);

    
    preencher (person, quantidade);
    mostra (person, quantidade);
}