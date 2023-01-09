#include <stdio.h>
int procurar0(int b[], int n, int i)
{
        if(i == n  && b[n - 1] == 1)
        {
            return -1;
        }
        if(b[i] == 0)
        {
            return i;
        }
        else
        {
            procurar0(b,n,i + 1);
        }
}
int tocas(int a[], int b[], int n, int i, int antiga, int atual, int tocas)
{
    if(i ==  - 1)
    {
        printf("%d", tocas);
        return 0;
    }

    if(b[i] == 1) //ja foi nessa toca
    {
        if(atual > antiga)
        {
           antiga = atual;
        }

        atual = 0;
        tocas += 1;

        i = procurar0(b,n,0);

        tocas(a,b,n,i,antiga, atual, tocas);
    }
    else if(b[i] == 0)
    {
        b[i] = 1;
        i = a[i];
        atual += 1;
        tocas(a,b,n,i,antiga,atual);
    }
}
void ler_b(int b[], int n, int i)
{
    if(i == n)
    {
        return;
    }
    else
    {
        b[i] = 0;
        ler_b(b,n, i + 1);
    }
}
void ler_a(int a[], int n, int i)
{
    if(i == n)
    {
        return;
    }
    else
    {
        scanf("%d", &a[i]);
        ler_a(a,n, i + 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    ler_a(a,n,0);
    int b[]; 
    ler_b(b,n,0);
    tocas(a,b,n,0,0,0,0);


}