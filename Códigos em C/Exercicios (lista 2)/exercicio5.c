#include <stdio.h>

int main (){
    char tipo;
    float percurso, consumo;
    printf ("digite o tipo de carro <A, B ou C>: \n");
    scanf ("%c", &tipo);
    printf ("digite o percuso em KM: ");
    scanf ("%f", &percurso);

        switch (tipo){
            case 'A':
            consumo = percurso / 15;
            printf ("consumo estimado: %.2f", consumo);
            break;
            case 'B':
            consumo = percurso / 12;
            printf ("consumo estimado: %.2f", consumo);
            break;
            case 'C':
            consumo = percurso / 10;
            printf ("consumo estimado: %.2f", consumo);
            break;
        default: break;
        }
}