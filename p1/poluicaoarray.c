#include <stdio.h>
double calculo(int array,double resultado, int qntd)
{
    
    if (n == 900)
    {
       printf("%.2lf\n%d", resultado, qntd);
    }
    else if(n > 2)
    {
        qntd++;
        return resultado += (n - 2) * 12.98;
        calculo(n,resultado,qntd);
    }
 
    calculo(n,resultado,qntd);
}
int ler(int array, int n)
{
    if(scanf("%d", &array == EOF)
    {
        calculo(array,0,0);
        return 0;
    }
    else
    {
        scanf("%d", &array[n]);
        ler(array, n + 1);
    }
}
int main()
{
    int array[n];
    ler(array,0);
}