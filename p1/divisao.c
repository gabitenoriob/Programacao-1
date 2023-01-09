#include <stdio.h>

int divisores(int n, int cont,int resultado)
{
    if(n == 0)
    {
        return resultado;
    }

    else if (cont % n == 0 && n % 3 == 0)
    {
       
        resultado++;

    }
  
    return divisores(n-1,cont,resultado);

}
int main()
{
    int n;
    scanf("%d", &n);

    int resultado = divisores(n,n,0);

    if(resultado == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else 
    {
        printf("%d",resultado);
        
    }

    







    return 0;
}