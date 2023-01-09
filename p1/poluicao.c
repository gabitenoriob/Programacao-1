#include <stdio.h>

double ler(int n, double resultado,int qntd)
{
    scanf("%d", &n);
    if(n == 999 && resultado == 0.00)
    {
        printf("0.00\n0");
        return 0;
    }
    else if(n == 999)
    {
        printf("%.2lf\n%d", resultado, qntd );
        return 0;
    }
    else
    {
        if(n > 2)
        {
            resultado += (n - 2) * 12.98;
            ler(n,resultado, qntd + 1);
        }
        else
        {
        ler(n,resultado,qntd);
        }

    }

    ler(n,resultado,qntd);
    
}
int main()
{
    int n;
    ler(n,0,0);
}