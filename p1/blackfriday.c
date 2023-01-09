#include <stdio.h>
double ler(double antigo, double atual, double qntd,double cont)
{
    if(cont == 5)
    {
        return qntd;
       
    }
    else
    {
        scanf("%lf%lf", &antigo, &atual);

        if(atual <= antigo - (antigo * 0.2) )
        {
            ler(antigo,atual, qntd + 1, cont + 1);
        }
        else
        {

         ler(antigo,atual,qntd, cont + 1);
        }
        

    }
}
int main()
{
    double antigo, atual;
    printf("%.0lf", ler(antigo,atual,0,0));

    return 0; 
}