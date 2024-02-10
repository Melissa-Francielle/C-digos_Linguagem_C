#include <stdio.h>

int main (){
    int codigo, quantidade;
    float preco, desconto, valorPagar;

    printf ("entre com o codigo e a quantidade do produto: \n");
    scanf ("%d%d", &codigo, &quantidade);

    switch (codigo) {
        case 1: preco = 5.30; break;
        case 2: preco = 6.00; break;
        case 3: preco = 3.2; break;
        case 4: preco = 2.5; break;
        default: break;
    }
    valorPagar = quantidade * preco;

        if (quantidade >= 15 || valorPagar >= 40){
            desconto = valorPagar * 0.15;
            valorPagar = valorPagar * desconto;

        }
        printf ("%.2f\n", valorPagar);

        return 0;
    
}