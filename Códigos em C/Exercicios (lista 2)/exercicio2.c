#include <stdio.h>

int main (){
    float a, b, c, media;
   float total = 0;
   media = (a+b+c)/3;

   scanf("%f%f%f", &a, &b, &c);
   if (a > media){
    total++;
   }
   if (b > media){
    total++;
   }
   if (c > media){
    total++;
   }
   printf ("total: %f", total);
   return 0;
}