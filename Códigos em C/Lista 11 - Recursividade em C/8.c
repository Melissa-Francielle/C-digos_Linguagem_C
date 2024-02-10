#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int palindromo(char nome[], int inicio, int fim){
    if(inicio == fim-1){
        return 1;
    }
    else if(nome[inicio] != nome[fim-1]){
        return 0;
    }   
    else{
        return palindromo(nome, inicio + 1, fim - 1);
    }
}

int main() {
    char nome[MAX];

    printf("Digite a palavra: ");
    fgets(nome, MAX, stdin);
  
    printf("O nome [%s] eh palindromo? %d\n", nome, palindromo(nome, 0, strlen(nome) - 1));

    return 0;
}