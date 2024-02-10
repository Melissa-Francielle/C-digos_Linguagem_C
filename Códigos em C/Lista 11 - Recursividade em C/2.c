#include <stdio.h>
#include <stdlib.h>
void imprimir (int x){
    int lista = 0;
    if (x == 0){
        printf("\n%d\n", x);

    }
    else {

        if (x > lista && lista % 2 == 0){
            imprimir (x - 2);
            printf("\n%d\n", x);
        }
    }
}
int main (){
    int x; 

    printf("Digite um numero par e positivo: ");
    scanf("%d", &x);

    imprimir (x);    
}
