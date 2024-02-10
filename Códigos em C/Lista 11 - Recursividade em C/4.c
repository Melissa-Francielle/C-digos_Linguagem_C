#include <stdio.h>
#include <stdlib.h>

int mult_soma (int x, int y){
    if (y == 0){
        return 0;
    }
    else if(y == 1){
        return x;
    }
    else if (y < 0){
        return x - mult_soma(x, 1-y);
    }
    else {
        return x + mult_soma(x, y-1);
    }
    
}
int main (){
    int x, y;
        printf("digite um valor para o multiplicador (x) e para o multiplicando (y) respectivamente: ");
        scanf("%d%d", &x, &y);

        printf("resultado: %d", mult_soma(x, y));
}