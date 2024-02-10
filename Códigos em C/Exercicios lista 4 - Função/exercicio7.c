#include <stdio.h>

int maior2(int x, int y){
    if (x > y){
        return x;
    }
    else {
        return y;
    }
}

int main (){
    int x, y;
    scanf ("%d%d", &x, &y);
    int resultado = maior2 (x, y);
    printf ("Maior numero = %d\n", resultado);
    return 0;
}