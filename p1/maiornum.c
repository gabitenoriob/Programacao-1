#include <stdio.h>
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
    if (array[i] < array[i+1]) {
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
int ler (int array[ ], int i)
{
   scanf("%d", &array[i]);
   if(array[i] == 0)
   {
    ordenar(array,i);
   }
     ler (array, i+1);
}

int main()
{
   int array[100];
   ler(array,0);
   printf("%d", array[0]);
    return 0;
}