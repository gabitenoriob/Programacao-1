#include <stdio.h>
int direita(int p[], int n, int i,int ip, int cont, int resul)
{
     if (cont == n - 2 && resul == 0)
    {
        printf("\nNao ocorreu nenhum desabamento a direita");
        return 0;
    }
    if (cont == n - 2 && resul != 0) //percorreu do 1 ate o penultimo 
    {
        return 0;
    }
    else
    {   
        if (ip == n - 1 && p[ip] < p[i])// comparando da direita p esquerda ate chegar no indice 0
        {
            if(resul == 0)
            {
                printf("\nDesabamento a direita:");
                printf(" %d ", i);
                direita(p,n,i + 1,i + 2,cont + 1,resul + 1);
            }
            else
            {
                printf("%d ", i);
                direita(p,n,i + 1,i + 2,cont + 1,resul + 1);
            }

          
        }
        else if(p[ip] < p[i] && ip != n )
        {
            direita(p,n,i,ip + 1, cont ,resul); 
        }
        else
        {
            direita(p,n,i + 1,i + 2,cont + 1, resul);
        }
        
    }
    

}
int esquerda(int p[], int n, int i,int ip, int cont, int resul)
{
    if (cont == n - 2 && resul == 0)
    {
        printf("Nao ocorreu nenhum desabamento a esquerda");
        return 0;
    }
    if (cont == n - 2 && resul != 0) //percorreu do 1 ate o penultimo 
    {
        return 0;
    }
    else
    {   
        if (ip == i)// comparando da direita p esquerda ate chegar no indice 0
        {
            if(resul == 0)
            {
                printf("Desabamento a esquerda:");
                printf(" %d ", i);
                esquerda(p,n,i + 1,0,cont + 1,resul + 1);

            }
            else
            {
                printf("%d ", i);
                esquerda(p,n,i + 1,0,cont + 1,resul + 1);
            }

           
        }
        else if(p[ip] < p[i] && ip != i)
        {
            esquerda(p,n,i,ip + 1, cont,resul); 
        }
        else
        {
            esquerda(p,n,i +1,0,cont + 1, resul);
        }
        
    }
    
}
void scanf_p(int p[], int n, int i)
{
    if(i == n)
    {
        return;
    }
    else
    {
        scanf("%d", &p[i]);
        scanf_p(p,n,i + 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int p[n];
    scanf_p(p,n,0);

    if(n == 1 || n == 0)
    {
        printf("Nao ocorreu nenhum desabamento a esquerda\nNao ocorreu nenhum desabamento a direita");
    }
    else
    {
    esquerda(p,n,1,0,0,0); // ver pela esquerda come?a comparando o 1 com o 0
    direita(p,n,1,2,0,0); // ver pela direita coem?a comparando o  n - 2(penultimo) c o ultimo(n - 1)
    }
}
