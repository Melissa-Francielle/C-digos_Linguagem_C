#include <stdio.h>

int main (){
    int multiplos, multiplicador, resultado;
    multiplicador = 7;
        for (multiplos = 1; multiplos <= 10; multiplos++){
            resultado = multiplicador * multiplos;
                printf ("\n%d * %d = %d\n", multiplicador, multiplos, resultado);
        }
    return 0;
}