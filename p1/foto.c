#include <stdio.h>

void swap(int array[], int i)//trocando de lugar
{
   int aux = array[i];
   array[i] = array[i+1];
   array[i+1] = aux;
   return;
}
int bubble (int array[ ], int n, int  i) 
{
 if ( i == n-1)// se tiver no indice 3 q é o maior indice ja q o indice vai de 0 a n - 1 para sort = percorre os indices
 {
    return  0;
 }  
 else 
 {
    if (array[i] > array[i+1])// se o array[i] for maior q o proximo eles trocam de lugar
    {
        swap(array,i);//swap = troca
    }
    bubble ( array, n, i+1); //chama p ver o outro indice se ta correto
}
}

int ordenar(int array[ ], int n) //ordenar = se n = 1 é pq todos os numeros a frente ja estao ordenados n tem mais oq fazer, ordenar = percorre o tamanho
{
  if (n==1) 
  {
    printf("%d\n%d\n%d\n%d\n", array[0], array[2], array[3], array[1]);
    return 0;
  }
  else
   {
        bubble (array, n, 0); // se n tiver ordenado chama a buuble = sort 
        ordenar (array, n - 1); //faz o msm  c o proximo n
    }
}

int ler (int array[ ], int i, int n)
{
 if (i==n) return 0;
 else{
   scanf("%d", &array[i]);
     ler (array, i+1, n);
}
}

int main ( ) 
{
 int array [4];
 ler (array, 0, 4);
 ordenar (array, 4);
}