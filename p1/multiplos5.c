#include <stdio.h>

int recursao(int a, int b, int contador,int resultado)
{
    int mult = a * contador;
    int mult2 = b * contador;

    if(mult2 >= 50 || mult >= 50)
    {
        printf("%d\n",resultado );
        return 0;
    }
    else if((mult) % b == 0 || (mult2) % a == 0)
    {
        if( (mult2) % a == 0 )
        {
        resultado++;
        }
        recursao( a,b,contador + 1, resultado);
    }

    else 
    {
        recursao( a,b,contador + 1, resultado);
    }

}
int main()

{

    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);

    if( (a < 50 && b < 50) && (a> 0 && b > 0))
    {
        recursao(a,b,1,0);
    }
    
    else
    {
        printf("0");
    }

	return 0;
}