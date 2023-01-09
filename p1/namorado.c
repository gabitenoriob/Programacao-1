#include <stdio.h>
int combinacoes(int  array[], int perfeito, int n,int a,int b)
{   
    if(a == n)
    {
        printf("NÃO");
    }
    else if(b == n)
    {
        b = a + 1;
        combinacoes(array,perfeito,n,a + 1,b );
    }
    else if(array[a] + array[b] == perfeito)
    {
        printf("SIM");

    }
    else
    {
        combinacoes(array,perfeito,n,a,b +1);
    }
}
int ler(int array[],int i, int n)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        scanf("%d", &array[i]);
        ler(array,i+1,n);
    }
}
int main()
{
    int n, perfeito;
    scanf("%d%d", &n, &perfeito);

    int array[n];
    ler(array,0,n);

    combinacoes(array,perfeito,n,0,1);
}