//No programa a seguir queremos ler o conteudo da variavel x
//usando o ponteiro p. Analise o codigo manualmente e verifique
//se ele funciona, justificando sua resposta. No caso de nao
//funcionar, corrija-o de modo a produzir o resultado pretendido

#include <stdio.h>

int main (){
    int x; 
    int *p = &x;
    //scanf de *p nao tem como funcionar, para funcionar seria necessario 
    //utilizar o "scanf("%d", p)"; 
    scanf("%d", *p);
    printf ("%d", x);

    return 0;
}