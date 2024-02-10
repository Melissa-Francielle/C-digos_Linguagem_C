#include <stdio.h>
#include <string.h>

struct cadastro{
	int matricula;
	char nome[50];
	float nota;
};
void le_dados_alunos (struct cadastro a[], int tam){
	for (int i = 0; i < tam; i++){
		printf("\n");
		printf ("Digite a matricula deste aluno: ");
		scanf ("%d", &a[i].matricula);
		setbuf(stdin, NULL);
		printf("\nDigite o nome do aluno: ");
		fgets(a[i].nome, 50, stdin);
		printf ("\nDigite as notas do aluno: ");
		scanf ("%f", &a[i].nota);
		setbuf(stdin, NULL);
	}
}
void exibe_dados_alunos (struct cadastro a[], int tam){
	for (int i =0; i < tam; i++){
		printf ("\n_______________________\n");
		printf("\nMatricula do aluno: %d", a[i].matricula);
		printf("\nNome do aluno: %s", a[i].nome);
		printf("\nNota: %.2f", a[i].nota);

			if (a[i].nota >= 7.0){
				printf ("\nAprovado\n");
			}
			else if (a[i].nota >= 4.0 && a[i].nota < 7.0){
				printf ("\nExame\n");
			}
			else if (a[i].nota < 4.0){
				printf ("\nReprovado\n");
			}
	}
}
float media_Geral (struct cadastro a[], int tam){
	float soma =0;
		for (int i = 0; i < tam; i++){
			soma += a[i].nota;
		}
	return soma/tam;
}
void maior_nota (struct cadastro a[], int tam){
	float maior = 0;
	int aux; 
		for (int i = 0; i < tam; i++){
			if (a[i].nota > maior){
				maior = a[i].nota;
				aux = i;
			}
		printf ("\nO aluno com a maior nota eh: %s\n", a[aux].nome);
		}
}
int main (){
	struct cadastro a[2];

	printf("\nInsira os dados dos alunos:\n");
	le_dados_alunos (a, 2);
	printf("\n\t....Os dados....\n");
	exibe_dados_alunos (a, 2);

	float media = media_Geral (a, 2);
	printf ("\nA media geral eh: %.2f\n", media);

	printf("\n....Maior nota....\n");
	maior_nota (a, 1);
}