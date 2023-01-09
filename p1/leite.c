#include <stdio.h>
int primos(int n,int contador,int p1, int p2)
{
    if(n == contador)
    {
        return p1 + 0.05;
    }
    else if(n % contador == 0 || n < 2)
    {
        return 0;
    }
    else
    {
        primos(n,contador + 1);// se for menor q 2 ou 2 desconsidera e retorna fazendo dnv
    }
}
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
    int x;
    scanf("%d", &x);
    int p1,p2;
    scanf("%d%d", &p1, &p2);
    primos(x,0,p1,p2);

    printf("%d", p1);


    return 0;

}