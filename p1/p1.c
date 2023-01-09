#include <stdio.h>
int printarde(int nota[], int n, int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        if(i == 9)
        {
            printf("%d\n", nota[i]);
            printarde(nota,n, i + 1);
        }
        else
        {
            printf("%d ", nota[i]);
            printarde(nota,n,i + 1);
        }
    }
}
void swapd(int array[], int i)
{
   int aux = array[i];
   array[i] = array[i+1];
   array[i+1] = aux;
   return;
}
int bubbled (int array[ ], int n, int  i) 
{
 if ( i==n-1) {return 0;}
 else {
    if (array[i] < array[i+1]) {
        swapd(array,i);
      }
    bubbled ( array, n, i+1);
}
}

int ordenarde(int array[ ], int n)
{
  if (n==1) {return 0;}
  else {
        bubbled (array, n, 0);
        ordenarde (array, n - 1);
    }
}
int printarcres(int nota[], int n, int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        if(i == 9)
        {
            printf("%d\n", nota[i]);
            printarcres(nota,n, i + 1);
        }
        else
        {
            printf("%d ", nota[i]);
            printarcres(nota,n,i + 1);
        }
    }
}
void swapc(int array[], int i)
{
   int aux = array[i];
   array[i] = array[i+1];
   array[i+1] = aux;
   return;
}
int bubblec (int array[ ], int n, int  i) 
{
 if ( i==n-1) {return 0;}
 else {
    if (array[i]>array[i+1]) {
        swapc(array,i);
      }
    bubblec ( array, n, i+1);
}
}

int ordenarcres(int array[ ], int n)
{
  if (n==1) {return 0;}
  else {
        bubblec (array, n, 0);
        ordenarcres(array, n - 1);
    }
}
int ler_array( int notas[], int n, int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        scanf("%d", &notas[i]);
        ler_array(notas,n,i + 1);
    }
}
int loop(int rodadas, int i)
{
    if (i == rodadas + 1 ) 
    {
        return 0;
    }
    else
    {
        printf("turma %d:\n", i);
        int notas[10];
        ler_array(notas,10,0); //lendo o array

        ordenarcres(notas,10); // ordenação menor p maior
        printarcres(notas,10,0);
        ordenarde(notas,10); //ordenação maior p menor
        printarde(notas,10,0);//printa

        loop(rodadas, i + 1);
    }
    
}
int main()
{
    int rodadas;
    scanf("%d", &rodadas); //leu quantas turmas

    loop(rodadas,1); // loopar n rodadas/turma
}