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
int qual_maior(int maiores[], int tam)
{
    ordenar(maiores,tam);
    printf("%d", maiores[tam - 1]);
    return 0;
}
int verificar_sequencia(int bits[], int n, int i, int maior)
{// 0 0 0 1 0 1 0 0 , 8, 0 , 0
//8, 1, 0
//8, 2 , 0
//8, 3, 1
//8, 4 , 2
// 8, 5, 3
// 8, 6, 4
// 8, 7 , 4 + 1 = 5
    if(i == n - 1)
    {
        //printf("%d", maior);
        return maior + 1;
    }
    else
    {
        if (bits[i] != bits[i + 1])
        {
            verificar_sequencia(bits,n,i + 1,maior + 1);
        }
        else
        {
            verificar_sequencia(bits,n,i + 1,0);
        }
        
    }
}
int ler_array(int bits[], int n , int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        scanf("%d", &bits[i]);
        ler_array(bits,n,i +1);
    }
}
int ler(int rodadas, int i, int aux, int maiores[])
{
    int tam;
    scanf("%d", &tam); // 2,8,10
    if(i == 0 && tam == 1  && rodadas == 1)
    {
        printf("1");
        return 0;
    }
    else if(i == 0 && tam == 0  && rodadas == 1)
    {
        printf("0");
        return 0;
    }
    
    int bits[tam]; 

    if(i == rodadas) // i = 0 
    {
        qual_maior(maiores,100);
        return 0;
    }
    else
    {
        ler_array(bits,tam,0); //ler bits[2]
        maiores[aux] = verificar_sequencia(bits,tam, 0, 0); 
       printf("essa ta sendo a frequencia %d", maiores[aux]);
        ler(rodadas, i + 1, aux +1,maiores);
    }
}
int main()
{
    int rodadas;
    scanf("%d",&rodadas); // 3
    int maiores[100] = {0}; // tamanho aleatorio, n tem tamanho do tam pq ele muda
    ler(rodadas, 0,0, maiores);
    return 0;
}