#include <stdio.h>

int main (){
    int cargo;
    float salarioAtual, reajuste;

    printf ("cargo do funcionario: \n");
    scanf ("%d", &cargo);
    printf ("salario atual: \n");
    scanf ("%f", &salarioAtual);

    if (cargo == 1){
        reajuste = salarioAtual * 0.1;
    }
    else if (cargo == 2){
        reajuste = salarioAtual * 0.07;
    }
    else if (cargo == 3){
        reajuste = salarioAtual * 0.12;
    }
    else {
        reajuste = salarioAtual * 0.11;
    }
    printf ("valor do reajuste: %.2f\n", reajuste);
    printf ("salario atualizado: %.2f\n", salarioAtual + reajuste);
    return 0;
}