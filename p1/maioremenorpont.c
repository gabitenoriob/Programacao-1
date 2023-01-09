#include <stdio.h>
void menor(int *q)
{
    printf("%d", *q);
    return;
}
void maior(int *p)
{
    printf("%d", *p);
    return;
}
void swap(int array[], int i)
{
   int aux = array[i];
   array[i] = array[i+1];
   array[i+1] = aux;
   return;
}
int bubble (int array[ ], int n, int  i) 
{
 if ( i==n-1) {return 0;}
 else {
    if (array[i]>array[i+1]) {
        swap(array,i);
      }
    bubble ( array, n, i+1);
}
}

int ordenar(int array[ ], int n)
{
  if (n==1) {return 0;}
  else {
        bubble (array, n, 0);
        ordenar (array, n - 1);
    }
}
void ler_array(int a[], int n, int i)
{
    if(i == 6)
    {
        return;
    }
    else
    {
        scanf("%d", &a[i]);
        ler_array(a,n,i + 1);
    }
}
int main()
{
    int a[6];
    ler_array(a,6,0);
    ordenar(a,6);
    maior(&a[5]);
    menor(&a[0]);
    return 0;
}