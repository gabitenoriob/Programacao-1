#include <stdio.h>
int triangular(int n, int cont, int ok)
{

    if(n == cont || n + 1 == cont || n + 2 == cont && ok == 0 )
    {
        printf("Falso\n");
        return 0;
    }

    if(n == cont || n + 1 == cont || n + 2 == cont && ok == 1)
    {
        return 0;
    }
   
    else if (n * (n + 1) * (n + 2) == cont)
    {
        printf("%d * %d * %d = %d\nVerdadeiro\n", n, n +1, n +2, cont);
        ok++;
        
    }
    else
    {
    triangular(n + 1, cont,ok);
    }
    
    
    

}
int main()
{
    int n;
    scanf("%d", &n);
    triangular(0,n,0);

    

    

    
}