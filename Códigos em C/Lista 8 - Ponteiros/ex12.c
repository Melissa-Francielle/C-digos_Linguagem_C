//Faca um programa que leia uma string do no maximo 100 caracteres.
//Em seguida, implemente uma funcao para calcular e mostre o total
//de palavras da string lida. Para isso, utilize o prototipo de funcao
//a seguir

#include <stdio.h>
#include <string.h>
#define MAX 100
int totalPalavras (char *palavras){
    int i, count = 1, tam=0;
    char espaco = ' ', espacoDepois;

        for(i=0; palavras[i] != '\0' ; i++){
            if(*(palavras+i) == espaco){
                count++;
            }
    }
    return count;
}
int main (){
    char frase[MAX];
    char *palavras;
    palavras = frase;

    printf ("Digite a frase: ");
    fgets(palavras, MAX, stdin);

    int total = totalPalavras (palavras);
    printf ("\ntotal de palavras: %d", total);

}