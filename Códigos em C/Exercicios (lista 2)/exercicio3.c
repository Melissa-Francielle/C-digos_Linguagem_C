#include <math.h>
#include <stdio.h>

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
        
         x1 =   (-b + sqrt (delta)) / (2 * a);
         x2 =   (- b - sqrt (delta)) / (2 * a);
            printf (" x1 = %d\n x2 = %d\n", x1, x2);
        }
    }
    return 0;

}