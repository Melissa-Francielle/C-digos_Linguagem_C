#include <stdio.h>

int main (){
    int codFuncionario, horasTrabalhadas;
    float valorHora, resultado;
    printf ("digite o codigo do funcionario:");
    scanf ("%d", &codFuncionario);

    printf ("digite as horas trabalhadas:");
    scanf ("%d", &horasTrabalhadas);
  
    printf ("digite o valor da hora:");
    scanf ("%f", &valorHora);

    resultado = horasTrabalhadas * valorHora;

    printf ("cod. funcionario: %d", codFuncionario);
    printf (", valor a receber: R$%f", resultado);

    return 0;
}