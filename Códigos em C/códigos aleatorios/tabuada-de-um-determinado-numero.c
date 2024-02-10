#include <stdio.h>

int main (){
    int numero, count;
    count = 0;

        printf ("entre com um numero: \n");
        scanf ("%d", &numero);
            do {
                printf ("%d * %d =  %d\n", numero, count, (numero * count));
            count ++;
            } while (count <=10);
    return 0;
}