#include <stdio.h>
int repetidas(int array[], int n, int i, int somam, int somaj)
{
    if(i == n - 1)
    {
        if(array[i] % 2 == 0)
            {
                somaj += array[i];
            }
            else{
                somam += array[i];
            }

        
        if(somam> somaj)
        {
            printf("%d\n", somam);
        }
        else{
            printf("%d\n", somaj);
        }
    }
    else
    {
        if(array[i] != array[i + 1])
        {
            if(array[i] % 2 == 0)
            {
                somaj += array[i];
            }
            else{
                somam += array[i];
            }

            repetidas(array, n, i + 1, somam, somaj);
        }
        else
        {
            repetidas(array, n, i + 1, somam, somaj);
        }
    }
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

 if ( i==n-1)
  {
    
   return 0;
}
 else {
    if (array[i]>array[i+1])
     {
        swap(array,i);
     }
      
    bubble ( array, n, i+1);
}
}


int ordenar(int array[ ], int n)
{
  if (n==1)
  { 
   return 0;
  }
  else {
        bubble (array, n, 0);
        
        ordenar (array, n - 1);
    }
}
int figurinhas(int array[],int i, int n, int joao, int maria)
{
    if(i == n)
    {
        printf("%d\n%d\n",joao,maria);
        return 0;
    }
    else
    {
        if(array[i] % 2 == 0)
        {
            joao = joao + 1;
            figurinhas(array, i + 1, n, joao, maria);
        }
        else
        {
            maria = maria + 1;
            figurinhas(array, i + 1, n, joao, maria);   
        }
    }

}
int ler(int array[],int i, int n)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        scanf("%d", &array[i]);
        ler(array,i+1,n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    ler(array,0,n);
    figurinhas(array, 0,n, 0,0);
    ordenar(array,n);
    repetidas(array,n,0,0,0);

}
