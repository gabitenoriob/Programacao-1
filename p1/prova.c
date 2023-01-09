#include <stdio.h>
int soma(int num) //n ? o indice do array q vai de 0 a n
{
      
    if(num == 0)
    {
        return ;
    }
    else
    {
       
        return  num % 10  +  soma(num / 10);
        
    }
}
int ler(int array[], int n,int indice)
{
    if(indice == n)
    {
        return 0;
    }

    scanf("%d", &array[indice]);
   
    ler(array,n,indice + 1);
    
}
int main()
{
    int n; 
    scanf("%d", &n); //qntd de num q vem a seguir 
    
    int array[n]; //array de tamanho n
    ler(array,n,0);

    int i; //posicao 
    scanf("%d", &i); 
    int num = array[i];
    printf("%d\n",soma(num));// 
    
    return 0;
}