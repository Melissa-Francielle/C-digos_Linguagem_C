#include <stdio.h>
#include <string.h>
 
#define ALFA 26
 
int main (){
    char alfabeto[ALFA] = "abcdefghijklmnopqrstuvwxyz";
    char alfabetoInvertido[ALFA] = "zyxwvutsrqponmlkjihgfedcba";
    char str[255];
    int i, j, tam;
        printf("Digite a frase ou palavra: ");
        fgets(str, 255, stdin);
 
     tam = strlen(str);
 
        for (i = 0; i < tam; i++){
            for (j = 0; j < ALFA; j++){
                if (str[i] == alfabeto[j]){
                    str[i] = alfabetoInvertido[j];
                    break;
                }
            }
        }
        printf("%s", str);
}