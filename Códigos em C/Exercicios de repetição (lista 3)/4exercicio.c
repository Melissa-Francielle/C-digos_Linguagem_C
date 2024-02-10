#include <stdio.h>
#include <math.h>

int main (){
    int n, b, h;
    n = 1;

        do{
            printf ("\nentre com um valor b e h: ");
            scanf ("%d%d", &b, &h);
            
            n = (b * h);
            printf ("\nArea correspondente: %d\n", n);
        } while (b > 0 && h > 0);
        printf ("reinicie o programa");

    return 0;
}