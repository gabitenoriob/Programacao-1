#include <stdio.h>
int somar(int m, int a[][m], int b[][m], int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0; j < m; j ++)
        {
            if(j != m - 1)
            {
            printf("%d ", a[i][j] + b [i][j]);
            }
            if(j == m - 1)
            {
                printf("%d\n",a[i][j] + b [i][j] );
            }
        }
    }

    return 0;
}
int main()
{
    int n,m;
    scanf("%d%d", &n, &m); //linhas coluna

    int a[n][m];
    int b[n][m];

    //iniciando a variavel ;enquanto for vdd executa; novo loop
    for(int i = 0;i < n;i++)
    {
        for(int j = 0; j < m; j ++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0;i < n;i++)
    //iniciando a variavel ;enquanto for vdd executa; novo loop
    {
        for(int j = 0; j < m; j ++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    somar(m,a,b,n); // sempre primeiro manda a coluna pq obrigatoriamente no parametro da funcao tem q delimitar qnts colunas


    //PARA LER PRIMEIRO TODAS AS COLUNAS DPS LINHAS, TIPO 1 VERTICAL 
    for(int j = 0;j < m;j++)
    //iniciando a variavel ;enquanto for vdd executa; novo loop
    {
        for(int i = 0; i < n; i ++)
        {
            scanf("%d", &a[i][j]);
        }
    }

}