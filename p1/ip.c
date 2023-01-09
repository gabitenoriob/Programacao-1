#include <stdio.h>
#include <math.h>

int calculadora(int ip[],int i)
{
    if (i == 8) //p calcular o ip tem q avaliar todos os 8 elementos do array de 0 a 7
    {
        return 0;
    }
    
    int multiplicaodor;
    if (ip[i] == 1)
    {
        multiplicaodor = 7 - i; // multiplicador de 0 = 7 de 1 = 6 , isso tem na questao 
    }
    else
    {
        multiplicaodor = 0; // o bit for 0 n conta nd
    }

    return ip[i] * pow(2,multiplicaodor) + calculadora(ip, i + 1); // o resultado é uma soma dos ip * 2^ 7 - posicao + o proximo


}
int ler(int ip[], int linhas,int i)
{
    if(linhas == 5) //leu todas as linhas parou
    {
        return 0;
    }

    if (i < 8) //lendo todos os 8 elementos
    {
        scanf("%d", &ip[i]); 
        return ler(ip,linhas, i + 1);
    }

    if(linhas < 5)
    {
    
        if(linhas != 4) //calculando o ip mas como o ultimo n tem . final fizemos essa cond
        {
         printf("%d.", calculadora(ip,0));
        }
        else
        {
        printf("%d\n", calculadora(ip,0));
        }
    }

   ler(ip,linhas + 1,0);

}
int main()
{
    int ip[8]; //um inteiro c 8 elemenos vai ser dado (0 a 7)

    ler(ip,1,0); // vai ler esses arrays, q estao em  4 linhas
    return 0; 
    

}