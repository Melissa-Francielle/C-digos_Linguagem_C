#include <stdio.h>

int main (){
    int a, b, c;
    printf ("digite valores para a, b, c: ");
    scanf ("%d%d%d", &a, &b, &c);

        if (a == b && b == c){
            printf ("1");
        }
        if (a != b && b != c){
            printf ("2");
        }
        else {
            printf ("3");
        }

}