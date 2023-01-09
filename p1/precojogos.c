#include <stdio.h>

double comparacao(int n, int d, double p, int anos)
{
    if( anos == 3)
    {
        printf("R$%.2lf\n", p);
        return 0;
    }
    else
    {
        if(p <= 45)
        {
            printf(" R$45.00\n");
            return 0;
        }
        cont += 1;
        else if (d == 0 && p > 100 )
        {
            p -= p * 0.25;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 1 && p > 100 )
        {
            p -= p * 0.20;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 2 && p > 100 )
        {
            p -= p * 0.18;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 3 && p > 100 )
        {
            p -= p * 0.15;
            comparacao(n,d,p, anos + 1 );
        }
        else if (d == 4 && p > 100 )
        {
            p -= p * 0.12;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 5 && p > 100 )
        {
            p -= p * 0.10;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 0 && p <= 100  && p > 45)
        {
            p -= p * 0.125;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 1 && p <= 100 && p > 45 )
        {
            p -= p * 0.10;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 2 && p <= 100  && p > 45)
        {
            p -= p * 0.09;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 3 && p <= 100 && p > 45 )
        {
            p -= p * 0.075;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 4 && p <= 100  && p > 45)
        {
            p -= p * 0.06;
            comparacao(n,d,p, anos + 1);
        }
        else if (d == 5 && p <= 100  && p > 45)
        {
            p -= p * 0.05;
            comparacao(n,d,p, anos + 1);
        }
      

    }
}
double ler(int n, int cont)
{
    int d;
    double p;

    if(n == 0)
    {
        return 0;
    }
    else
    {
        scanf("%d%lf", &d, &p);
        cont += 1;
        printf("Jogo[%d] = ", cont);
        comparacao(n,d,p,0);
        ler(n - 1, cont);
    }
}
int main()
{
    int n;//qntd de jogos
    scanf("%d", &n);
    ler(n,0);

}
