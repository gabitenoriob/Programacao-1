#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int campo[n][n];
// lendo o campo de 0 e 1 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &campo[i][j]);
            //printf("%d", campo[i][j]);
        }
    }
// lendo posicao inicial 
    int luiza_z, luiza_k, and_x,and_y;
    scanf("%d%d%d%d", &luiza_z, &luiza_k, &and_x, &and_y);
    //printf("%d %d %d %d", luiza_z, luiza_k, and_x, and_y);

    int aziul = 0;
    int tiro_luizap = luiza_k - luiza_z;
    int tiro_luizas = luiza_k + luiza_z;


    while(i != and_x && j != and_y)
    {

    
    if(campo[luiza_z - 1][luiza_k - 1] == 1)
    {
        aziul++;
    }
    else
    {
        if(campo[luiza_z - 2][luiza_k - 2] == 1)
    {
        aziul++;
    }
    }
    
    if(campo[luiza_z - 1][luiza_k + 1] == 1)
    {
        aziul++;
    }
    else
    {
       if(campo[luiza_z - 2][luiza_k + 2] == 1)
    {
        aziul++;
    } 
    }
    if(campo[luiza_z + 1][luiza_k - 1] == 1)
    {
        aziul++;
    }
    else
    {
        if(campo[luiza_z + 2][luiza_k - 2] == 1)
    {
        aziul++;
    }
    }
    if(campo[luiza_z + 1][luiza_k + 1] == 1)
    {
        aziul++;
    }
    else
    {
        if(campo[luiza_z + 2][luiza_k + 2] == 1)
    {
        aziul++;
    }
    }
    
    
    }

    if(aziul >= 4)
    {
        printf("aziul matou 4\n");
    }
    else
    {
        printf("aziul matou %d\n", aziul);
    }

   int nosredna = 0;
    int tiro_andC = and_x - 1;
    int tiro_andB = and_x + 1;
    int tiro_andD = and_y + 1;
    int tiro_andE = and_y - 1;

    while(i != luiza_z && j != luiza_k)
    {
            if (campo[and_x - 1][and_y] == 1 ) // se o p cima q ele quer for 1 pode ir
            {
               nosredna++; // isso diminuira 1 no seu x inicial(i)

            }
        
            if (campo[and_x + 1][and_y] == 1) // p ver se ta saindo do tabuleiro ira comparar c as linhas p n ir a uma linha mt assim ou mt abaixo
            {
                nosredna++;
            }
        
            if (campo[and_x][and_y  + 1] == 1 )// p ver se n ta ultrappasando aos lados
            {
                nosredna++;
            }
        
            if (campo[and_x][and_y - 1] == 1) // as posicoes 0 a esquerda e nas linhas extremas sao 0 n pode ir
            {
                nosredna++;
            }
            i++;j++;
    }  
    if(nosredna >= 4)
    {
        printf("nosredna matou 4\n");
    }
    else
    {
        printf("nosredna matou %d\n", nosredna);
    }




}