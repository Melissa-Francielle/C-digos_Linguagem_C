#include <stdio.h>

int main (){
    int idade;
    scanf ("%d", &idade);
     
        if (idade < 16){
            printf ("nao eh eleitor\n");
        }
        else if (idade >= 18 && idade <= 65){
            printf ("eh eleitor obrigatorio\n");
        }
        else {
            printf ("eh eleitor facultativo\n");
        }
    return 0;
}