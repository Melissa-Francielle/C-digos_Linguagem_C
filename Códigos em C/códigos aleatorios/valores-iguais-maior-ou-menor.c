#include <stdio.h>

int main (){
    int x, y;

    printf ("digite valores para x e y: ");
    scanf ("%d%d", &x, &y);

        if (!x == y || y == x){
            printf ("nao pode valores iguais");
        }
        if (x > y){
            printf ("este numero %d eh maior que esse numero %d", x, y);

        }
        else if (y > x){
            printf ("este numero %d eh maior que esse numero %d", y, x);
        }
    return 0;
}