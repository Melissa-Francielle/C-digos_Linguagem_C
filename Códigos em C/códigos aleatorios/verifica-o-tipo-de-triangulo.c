#include <stdio.h>

int main (){
    int a, b, c;

    printf ("digite os valores a, b, c: ");
    scanf ("%d%d%d", &a, &b, &c);

        if (a == b && b == c){
            printf ("equilatero");
        }
        else if (a == b || b == c || c == a){
            printf ("isosceles");
        }
        else {
            printf ("escaleno");
        }
    
    return 0;
}