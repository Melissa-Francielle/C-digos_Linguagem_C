#include <stdio.h>

int main (){
    int numeros, i;
    int par = 0;

        for (i = 1; i <= 10; i++){
            printf ("informe numero: ");
            scanf ("%d", &numeros);

            if(numeros % 2 ==0){
                par++;
            }

        }
    printf ("quantidade de pares: %d\n ", par);
    printf ("quantidade de impares: %d\n" 10-par);
}