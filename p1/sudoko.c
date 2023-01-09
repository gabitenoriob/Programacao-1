#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int verificar_colunas(jogo[9][9])
{
    int aux3[9][9] = {0};
      
        for(j= 0; j < 9; j++)
        {
            for( i = 0; i < 9; i++)
            {
            if(aux[jogo[i][j]] == 0  && i == 8 && j == 8)
            {
                return 1;
            }
            else if(aux3[i][j] == 1)
            {
                return 0;
            }
            else
            {
                aux3[i][j] = 1;
            }
            }
        }
}
int verificar_linhas(jogo[9][9])
{
    int aux2[9][9] = {0};
       
        for(i = 0; i < 9; i++)
        {
        
            for( j = 0; j < 9; j++)
            {
            if(aux[jogo[i][j]] == 0  && i == 8 && j == 8)
            {
                return 1;
            }
            else if(aux2[i][j] == 1)
            {
                return 0;
            }
            else
            {
                aux2[i][j] = 1;
            }
            }
        }
}
int verificar_blocos(jogo[9][9])
{
    int aux[9] = {0} ;//0 a 8
        for(int vezes = 1; vezes <= 9; vezes++) //9 vezes de 3x3 
        {
        for(i = 0;i < 3;i++)
        {
        for( j = 0; j < 3; j ++)
        {
            if(aux[jogo[i][j]] == 0 && vezes == 9 && i == 2 && j == 2)
            {
                return 1;
            }
            else if(aux[jogo[i][j]] == 1) //aux[2] == 1? nao
            {
                return 0;
            }
            else
            {
                aux[jogo[i][j]] = 1; //preenche c 1 p saber q ja passou o 2 por aq
            }
        }
        
        }
        }
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 9;
    int j = 9;
    int jogo[i][j];
    
    int validação = 0;

    for(int x = 1; x <= n; x ++)//rodadas
    {

        for(i = 0;i < 9;i++)
        {
        for( j = 0; j < 9; j ++)
        {
            scanf("%d", &jogo[i][j]);
        
        }
        }

        validação = verificar_blocos(jogo);
        if(validação == 0)
        {
            printf(""Instancia %d\nNao\n", x ");
        }
        else
        {
            validacao = verificar_linhas(jogo);
        }
        if(validação == 0)
        {
            printf(""Instancia %d\nNao\n", x ");
        }
        else
        {
            validação = verificar_colunas(jogo);
        }
        if(validação == 0)
        {
            printf(""Instancia %d\nNao\n", x ");
        }
        else
        {
            printf(""Instancia %d\nSim\n", x ");
        }
        
validação =  0;
}

}