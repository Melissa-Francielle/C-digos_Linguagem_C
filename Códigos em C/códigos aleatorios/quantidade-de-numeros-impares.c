#include <stdio.h>

int main (){
    int i, impar, soma;
    i = 1;
        
       while (i >= 99){
            if (i >= 100 && i <= 300){
                if (i % 2 == 1){
                soma += i;
                }
            }
        }
    printf ("Numeros impares: %d\n", soma);
}