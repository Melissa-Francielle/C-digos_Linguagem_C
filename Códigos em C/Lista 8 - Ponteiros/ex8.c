//analise a sequencia de instrucoes a seguir

#include <stdio.h>
int main (){
    int x = 5, y = 10;
    int *p1 = &x;
    int *p2 = &y;

    //Quais expressões abaixo sao validas e quais nao sao validas?
    //Justifique sua resposta.

    //(A) y = p1 == p2;
    //(B)p1 += p2;
    //(C) x = (*p1) - (*p2);
    //(D) p1++;
    //(E) x = p1 || p2;

    //(a) - nao sao iguais os valores de p1 e p2 (NAO EH VALIDA)
    
    //(b) - Nao eh possivel somar dois endereços, apenas se forem os valores.(NAO EH VALIDA)

    //(c) - o x vale 5, e na questao diz que o valor de p1 que eh 5 menos
    // o valor de p2 que eh o valor de y que eh 10 = 5 o valor de x, entao sim eh valida. (VALIDA)
    
    //(d) - p1++ vai fazer com que o valor em p1 avance 4 valores; (Valida)
    //(e) - x vale 5 nesta expressao esta falando que x recebe ou p1 ou p2, seria invalido ja que x ja esta recebendo 5 e p1 ja esta definido com o ponteiro de x; (invalida)
}