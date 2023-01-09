#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef struct Peca{
    char tipo;
    char cor;
}xadrez;
int main()
{
    xadrez tabuleiro[8][8];
    int negras = 0;
    int brancas = 0;
    int vazias = 0;

    for(int i = 0; i< 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
           scanf("%c%c ", &tabuleiro[i][j].tipo, &tabuleiro[i][j].cor);
           if(tabuleiro[i][j].tipo == 'L')
           {
            vazias++;
           }
           else if (tabuleiro[i][j].cor == 'b')
           {
                if(tabuleiro[i][j].tipo == 'p'){brancas += 1;}
                if(tabuleiro[i][j].tipo == 'b'){brancas += 3;}
                if(tabuleiro[i][j].tipo == 'c'){brancas += 3;}
                if(tabuleiro[i][j].tipo == 't'){brancas += 8;}
                if(tabuleiro[i][j].tipo == 'd'){brancas += 9;}
                if(tabuleiro[i][j].tipo == 'r'){brancas += 0;}
           }
           else if(tabuleiro[i][j].cor == 'p')
           {
                if(tabuleiro[i][j].tipo == 'p'){negras += 1;}
                if(tabuleiro[i][j].tipo == 'b'){negras += 3;}
                if(tabuleiro[i][j].tipo == 'c'){negras += 3;}
                if(tabuleiro[i][j].tipo == 't'){negras += 8;}
                if(tabuleiro[i][j].tipo == 'd'){negras += 9;}
                if(tabuleiro[i][j].tipo == 'r'){negras += 0;}
           }
           
        }
        
    }

    if(negras > brancas)
    {
        printf("Negras");
    }
    else if( brancas > negras)
    {
        printf("Brancas");
    }
    else if(brancas == negras)
    {
        printf("Empate");
    }


}