//Na sequencia das instrucoes abaixo:

#include <stdio.h>

int main(){
    float f; 
    float *pf;
    pf = &f;
    scanf ("%f", pf);
    //(a) Temos um erro de sintaxe;
    //(b) Deveriamos esta usando &pf no scanf
    //(c) Nao efetuamos a leitura de f
    //(d) Efetuamos a leitura de f
    //(e) nenhuma das opçoes anteriores.

    //(d) Efetuamos a leitura de f, nesse caso o f eh o ponto pf
    // Nao ha erros de sintaxe e pf pode ser lido dessa forma no scanf, alem de ser valido para leitura.
    
}