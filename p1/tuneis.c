#include <stdio.h>
int comparacao(int array[], int e)
{
    if(array[e] == -1)
    {
        return e;
    }
    else
    {
        comparacao(array, array[e]);
        
    }
}
int ler(int array, int n)
{
    if(scanf("%d", &array == EOF)
    {
        return 0;
    }
    else
    {
        scanf("%d", &array[n]);
        ler(array, n + 1);
    }
int main()
{
    int n; // qnts tuneis
    scanf("%d", &n);
    int array[n]; //tuneis de -1 a n 
    ler(array,0,n);
    int e; //posicao de inicio
    scanf("%d", &e);
    comparacao(array,e);
}