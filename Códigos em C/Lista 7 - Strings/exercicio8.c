#include <stdio.h>
#include <string.h>
void leString (char str[]){
    int i;
      for (i = 0; str[i] != '\0'; i++){
        fgets (str, sizeof(str), stdin);
    }
}
int totalOcorrencia (char str[], char caractere){
    int count = 0;
        for (int i =0; str[i] != '\0'; i++){
            if (caractere == str[i]){
                count++;
            }
        }
    return count;
}
int main(){
    char str[100], caractere;
    int total;

    leString(str);

    scanf("%c", &caractere);
    
    total = totalOcorrencia(str, caractere);

    printf ("\nO caractere %c parece %d vez(es)\n", caractere, total);

    return 0;

}