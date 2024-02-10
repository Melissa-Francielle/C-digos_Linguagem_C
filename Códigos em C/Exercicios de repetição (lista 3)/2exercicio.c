#include <stdio.h>

int main (){
    int numero;
    int quant = 0;

        scanf ("%d", &numero);

        for (int i = 1; i <= numero; i++){
            if (numero%i==0){
                printf ("%d\n", i);
                quant++;
            }
        }
        printf ("%d\n", quant);
    return 0;
}