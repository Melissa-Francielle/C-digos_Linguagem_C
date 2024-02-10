#include <stdio.h>

int main (){
    float salarioMinimo, salarioPessoal;
    float divisao;
    
        printf ("Digite o salario minimo atual: ");
        scanf ("%f", &salarioMinimo);

        printf ("Digite o salario da pessoa atual: ");
        scanf ("%f", &salarioPessoal);

        divisao = salarioPessoal/salarioMinimo;
        printf ("O salario desse funcionario: %.2f\tessa pessoa recebe o total de %.1f, salarios Minimos", salarioPessoal, divisao);
    
    return 0;
}