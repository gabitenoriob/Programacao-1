#include <stdio.h>
int ler_rodadas(int rodadas, int tab[], int jog, int cont)
{
    if(cont == rodadas + 1)
    {
        //parada
    }
    else
    {
        ler_dado(jog); //ler dado da partida jog vezes, 1 de cada jog e avançar
    }
}
int ler_tab(int tab[], int n, int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        scanf("%d", &tab[i]);
        ler_tab(tab,n,i + 1);
    }
}
int main()
{
    int num;//numero de casa do tabuleiro
    int jog;// numero de jogadores 
    int rodadas; 
    scanf("%d%d%d", &num, &jog, &rodadas);

    int tabuleiro[num]; //casas do tabuleiro
    ler_tab(tabuleiro,n,0);

    ler_rodadas(rodadas,tabuleiro,jog,0);


}