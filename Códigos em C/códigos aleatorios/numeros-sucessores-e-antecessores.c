#include <stdio.h>

int main (){
    int numero;
    int sucessor, antecessor;

        printf("Digite um numero: ");
        scanf ("%d", &numero);

        antecessor = numero - 1;
        sucessor = numero + 1;

        printf ("antecessor %d e o sucessor %d do numero %d\n", antecessor, sucessor, numero);
}