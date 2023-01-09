#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int loop(int x, int y, int cont, int acumulador, int z)
{
    if(acumulador >= y + 1)
    {
        printf("\n");
        return 0;
    }
    
    if(acumulador != y + 1 && cont != x)
    {
        printf("%d ", acumulador);
    }

    if(acumulador != y + 1 && cont == x)
    {
        printf("%d", acumulador);
        printf("\n");
        cont = 0;
       
    }
   
    
    loop(x,y,cont + 1, acumulador + z,z);
}
int main() 
{
    int x, y,z;
    scanf("%d%d%d", &x, &y, &z);
    loop(x,y,1,1,z);
	return 0;
}