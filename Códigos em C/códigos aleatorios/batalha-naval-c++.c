#include <stdio.h>
#include <stdlib.h>

void inicializa_tabuleiro(int tabuleiro[][5]){
    int l, c;
        for(l=0 ; l < 5 ; l++ )
            for(c=0 ; c < 5 ; c++ )
                tabuleiro[l][c]=-1;
}

void mostra_tabuleiro(int tabuleiro[][5]){

    int l, c;

    printf("\t1 \t2 \t3 \t4 \t5");
    printf("\n");

        for(l=0 ; l < 5 ; l++ ){
            printf("%d",l+1);
            for(c=0 ; c < 5 ; c++ ){
                if(tabuleiro[l][c]==-1){
                    printf("\t~");
                }
                else if(tabuleiro[l][c]==0){
                    printf("\t*");
                }
                else if(tabuleiro[l][c]==1){
                    printf("\tX");
                }
            }
        printf("\n");
    }

}

void inicia_navios(int navios[][2]){
        int navio, anterior;

        for(navio=0 ; navio < 3 ; navio++){
            navios[navio][0]= rand()%5;
            navios[navio][1]= rand()%5;

            for(anterior=0 ; anterior < navio ; anterior++){
                if( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1]) )
                    do{
                        navios[navio][0]= rand()%5;
                        navios[navio][1]= rand()%5;
                    }while( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1]) );
            }

        }
    }

void dar_tiro(int tiro[2]){

        printf("Linha: ");
        scanf("%d",&tiro[0]);
        tiro[0]--;

        printf("Coluna: ");
        scanf("%d",&tiro[1]);
        tiro[1]--;

}

int acertou(int tiro[2], int navios[][2]){
    int navio;

        for(navio=0 ; navio < 3 ; navio++){
            if( tiro[0]==navios[navio][0] && tiro[1]==navios[navio][1]){
                printf("Voce acertou o tiro (%d,%d)\n",tiro[0]+1,tiro[1]+1);
                return 1;
            }
        }
        return 0;
    }

void dica(int tiro[2], int navios[][2], int tentativa){
        int linha=0,
            coluna=0,
            fila;

        for(fila=0 ; fila < 3 ; fila++){
            if(navios[fila][0]==tiro[0])
                linha++;
            if(navios[fila][1]==tiro[1])
                coluna++;
        }

        printf("\nDica %d: \nlinha %d -> %d navios\ncoluna %d -> %d navios\n",tentativa,tiro[0]+1,linha,tiro[1]+1,coluna);
}

void altera_tabuleiro(int tiro[2], int navios[][2], int tabuleiro[][5]){
        if(acertou(tiro,navios))
            tabuleiro[tiro[0]][tiro[1]]=1;
        else
            tabuleiro[tiro[0]][tiro[1]]=0;
    }

int main() {
        int tabuleiro[5][5];
        int navios[3][2];
        int tiro[2];
        int tentativas=0,
            acertos=0;

        inicializa_tabuleiro(tabuleiro);
        inicia_navios(navios);

        printf("\n");

        do{
            mostra_tabuleiro(tabuleiro);
            dar_tiro(tiro);
            tentativas++;

            if(acertou(tiro,navios)){
                dica(tiro,navios,tentativas);
                acertos++;
            }
            else
                dica(tiro,navios,tentativas);

            altera_tabuleiro(tiro,navios,tabuleiro);


        }while(acertos!=3);

        printf("\n\n\nJogo terminado. Voce acertou os 3 navios em %d tentativas", tentativas);
         mostra_tabuleiro(tabuleiro);
    }

