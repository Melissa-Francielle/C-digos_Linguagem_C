#include <stdio.h>

int main (){
    int numero;
    int i = 1;


    while (i <= 7){
        scanf ("%d", &numero);
            if (numero >= 12 && numero <= 20){
                printf ("o numero digitado foi %d", numero);
            }
            else {
                printf ("\nEntrada invalida");
                printf ("\nDigite novamente: ");
            i++;
            }
    }
}