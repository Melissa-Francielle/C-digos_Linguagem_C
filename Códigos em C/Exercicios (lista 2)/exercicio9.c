#include <math.h>
#include <stdio.h>

int main () {
    int x, y;
    char op;
    printf ("digite um numero, um operador e outro numero: ");
    scanf ("%d%c%d", &x, &op, &y);

    switch (op){
        case '+': printf ("adicao = %.2d\n", (x + y) / 2);
        break;
        case '-': printf ("subtracao =  %.2d\n", x - y || y - x);
        break; 
        case '*': printf ("multiplicacao = %.2d\n", (x * y));
        break;
        case '/': printf ("divisao = %.2d\n", x / y);
        break;
    }
    return 0;
}