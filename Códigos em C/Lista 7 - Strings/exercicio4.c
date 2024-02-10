#include <stdio.h>
#include <string.h>

int main (){
    char string [100];
    int i, j, tamanho;
    int contador =0;

    printf ("Digite a frase: ");
    fgets (string, 100, stdin);
    
    tamanho = strlen (string);

        for (i = 0; i < tamanho; i++){
            if (string[i] == ' '){
                contador++;
            }
        }
    printf ("\n\ttotal de espacos nessa frase: \n%d\n", contador);
}