#include <stdio.h>
int andares(int n, int c, int vezes, int pessoas)
{   
    if(vezes == n  && pessoas < c)
    {
       printf("N");
       return 0;
    }
    else
    {
        int saida,entrada;
        scanf("%d%d", &saida, &entrada);
        entrada += pessoas;
        if((entrada - saida) > c)
        {
            printf("S");
            return 0;
        }
        pessoas += entrada - saida;
        andares(n,c,vezes + 1, pessoas);
    }
}
int main()
{
    int n, c;
    scanf("%d%d", &n, &c);
    andares(n,c,0,0);
}