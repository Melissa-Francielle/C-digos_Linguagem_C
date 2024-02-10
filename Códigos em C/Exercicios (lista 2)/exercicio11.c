#include <stdio.h>
#include <math.h>

int main (){
    int idade;
    float altura;
    printf ("digite uma idade: \n");
    scanf ("%d", &idade);

    printf ("digite uma altura: \n");
    scanf ("%f", &altura);
    altura = (altura*100);

    if (idade <= 12 && altura >= 150){
        printf ("barca viking");
    }
    else if (idade <= 14 && altura >= 140){
        printf ("elevator of death");
    }
    else if (idade <= 16 && altura >= 170){
        printf ("final killer");
    }
    else{
        printf ("nao ha brinquedos para a idade ou altura");
    }
    return 0;
}
