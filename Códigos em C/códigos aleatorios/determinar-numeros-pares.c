#include <stdio.h>

int main (){
    int n;

        for (n = 1; n < 20; n++){
            if (n % 2 != 2){
                continue;
            }
            printf ("%d", n);
        }
    return 0;
}