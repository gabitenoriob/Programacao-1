#include <stdio.h>
double ordem(int ninjas[], int n, int vezes,int energia,double pontos)
{
    if(vezes == n)
    {
        

        printf("Nível de energia: %d\n", energia);
        printf("%.2lf%%",pontos / n);
        if(energia > 20000)
        {
            printf("Marquinhos é o novo Mestre da Vila da Árvore!\n");
        }
        else
        {
            printf("Continue tentando!\n");
        }
    }
    else
    {
        int ini;
        scanf("%d", &ini);
        if(ninjas[ini] > energia)
        {
            ordem(ninjas,n,vezes + 1, energia,pontos);
        }
        else//igual ao menor
        {
            energia = energia + (energia - ninjas[ini]);
            ordem(ninjas,n,vezes +1 , energia,pontos + 1.00);
        }
    }
}
void ler(int ninjas[], int n, int i)
{
    if(i == n)
    {
        return ;
    }
    else
    {
        scanf("%d", &ninjas[i]);
        ler(ninjas,n,i + 1);
    }
}
int main()
{
    int energia;
    scanf("%d", &energia);
    int n;
    scanf ("%d", &n);
    int ninjas[n];
    ler(ninjas,n,0);
    ordem(ninjas,n,0,energia,0);
}