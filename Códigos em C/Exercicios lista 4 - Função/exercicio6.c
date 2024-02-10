#include <stdio.h>
float IMC (float peso, float altura){
    altura = altura / 100;
    peso = peso  / 1000;
    return peso /(altura * altura);

}
int main (){
    float peso, altura, resultado;

    printf ("Digite o peso: ");
    scanf ("%f", &peso);
    peso = peso * 1000;

    printf ("Digite a altura: ");
    scanf ("%f", &altura);
    altura = altura * 100;

    resultado = IMC (peso, altura);

        if (resultado < 18.5){
            printf ("Abaixo do peso");
        } 
        else if (resultado >= 18.5 && resultado <= 24.9){
            printf ("Peso normal");
        }
        else if (resultado >= 25 && resultado <= 29.9){
            printf ("Sobrepeso");
        }
        else {
            printf ("Obeso");
        }
}