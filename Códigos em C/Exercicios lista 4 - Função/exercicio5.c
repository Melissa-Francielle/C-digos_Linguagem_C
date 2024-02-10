#include <stdio.h>

float mediaAritimetica (float n1, float n2){
    return (n1 + n2)/2;
}
float mediaPonderada (float n1, float n2){
    return (n1 * 3 + n2 * 2)/5;
}
float mediaHarmonica (float n1, float n2){
    return 2/1/n1+1/n2;
}
int main(){
    float n1, n2;
    float resultado1, resultado2, resultado3;
    int a, p, h;

    printf ("Digite valores das notas: ");
    scanf ("%f%f", &n1, &n2);

    printf ("Escolha uma das opcao <a, p, h>: ");
    scanf ("%d%d%d", &a, &p, &h);

        if (a){
            resultado1 = mediaAritimetica(n1, n2);
            printf ("\nResultado = %f", resultado1);
        }
        else if (p){
            resultado2 = mediaPonderada(n1, n2);
            printf ("\nResultado = %f", resultado2);
        }
        else if (h){
            resultado3 = mediaHarmonica(n1, n2);
            printf ("\nResultado = %f", resultado3);
        }
    return 0;
}