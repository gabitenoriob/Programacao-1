#include <stdio.h>
int ciclo(int num,int vezes)
{
    if(num == 1)
    {
        return vezes;
    }
    else
    {
    if(num % 2 == 0)
    {
        ciclo(num/2, vezes + 1);
    }
    else
    {
        ciclo((3 * num) + 1, vezes + 1);
    }

    }

}
int repeticao(int com, int fim, int vezes)
{

    if(com > fim)
    {  
        printf("%d\n", vezes);
        return 0;
    }
    else
    {
       int qntd = ciclo(com,1); //armazena o ciclo de cada uma  em qntd e vai comparando 
    if (qntd >= vezes)
    {
       vezes = qntd; // vezes sempre sera o maior ciclo
    }

    }
    repeticao(com + 1, fim, vezes);
}

void ler()
{
    int com,fim;
    if (scanf("%d", &com) == EOF)
    {
        return ;
    }
    else
    {
        scanf("%d", &fim);
        printf("%d %d ", com,fim);
        if(com > fim)
        {
            int aux = com;
            com = fim;
            fim = aux;
         
        }
        repeticao(com,fim,0);
        ler();
    }
    
}
int main()
{
    ler();
    return 0;
    

}