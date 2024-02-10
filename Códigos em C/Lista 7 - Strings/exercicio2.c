#include <stdio.h>
#include <string.h>

#define VOGAL 10
 
int main (){
    char vogal[VOGAL] = "aeiouAEIOU";
    char str[100];
    int i, j, tam;

    printf("Digite a frase ou palavra: ");
    fgets(str, 100, stdin);
 
    tam = strlen(str);
 
        for (i = 0; i < tam; i++){
            for (j = 0; j < VOGAL; j++){
                if (str[i] == vogal[j]){
                    str[i] = '*';
                    break;
                }
            }
        }
        printf("%s", str);
}