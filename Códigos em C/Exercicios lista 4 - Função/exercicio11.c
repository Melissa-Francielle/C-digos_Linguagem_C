//11.Um sistema de radares foi instalada para multar os motoristas que excederem os 50kmh permitidos na principal
// avenida da cidade. Aquele sque excederem a velocidade, motoristas estiverem no máximo 10% acima do limite serão multados em R$230.
// Já os motoristas que excederem a velocidade permitida em até 20%. Serão multados em R$340. Por fim, caso o limite excedido pelo motoristas
// seja em mais de 20%, ele tera que pagar uma multa de R$19,28 por cada Km excedido. Para resolver o problema, implemente uma função que 
//receba como entrada a velocidade de um motorista e retorne o valor da multa que ele terá que pagar.


#include <stdio.h> 

int calculaMulta(int kmh){
    if (kmh <= 50){
        return 0.00;
    }
    else if (kmh <= 55){
        return 230.00;
    }
    else if (kmh <= 60){
        return 340.00;
    }
    else {
        return 340.00 + (kmh - 60)* 19.28;
    }
}
int main (){
    int kmh;

    printf ("digite uma velocidade: ");
    scanf ("%d", &kmh);

    int multa = calculaMulta(kmh);
    printf("\nMulta a se pagar eh de: %d", multa);
    return 0;
}
