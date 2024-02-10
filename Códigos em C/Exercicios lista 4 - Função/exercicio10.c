//10.implemente uma função que receba como entrada um dia e um mes (1-12) e mostre o nome da estação correspondente.
//As quatro estações do ano varia de acordo com as seguintes datas:
//Privamera: 21 setembro até 20 dezembro;
//Verão: 21 dezembro até 20 março;
//Outono: 21 março até 20 junho;
// Inverno: 21 junho até 20 setembro;

#include <stdio.h>
int estacao (int mes, int dia){
    if ((mes == 10 || mes == 11) || (mes == 9 && dia >= 21) || (mes == 12 && dia <= 20)){
        printf ("Primavera");
    }
    else if ((mes == 1 || mes == 2)|| (mes == 12 && dia >=21) || (mes == 3 && dia <= 20)){
        printf ("Verao");
    }
    else if ((mes == 4 || mes == 5)|| (mes == 3 && dia >= 21)|| (mes == 6 && dia <= 20)){
        printf ("Outono");
    }
    else if ((mes == 7 || mes == 8)|| (mes == 6 && dia >= 21)|| (mes ==9 && dia <= 21)){
        printf ("Inverno");
    }
    return mes, dia;
}
int main (){
    int dia, mes, estacaoAno;
    dia != 32;
    mes != 13;
    
    printf ("digite um mes do ano: ");
    scanf ("%d", &mes);

    printf ("digite um dia: ");
    scanf ("%d", &dia);

    estacaoAno = estacao (mes, dia);
}