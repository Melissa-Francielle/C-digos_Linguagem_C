#include <stdio.h>

int main (){
    int m, n, x, y;
    int diferenca;
    scanf ("%d%d%d%d", &m, &n, &x, &y);

    diferenca = (m * n + x * y);

    printf ("diferenca =  %d", diferenca);
    return 0;
}