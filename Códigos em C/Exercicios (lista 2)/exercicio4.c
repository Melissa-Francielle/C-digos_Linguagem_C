#include <stdio.h>

int main (){
    int a, b, c;

    printf ("digite um valor a, b, c: ");
    scanf ("%d%d%d", &a, &b, &c);

    if (a == b && b == c){
        printf ("triangulo equilatero");
    }
    else if (a == b && a && b != c){
        printf ("triangulo isosceles");
    }
    else {
        printf ("triangulo escaleno");
    }
    return 0;
}