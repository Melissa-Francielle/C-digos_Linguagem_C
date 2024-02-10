#include <stdio.h>


int main (){
    float salarioMinimo, valorSalario, quantidade;
    salarioMinimo = 1.212;
    
    printf("Digite um valor salario: ");
    scanf ("%f", &valorSalario);

    printf ("\nDigite o salario minimo: ");
    scanf ("%f", &salarioMinimo);

    quantidade = (salarioMinimo / valorSalario);
    

    printf ("Salario de uma pessoa: %.2f\n e o quantos salarios minimos ela ganha: %.1f", valorSalario, quantidade);
    


}