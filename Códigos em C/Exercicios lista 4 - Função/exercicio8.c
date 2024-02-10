#include <stdio.h>

int maior2(int x, int y){
    if (x > y){
        return x;
    }
    else {
        return y;
    }
}
int maior3 (int x, int y, int z){
    return maior2 (maior2(x, y), z);
}
int main (){
    int x, y, z;
    scanf ("%d%d%d", &x, &y, &z);
    int resultado = maior3(x, y, z);
    printf ("Maior numero = %d\n", resultado);
    return 0;
}