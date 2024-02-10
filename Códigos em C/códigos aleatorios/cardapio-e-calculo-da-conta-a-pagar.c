#include <stdio.h>

int main (){
    int codigo, quantidade;
    float preco, valorPagar;

    printf ("digite um codigo e uma quantidade de produto: ");
    scanf ("%d%d", &codigo, &quantidade);

        switch (codigo){
            case 1: preco = 5.30;
            break;
            case 2: preco = 6.00;
            break;
            case 3: preco = 3.20;
            break;
            case 4: preco = 2.50;
            break;
        default: break;
        }
        valorPagar = quantidade * preco;

        if (quantidade >= 15 || valorPagar >= 40){
            valorPagar = valorPagar * (valorPagar * 0.15);
        }
        printf ("total: %.2f", valorPagar);
}