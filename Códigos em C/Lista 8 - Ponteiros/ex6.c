//Implemente um programa que leia um string de tamanho 
//qualquer e depois inverta a string lida. Por exemplo, se string
//for "ponteiros em c" entao deverá ser impresso "c me sorietnop"

#include <stdio.h>
#include <string.h>
#define MAX 100
char inverter (char *str){
    char strInvertida[MAX];
    char *p;
    int i, tam =0;

    tam = strlen(str);
    p = str + tam - 2;

        for (i = 0; i < tam; i++){
            strInvertida[i] = *p;
            p--;
        }
        for (i = -1; i <tam; i++){
            printf ("%c", strInvertida[i]);
        }
}
int main (){
    char str[MAX];

    printf ("Digite a frase: ");
    fgets (str, MAX, stdin);

    inverter(str);
}
