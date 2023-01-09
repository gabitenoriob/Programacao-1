#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitospares(int n)
{
    if ( n == 0)
    {
        return 0;
    }
    if (n % 2 == 0)// se for par vai somar 1 + quantos pares vinherem dps
    {
        return 1 + digitospares(n / 10);
    }
    else// se n for par vai chamar a função dnv ate ser ou ser 0
    {
        return digitospares(n / 10);
    }
}
int main() 
{
    int n;
    scanf("%d", &n);
    
   printf("%d", digitospares(n));//aqui já chamou a função ao mesmo tempo q printa o resultado, por so ter 1 função alem da main da no mesmo
}