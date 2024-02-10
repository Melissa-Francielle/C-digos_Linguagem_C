#include <stdio.h>

int main (){
    int x, y, count;
    printf("digite valores: ");
    scanf ("%d%d", &x, &y);
    count = x + 1;

        while (count < y){
            printf ("%d\n", count);
            count++;
        }
    return 0;
}