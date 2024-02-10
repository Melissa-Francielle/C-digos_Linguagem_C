#include <stdio.h>
#include <string.h>
int contarVogais(char string[]) {
    char vogais[] = "aeiouAEIOU";
    int numVogais = 0, k, j;

    for (k = 0; string[k] != '\0'; k++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == string[k]) {
                numVogais++;
            }
        }
    }

    return numVogais;
}
int main (){
    char string[100];
    int i, j;


    printf ("Digite a frase: ");
    fgets (string, 100, stdin);

    printf ("O total de vogais dentro da frase: ");
    int total = contarVogais(string);

    printf ("%d", total);
}