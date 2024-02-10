#include <stdio.h>
#include <string.h>
 
int main() {
 
    char str[100];
    int i, j, tam;
 
    printf ("Digite a frase: ");
    fgets(str, 100, stdin);
 
    tam = strlen(str);
 
    printf("\n\tVertical\n");
        for (i = 0; i < tam -1; i++){
            printf("%c\n", str[i]);
        }
    printf ("\n\tVertical em escada:\n");
        for (i=0; i < tam; i++){
            for (j=0; j < i; j++){
            printf("%c", str[j]);
            }
            printf("\n");
        }
    printf("\n\tVertical em escada ao contrario");
        for (i = tam; i >0; i--){
            for (j = 0; j < i;j++){
                 printf("%c", str[j]);
            }
            printf("\n");
        }
}