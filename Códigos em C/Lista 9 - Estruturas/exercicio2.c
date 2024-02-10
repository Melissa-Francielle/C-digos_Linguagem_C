#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 100
struct calcula {
    int x1;
    int x2;
    int y1;
    int y2;
};
void valores(struct calcula *a, int tam){
    int i;
        for(i = 0; i < tam; i++){
            printf ("Digite os valor de x1: ");
            scanf ("%d", &a[i].x1);
            setbuf(stdin, NULL);
            printf ("\nDigite os valor de x2: ");
            scanf ("%d", &a[i].x2);
            setbuf(stdin, NULL);
            printf ("\nDigite os valor de y1: ");
            scanf ("%d", &a[i].y1);
            setbuf(stdin, NULL);
            printf ("\nDigite os valor de y2: ");
            scanf ("%d", &a[i].y2);
            setbuf(stdin, NULL);
        }
}
int resultado (struct calcula *a, int tam){
    int distancia, i;
        for(i = 0; i < tam; i++){
            distancia =(pow(a[i].x1, 2)-pow(a[i].x2, 2)) + (pow(a[i].y1, 2)-pow(a[i].y2, 2));
            sqrt(distancia);
            if (distancia == 0){
                printf ("\nNao existe! Tente novamente");
            }
        }
    return sqrt(distancia);
}
int main (){
    struct calcula a[1]; 

    setbuf(stdin, NULL);

    valores (a, 1);
    int distancia = resultado(a, 1);

    printf ("\nResultado da distancia entre ambos os pontos: %d\n", distancia);

}