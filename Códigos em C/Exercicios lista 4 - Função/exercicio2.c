#include <math.h>
#include <stdio.h>
float calculaDelta (float a, float b, float c){
    return pow(b, 2) - (4 * a * c);
}
float calculaX1 (float a, float b, float delta){
    return (-b + sqrt (delta)) / (2 * a);
}
float calculaX2 (float a, float b, float delta){
    return (-b - sqrt (delta)) / (2 * a);
}

int main (){
    int a, b, c, delta, x1, x2;
    scanf ("%d%d%d", &a, &b, &c);

    if (a == 0){
        printf ("nao eh equacao de 2 grau");
    }
    else {
        delta = calculaDelta(a, b, c);
        
        if (delta < 0){
            printf ("nao existe raizes reais");
        }
        else {
        
         x1 =  calculaX1 (a, b, delta);
         x2 =  calculaX2 (a, b, delta);
            printf (" x1 = %d\n x2 = %d\n", x1, x2);
        }
    }
    return 0;

}