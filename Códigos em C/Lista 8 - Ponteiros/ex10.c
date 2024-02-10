//Indique quais as saidas produzidas pelo programa a seguir. Faca
//a analise manual de cada instrucao e verifique os resultados. 
//Depois, voce pode executar o codigo comparando os resultados.
#include <stdio.h>

int main (){
    int x, y= 0;
    int *p = &y;
    x = *p;
    x = 10;
    (*p)++;
    x--;
    //A saida de *p eh 1, ja que ele esta apontando para y que vale 0 e esta sendo incrementado depois.
    printf("%d\n", *p);
    //*p + x, ou seja, x que vale 10 vai somar mais 1 a variavel apontada vai receber o resultado;
    (*p) += x;
    //Saida de y eh 10
    printf("%d\n", y);
    //0
    printf ("%d\n", &x == p);

    return 0;
}