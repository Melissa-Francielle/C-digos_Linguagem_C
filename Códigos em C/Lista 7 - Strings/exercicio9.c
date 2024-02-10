#include <stdio.h>
#include <string.h>


int main (){
    char str[100];
    int i, ehPalindromo = 0;

    gets(str);
    int tam = strlen(str);

        for (i =0; i < tam; i++){
            if (str[i] != str[tam-1]){
                ehPalindromo = 0;
            }
        }
        if (ehPalindromo == 1){
            printf("\nPalindromo\n");
        }
        else{
            printf("\nNao eh palindromo\n");
        }
    return 0;
}