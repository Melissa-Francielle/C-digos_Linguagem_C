//Utilizando aritimetica de ponteiros, mostre como exibir a frase
//"nao gosto de programar!".

#include<stdio.h>
#include<string.h>

int main (){
    char str[25] = "nao gosto de programar";
    char *ptr = &str[0];

        for (int i = 0; str[i] != '\0'; i++){
            printf ("%c", *ptr);
            ptr++;
        }
}