#include <stdio.h>

int main (){
    int a, b, c;
    printf ("digite um valor a, b, c: \n");
    scanf ("%d%d%d", &a, &b, &c);

       if (a == b && b == c){
            printf ("1");
       }
       if (a != b && b != c){
            printf ("2");
       }
       if (a == b && b != c || c == a && a != b || c == b && b != a) {
        printf ("3");
       }
}