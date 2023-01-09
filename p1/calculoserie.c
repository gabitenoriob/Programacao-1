#include <stdio.h>
#include <math.h>

float serie(int i,int n, float soma, float numerador1, float denominador1, float numerador2, float denominador2)
{

    
    if(i > n)
    {
    if(n != 3)
    {
        soma += 1.00;
    }

        printf("S: %0.2f", soma);
        return 0;
    }
    else
    {
        if(i % 2 != 0)
        {

        soma += (numerador2 / denominador2);
    numerador2 = i + 2;
    denominador2 = pow(denominador2, i + 1);
        serie(i + 1,n,soma,numerador1,denominador1,numerador2,denominador2);
        }

        else
        {

        soma += numerador1 / denominador1 ;
    numerador1 = pow(numerador1, i +1);
    denominador1 = denominador1 + 3;
        serie(i + 1,n,soma,numerador1,denominador1,numerador2,denominador2);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1)
    {
         printf("S: 1.00");
    }
    else
    {
       serie(0,n,0,0,0,0,0);
       return 0;
    }
    

}