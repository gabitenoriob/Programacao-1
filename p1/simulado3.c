#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>



int main()
{
    int x;
    scanf("%d", &x);
    int p_x, p_y = 0;

   int n = sqrt(x);
   int tabuleiro[n][n];

   for(int i = 0; i < n; i++)
   {
    for(int j = 0; j < n; j++)
    {
        scanf("%d", &tabuleiro[i][j]);
    }
   }

    char dado[4];
    scanf("%s" ,dado);
    int jogadas;
    scanf("%d", &jogadas);

    //////////////////// assim ta certo so salvando dados
    int qnts;
    int qual;

    for(int i = 0; i < jogadas; i++)
    {
        scanf("%d %d", qnts, qual);
        if(dado[qual] == 'C'){p_x -= 1;
        if(tabuleiro[p_x][p_y] == 0){
            p_x += 1;
        }}
        if(dado[qual] == 'E'){p_y -= 1;
        if(tabuleiro[p_x][p_y] == 0){
            p_y += 1;
        }}
        if(dado[qual] == 'B'){p_x += 1;
        if(tabuleiro[p_x][p_y] == 0){
            p_x -= 1;
        }}
        if(dado[qual] == 'D'){p_y += 1;
        if(tabuleiro[p_x][p_y] == 0){
            p_y -= 1;
        }}
        
    }
    if(p_x == n - 1 && p_y == n-1)
    {
       printf("EU PASSEI EM P1"); 
    }
    else
    {
    printf("AINDA TENHO CHANCE NA REAV"); 
    }
   
   }