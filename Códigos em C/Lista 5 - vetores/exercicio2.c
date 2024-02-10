#include <stdio.h>
int totalOcorrencia (int vet[], int n){
    int count = 0;
        for (int i = 0; i < n; i++){
            if (vet[i] == vet[n-1]){
             count++;
            }           
        }
    return count;
}
int main (){
    int n; 
    scanf ("%d", &n);
    int vet[n];

    int total = totalOcorrencia (vet, n);
    printf ("Repetidos: %d", total);
return 0;
}