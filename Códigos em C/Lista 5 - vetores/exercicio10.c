#include <stdio.h>
void multiplos (int vet[], int n){
    int i, count = 0;
        for(i=0; i<n; i++){
            if ( vet[i] % 7 == 0){
                printf ("%d\n", vet[i]);
            }
        }
}
int main (){
    int n, i;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    int vet[n];
        for (i = 0; i < n; i++){
            printf("Digite os numeros %d: ", i);
            scanf ("%d", &vet[i]);
        }
        printf ("\n\tVetor origianl\n");
        for (i = 0; i < n; i++){
            printf ("%d\n", vet[i]);
        }
    printf ("\n\tVetor multiplos de 7\n");
    multiplos (vet, n);
 return 0;
}