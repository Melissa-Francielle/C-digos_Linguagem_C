#include <stdio.h>

int totalBrinquedos (int idade, int altura, int n){
     if (idade >= 12 && altura >= 150){
        printf ("\nbarca viking\n");
    n = n + 1;
    }
    if (idade >= 14 && altura >= 140){
        printf ("\nelevator of death\n");
    n = n + 1;
    }
    if (idade >= 16 && altura >= 170){
        printf ("\nfinal killer\n");
    n = n + 1;
    }
    return n;
}
int main (){
    int idade, n, brinquedos;
    float altura;
    n = 0;
    printf ("digite uma idade: \n");
    scanf ("%d", &idade);

    printf ("digite uma altura: \n");
    scanf ("%f", &altura);
    altura = (altura*100);


    brinquedos = totalBrinquedos (idade, altura, n);
    printf ("\ntotal de brinquedos %d", brinquedos);
    return 0;
}