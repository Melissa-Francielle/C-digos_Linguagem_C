// 10. Faça um programa receba a idade de várias pessoas, contabilize e
// e mostre o total de pessoas com menos de 18 anos e o total com mais de 30 anos 

#include <stdio.h>

int main (){
    int idade, quantidade, countMenor, countMaior;
    countMenor = 0;
    countMaior = 0;

        do {
        printf ("\nentre com a idade das pessoas: ");
        scanf ("%d", &idade);
            if (idade >=1 ){
                if (idade < 18){
                countMenor++;
                } 
                else if (idade > 30){
                countMaior++;
                }
            }
        } while (idade != 0);
           printf ("total de pessoas com menos de 18 = %d\n", countMenor);
           printf ("total de pessoas com mais de 30 = %d\n", countMaior);
    return 0;
}