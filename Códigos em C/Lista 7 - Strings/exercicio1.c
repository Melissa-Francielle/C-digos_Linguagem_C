#include <stdio.h>
#include <string.h>

int main (){
    char string[100], aux[100];
    int i, j;
    printf("Digite a frase:  ");
    fgets(string, 100, stdin);
       
    j = strlen(string)-1;
       
        for(i=0; string[i]!='\0'; i++){       
            aux[j]=string[i];
            j--;     
        }
       aux[i]='\0';      
       
       for (i = 0; string[i] != '\0'; i++){
            aux[j] = string[i];
       }
       printf("\n\tA frase original: \n%s\n", string);
       printf("\n\tA frase inversa: \n%s\n", aux);
}
