#include <stdio.h>
#define MAX 2
struct jogo_registro {
    char characteres[20];
    int ID;
    int level;
    int vida; 
    int ataque;
    int defesa;
    char tipo[30];
};
void registro_do_jogo (struct jogo_registro *jg, int quantidade){
    int i;
        for (i = 0; i < quantidade; i++){
            printf("\nHeroi ou Monstro: ");
            fgets (jg[i].tipo, 30, stdin);
            printf ("\nDigite o nome dos personagens: ");
            fgets (jg[i].characteres, 20, stdin);
            printf ("\nDigite o ID do personagem: ");
            scanf ("%d", &jg[i].ID);
            setbuf(stdin, NULL);
            printf ("\nDigite o level do personagem: ");
            scanf("%d", &jg[i].level);
            setbuf(stdin, NULL);
            printf("\nQuando de HP o personagem tera: ");
            scanf("%d", &jg[i].vida);
            setbuf(stdin, NULL);
            printf("\nQual o poder de ataque: ");
            scanf("%d", &jg[i].ataque);
            setbuf(stdin, NULL);
            printf("\nQual o tamanho da defesa: ");
            scanf("%d", &jg[i].defesa);
            setbuf(stdin, NULL);
        }

    
}
void exibir_os_dados (struct jogo_registro *jg, int quantidade){
    int i;
        for (i = 0; i < quantidade; i++){
                printf("\n________________________\n");
                printf("\nTipo do personagem: %s\n", jg[i].tipo);
                printf ("Os nomes dos personagens: %s\n", jg[i].characteres);
                printf ("\nID ------ %d\n", jg[i].ID);
                printf ("\nLevel ------- %d\n", jg[i].level);
                printf("\nHP ------- %d ", jg[i].vida);
                printf("\nATK -------- %d", jg[i].ataque);
                printf("\nDF ---------- %d ", jg[i].defesa);
        }
}
int main (){
    struct jogo_registro jg[MAX];
    int quantidade;

    printf("\nDigite a quantidade de personagens que quer registrar: \n");
    scanf("%d", &quantidade);
    setbuf(stdin, NULL);
    printf("\n......Registre.....\n");
    registro_do_jogo (jg, quantidade);
    printf("\n.......DADOS........\n");
    exibir_os_dados (jg, quantidade);
}