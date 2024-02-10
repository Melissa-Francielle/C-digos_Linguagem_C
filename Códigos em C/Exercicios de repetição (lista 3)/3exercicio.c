#include <stdio.h>

int main (){
    float S = 0;
    int num, din;
    num = din = 1;
        
        while (din <= 50){
            S = S + (float) num/din;
            num = num + 2;
            din++;
        }  
        printf ("\nS = %f\n", S);
    return 0;
}