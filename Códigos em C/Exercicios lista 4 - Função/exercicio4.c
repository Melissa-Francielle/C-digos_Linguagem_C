#include <stdio.h>
int potencia (int x, int n){
    if (n == 0)
        return 1;
    else 
        return (x * potencia(x, n-1));
}
int main (){
    int x, n, resultado;

    printf ("digite um numero: ");
    scanf ("%d", &x);

    printf ("digite uma potencia: ");
    scanf ("%d", &n);
      
        resultado = potencia (x, n);
        printf ("\n%d elevado a %d =  %d", x, n, resultado);
    return 0;
}