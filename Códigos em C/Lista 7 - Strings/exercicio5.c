#include <stdio.h>
#include <string.h>

int main (){
    char str1[100], str2[100];
    int tam1, tam2;

    printf ("Digite a primeira frase: ");
    fgets (str1, 100, stdin);
    
    printf ("Digite a segunda frase: ");
    fgets (str2, 100, stdin);

    printf ("\n");
    printf ("As frases que voce digitou: ");
    printf("\n");
    puts(str1);
    puts (str2);
    
        if (stricmp(str1, str2) == 0){
            printf ("\nAs frases sao iguais");
        }
        else {
            printf ("\nAs frases sao diferentes");
        }

    tam1 = strlen(str1);
    tam2 = strlen (str2);

        if (tam1 == tam2){
            printf ("\nPossuem o mesmo tamanho\n");
        }
        else {
            printf ("Nao possuem o mesmo tamanho\n");
        }
}