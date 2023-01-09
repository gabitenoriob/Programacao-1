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

int ler (int array[ ], int i, int n)
{
 if (i==n){ return 0;}
 else{
   scanf("%d", &array[i]);
     ler (array, i+1, n);
}
}

int main ( ) {
 int n;
 scanf("%d", &n);
 int array [n];
 ler (array, 0, n);
 ordenar (array, n);
}