#include <stdio.h>
#define TAM 50
int main (){
    float vet[TAM];
    float salario2, salario3, salario4, salario5;
    int i;

        for (i = 0; i < TAM; i++){
            printf ("\nDigite o salario do funcionario %d: ", i);
            scanf ("%f", &vet[i]);

            if (vet[i] <= 1904){
                printf ("\nISENTO");
            }
            else if (1904 < vet[i] && vet[i] <= 2827){
                salario2 = vet[i] * (1*7.5);
                printf ("\nO valor da aliquota desse funcionario eh %f\n", salario2);
            }
            else if (2827 < vet[i] && vet[i] <= 3751){
                salario3 = vet[i] * (1*15);
                printf ("\nO valor da aliquota desse funcionario eh %f\n", salario3);
            }
            else if (3751 < vet[i] && vet[i] <= 4665){
                salario4 = vet[i] * (1*22.5);
                printf ("\nO o valor da aliquota desse funcionario eh %f\n", salario4);
            }
            else {
                salario5 = vet[i] * (1*27.5);
                printf ("\nO valor da aliquota desse funcionario eh %f\n", salario5);
            }
        }
    return 0;
}