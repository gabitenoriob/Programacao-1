#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primos(int n,int contador)
{
    if(n == contador)
    {
        return 1;
    }
    else if(n % contador == 0 || n < 2)
    {
        return 0;
    }
    else
    {
        primos(n,contador + 1);// se for menor q 2 ou 2 desconsidera e retorna fazendo dnv
    }
}
void recursao()//void pq n retorna nada so serve de ponte 
{
    int n;
    scanf("%d", &n);
    
    if(n == -1)//parada
    {
        return 0;
    }
    else 
    {
        printf("%d\n", primos(n,2));//chamando e ao mesmo tempo printando a funcao q faz a conta matematica
        recursao();//se chamando p proximo numero
    }
}
int main() //chamando a funcao q vai fazer a recursao, pode chamar vazio e criar o n la nela
{
    recursao();
	return 0;
}