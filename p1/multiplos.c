#include <stdio.h>

int recursao(int n, int a, int b, int contador,int c2)
{
   
    int multiplos;
    multiplos = contador * n;

    if(multiplos > b && c2 == 0)//qnd passa do limite antes de começar 
    {
        printf("INEXISTENTE\n");
    }
    else if(multiplos >= a && multiplos <= b)// 1 * n, 2 * n...
    {
         printf("%d\n", multiplos);
         c2 ++;
         contador ++;
          recursao(n, a , b,contador,c2);
        
    }
    else if(multiplos < a && multiplos < b)// quando é 0 * n
    {
        
        contador ++;
        recursao(n, a , b,contador,c2);
    }

}
int main()

{
    int n;
    scanf("%d", &n);
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);

    int contador = 0;
    int c2 = 0;

    recursao(n,a,b,contador,c2);
	return 0;
}