#include <stdio.h>

int main (){
    float media, nota1, nota2, nota3, nota4;

    printf ("De o valor das notas: ");
    scanf ("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4 ;

    printf ("A media total: %f\n", media);
    return 0;
}