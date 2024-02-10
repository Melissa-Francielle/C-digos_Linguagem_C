#include <stdio.h>
#include <math.h>
float media (float numeros[], int n){
    int i, soma = 0;
    float mediacalculo;
        for(i=0; i<n; i++){
            soma = soma + numeros[i];
        }
    mediacalculo = soma/n;
    return mediacalculo; 
}
float variancia (float numeros[], int n){
    int i, soma = 0;
    float s = 0, mediavariancia;
        for(i=0; i<n; i++){
         soma = soma + numeros[i];
        }
    mediavariancia = soma/n;
        for(i=0; i<n; i++){
        s += (numeros[i] - mediavariancia) * (numeros[i] - mediavariancia);
        }
        s = s/n;
    return s;
}
float desvioPadrao (float numeros[], int n){
    int i, soma = 0;
    float d = 0, mediadesvio;
        for (i = 0; i < n; i++){
            soma = soma + numeros[i];
        } 
    mediadesvio = soma / n;
        for (i = 1; i < n; i++){
            d = d + (numeros[i] - mediadesvio)*(numeros[i] - mediadesvio);
        }
        int desvio = sqrt (d/(n-1));
    return desvio;
}
float acimaMedia (float numeros[], int n){
    int i, quant = 0;
        for (i = 0; i < n; i++){
            if (numeros[i] > media(vet, n))
            ++quant;
        }
    return quant;
}
int main (){
    int n, i;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    float numeros[n];
        for (i =0; i < n; i++){
            printf ("Digite os valores: ");
            scanf ("%f", &numeros[i]);
        }
    float resultadoMedia = media (numeros, n);
    float resultadoVariancia = variancia (numeros, n);
    float resultadoDesvio = desvioPadrao (numeros, n);
    float resultadoacimaMedia = acimaMedia(numeros, n);
    printf ("Resultado da Media : %f\nresultado da variancia: %f\nresultado do desvio padrao: %f\nresultados acima da media: %f\n", resultadoMedia, resultadoVariancia, resultadoDesvio, resultadoacimaMedia);
}