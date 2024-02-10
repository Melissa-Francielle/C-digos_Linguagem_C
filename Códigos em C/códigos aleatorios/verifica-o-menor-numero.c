#include <stdio.h>

int main (){
    int a, b, c;
    printf ("digite valores para a, b, c: ");
    scanf ("%d%d%d", &a, &b, &c);

        if (a < b && a < c){
            printf ("O menor deles eh: %d\n", a);
        }
        else if (b < a && b < c ){
            printf ("o menor deles eh: %d\n", b);
        }
        else {
            printf ("o menor deles eh: %d\n", c);
        }

}