#include <stdio.h>
#include <string.h>
char ler_partida(char tabuleiro[3][3], int ler, int vitoriasg, int vitoriasp )
{   
    int pai,gab,gabd,paid= 0;
    for(int i = 0; i < 4; i ++)
    {

        for(int j = 0; j < 4; j ++)
        {
            if(tabuleiro[i][j] == "X" )
            {
                gab++;
            }
            if(tabuleiro[i][j] == "O")
            {
                pai++;
            }
        if(pai >= 3 && gab != pai)
        {
            printf("pai venceu essa partida");
            vitoriasp++;
            return 10;
        }
        if(gab >= 3 && pai != gab)
        {
            printf("gabrielly venceu essa partida");
            vitoriasg++;
            return 10;
        }
        if(gab == pai)
        {
            printf("empate");
            return 10;
        }
        }
        
        if(tabuleiro[i][i] == "X" )
        {
            gabd++;
        }
        if(tabuleiro[i][i] == "O")
        {
            paid++;
        }
    }
    if(paid >= 3 && gabd != paid)
        {
            printf("pai venceu essa partida");
            vitoriasp++;
            return 10;
        }
        if(gabd >= 3 && paid != gabd)
        {
            printf("gabrielly venceu essa partida");
            vitoriasg++;
            return 10;
        
        }
        if(gab == pai)
        {
            printf("empate");
            return 10;
         
        }
        else
        {
            return ler;
        }
}
int main()
{
    int continuar_parar = 1;
    int x_ou_o = 1;
    int leitura = 0;
    int vitorias_g = 0;
    int vitorias_p = 0;
    char x[1] = {"X"};
    char o[1] = {"O"};
    char trao[1] = {"-"};
    int ler = 0;

    while (continuar_parar != 0)
    {
        int i,j = 3;
        char tabuleiro[i][j];
        memset(tabuleiro,"-",9);
        

        
        while(leitura != 10)
        {
            
        
        if(x_ou_o % 2 != 0)
        {
            scanf("%d%d", &i,&j);
            strcpy(x,tabuleiro[i][j]);
        }
        else
        {
            scanf("%d%d", &i,&j);
           strcpy(o,tabuleiro[i][j]);
        }

        leitura = ler_partida(tabuleiro,ler,vitorias_g,vitorias_p);
            
        }

        x_ou_o++;
        scanf("%d",&continuar_parar);
        ler++;
    }


    if(vitorias_g > vitorias_p )
    {
        printf("gabrielly  foi a grande vencedora desse grande duelo");
    }
    else if(vitorias_g < vitorias_p)
    {
        printf("pai foi a grande vencedora desse grande duelo");
    }
    else
    {
        printf("esse grande duelo terminou em empate");
    }
}