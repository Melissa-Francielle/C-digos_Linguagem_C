#include <math.h>
#include <stdio.h>
float calculaRaizes (float a, float b, float delta, int op){
    if (op == 1)
        return (-b + sqrt (delta)) / (2 * a);
    else 
        return (- b - sqrt (delta)) / (2 * a);
}
int main (){
    int a, b, c, delta, x1, x2;
    scanf ("%d%d%d", &a, &b, &c);

    if (a == 0){
        printf ("nao eh equacao de 2 grau");
    }
    else {
        delta = pow(b,2) - (4 * a * c);
        
        if (delta < 0){
            printf ("nao existe raizes reais");
        }
        else {
        
         x1 =   calculaRaizes (a, b, delta, 1);
         x2 =   calculaRaizes (a, b, delta, -1);
            printf (" x1 = %d\n x2 = %d\n", x1, x2);
        }
    }
    return 0;

}