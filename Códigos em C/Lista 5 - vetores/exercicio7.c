#include <stdio.h>
int main (){
    int n;
    int i, count=0;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    int vet[n];

        for (i = 0; i < n; i++){
            printf("Entre com os valores %d: ", i);
            scanf ("%d", &vet[i]);
        }
    
        count = 1;
        for (i = 0; i < n; i++){
            if (vet [i] >= 10 && vet[i] <=50){
                printf ("%d\t", vet[i]);
            }
            else {
                count = count + 1;
            }
        }
    return 0;
}
