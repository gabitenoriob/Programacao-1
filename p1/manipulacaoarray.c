

#include <stdio.h>

void funcao(int a[]) // jeito n pratico
{
    
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    scanf("%d", &a[3]);
    scanf("%d", &a[4]);

    a[0] = a[0] * 2;
    a[1] = a[1] * 2;
    a[2] = a[2] * 2;
    a[3] = a[3] * 2;
    a[4] = a[4] * 2;
}


void ler_array_v2(int i, int n, int a[]) //jeito pratico de ler varias de uma vez, i = indice, smp q passa o arrray sem tamanho é bom por um indice
{
    if (i < n)
    {
        scanf("%d", &a[i]);
        ler_array_v2(i + 1, n, a);
    }
}
void imprimir( int i, int n, int a[])
{
    if (i < n)
    {
        printf("%d", a[i]);
        imprimir(i + 1, n, a);
    }
}

void imprimirtras( int i, int n, int a[])
{
    if (i < n)
    {
        imprimirtras(i + 1, n, a);
        printf("%d", a[i]);
    }
}
void imprimirpares( int i, int n, int a[]) 
{
    if (i < n)
    {
        if(a[i] % 2 == 0)
        {

        printf("%d", a[i]);

        }
        imprimirpares(i + 1, n, a);
    }
}
void imprimirimpares( int i, int n, int a[]) 
{
    if (i < n)
    {
        if(a[i] % 2 != 0)
        {

        printf("%d", 2 * a[i]);

        }
        imprimirimpares(i + 1, n, a);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    int array[n]; //criou um array q guarda n valores determinados na entrada ex: n = 2 ent ele quer array[2] = array[0] = 1 array[1] =2

  
    ler_array_v2(0, n, array);
    imprimir(0, n, array);
    imprimirtras(0, n, array);
    imprimirpares(0, n,array);
    imprimirimpares(0,n,array):

    

    return 0;
}

