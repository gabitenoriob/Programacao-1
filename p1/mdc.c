#include <stdio.h>
int mdc(int x,int y)
{
    scanf("%d%d", &x, &y);
    if( y == 0)
    {
        return x;
    }
    else 
    {
        return mdc(y, (x % y));
    }
}

    

int main()
{
    int x,y;
    printf("%d\n", mdc(x,y));
}