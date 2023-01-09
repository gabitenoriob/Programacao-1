#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int fatorial(int n)//aqui faz a matematica do processo
{
    if ( n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n-1);
    }

}

void recursao(int n)//2) vem p ca e le o n e executa ate chegar no q se quer (fatorial) q é outra funcao q será chamada
{
     scanf("%d", &n);
    
    if (n == -1)
    {
    return 0;
        
    }
    else
    {
        printf("%d\n", fatorial(n)); 
        recursao(n);// chama a mesma funcao ,isso é recursao, p que faça isso c todos os n ate -1
    }
    

}


int main()//1)o programa começa aq e logo q recebe o valor n é chamado p recursao
{
    int n;
    recursao(n);
    
	return 0;
}