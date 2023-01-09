#include <stdio.h>
int verificar_resto(int matriz[3][3])
{
    int validop = 0;
    int validos = 0;
    for(int i = 0; i <= 3; i++)
    {
        for( int j = 0; j <=3; j++)
        {
            if(i != j && matriz[i][j] == 0)
            {
                validop++;
            }
            if(j != 2 - i && matriz[i][j] == 0)
            {
               validos++;
            }
            
        }
    }
    if(validop == 3 || validos == 3)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int verificar_diagonais(int matriz[3][3])
{
    int validop = 0;
    int validos = 0;
    for(int i = 0; i <= 3; i++)
    {
        for( int j = 0; j <=3; j++)
        {
            if(matriz[i][i] == 1)
            {
                validop++;
            }
            if(matriz[i][2 - i] == 1)
            {
               validos++;
            }
            
        }
    }
    if(validop == 3 || validos == 3)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int vidaL, vidaD;
    scanf("%d%d", &vidaL, &vidaD);
    int matrizL[3][3];
    int matrizD[3][3];
    

while (scanf("%d", matrizD[i][j]) != EOF)
{
    for(int i = 0; i <=3; i++ )
    {
        for(int j = 0; j <= 3; j ++)
        {
        scanf("%d",matrizL[i][j]);
        }
        
    }
    for(int i = 0; i <=3; i++ )
    {
        for(int j = 0; j <= 3; j ++)
        {

        scanf("%d",matrizD[i][j]);

        }
        
    }
int validoLD = verificar_diagonais(matrizL);
int validoDD = verificar_diagonais(matrizD);
int validoLR = verificar_resto(matrizL);
int validoDR = verificar_resto(matrizD);

if((validoDD == 1 && validoLD == 1) && (validoDR == 1 && validoLR == 1))
{
    printf("Houve empate.\n");
}
if((validoDD == 0 && validoLD == 0) && (validoDR == 0 && validoLR == 0))
{
    printf("Houve empate.\n");
}





}
    

}