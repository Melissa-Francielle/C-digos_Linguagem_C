#include <stdio.h>
int divisores (int numero, int i, int count){
    for (int i = 1; i <= numero; ++i){
        if (numero % i == 0){
            printf ("%d\n", i);
        }
    count++;
    }
    return i;
}
int main (){
    int numero, count, i;
    int quantidadeDivisores;
    count = 0;

    printf ("Digite um numero: ");
    scanf ("%d", &numero);

    quantidadeDivisores = divisores (numero, i, count);

    return 0;
}