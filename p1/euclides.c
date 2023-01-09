#include <stdio.h>
int mdc(int x,int y)
{
    if( y == 0  )
    {
        return x ;
    }
    else 
    {
        return mdc(y, (x % y));
    }
}
void recursao(int n)
{
    int x,y;
    scanf("%d%d", &x, &y);
    if( n == 0)
    {
        return ;
    }
    else
    {
        printf("MDC(%d,%d) = %d\n",x,y, mdc(x,y));
        recursao(n - 1);
    }
}
    

int main()
{
    int n;
    scanf("%d", &n);
    
    recursao(n);
}