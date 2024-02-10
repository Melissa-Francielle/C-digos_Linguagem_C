#include <stdio.h>

int main (){
    int i, maior, menor, numero, quantidade;
    printf ("Entre com a quantidade de numeros: ");
    scanf ("%d", &quantidade);

    i= 1;
        while (i <= quantidade){
            printf ("Entre com %d numeros: ", i);
            scanf ("%d", &numero);

            if (i == 1){
                maior = numero;
                menor = numero;
            }
            else if (numero > maior){
                maior = numero;
            }
            else if (numero < menor){
                menor = numero;
            }
            i++;
        }
    printf ("Maior numero = %d\n menor numero = %d\n", maior, menor);
    return 0;
}