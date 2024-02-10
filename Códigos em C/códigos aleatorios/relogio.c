#include <stdio.h>

int main (){
    int valorHoras, minutos;
    
    printf ("digite valor de horas:  ");
    scanf ("%f", &valorHoras);

    minutos = (valorHoras*60);

    printf ("Desde o inicio do dia se passaram %d minutos", minutos);
}