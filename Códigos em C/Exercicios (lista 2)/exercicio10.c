#include <stdio.h>

int main (){
    int a, b, c;
    
    printf ("digite um valor a, b, c: \n");
    scanf ("%d%d%d", &a, &b, &c);

        if (a <= b && b <= c){
            printf ("a ordem descrescente: \t%d\t%d\t%d", c, b, a);
        }
        else if (a <= c && c <= b){
            printf ("a ordem decrescente: \t%d\t%d\t%d", b, c, a);
        }
        else if (b <= a && a <= c){
            printf ("a orden decrescente: \t%d\t%d\t%d", c, a, b);
        }
        else if (b <= c && c <= a){
            printf ("a ordem decrescente: \t%d\t%d\t%d", a, c, b);
        }
        else if (c <= a && a <= b){
            printf ("a ordem decrescente: \t%d\t%d\t%d", b, a, c);
        }
        else {
            printf ("a ordem decrescente: \t%d\t%d\t%d", a, b, c);
        }
    return 0;
}