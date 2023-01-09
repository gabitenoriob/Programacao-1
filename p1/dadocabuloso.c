#include <stdio.h>
int primos(int n,int contador)
{
    if(n == contador)
    {
        return 1;
    }
    else if(n % contador == 0 || n < 2)
    {
        return 0;
    }
    else
    {
        primos(n,contador + 1);// se for menor q 2 ou 2 desconsidera e retorna fazendo dnv
    }
}
int proximo(int y)
{
    if(primos(y, 2) == 1) 
    {
      return y;
    } 
    else 
    {
      return proximo(y + 1);
    }
}
int soma(int num)
{
      
    if(num == 0)
    {
        return 0;
    }
    else
    {
       
        return  num % 10  +  soma(num / 10);
        
    }
}
int mdc(int x,int y)
{
    if( y == 0)
    {
        return x;
    }
    else 
    {
        return mdc(y, (x % y));
    }
}
void swap(int array[], int i)
{
   int aux = array[i];
   array[i] = array[i+1];
   array[i+1] = aux;
   return;
}
int bubble(int array[ ], int n, int  i) 
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
int partida(int dadoO[], int dadoK[],int x)
{
    ordenar(dadoO, x);
    ordenar(dadoK, x);

     if(dadoK[x - 1] > 1500 || dadoO[x - 1] > 1500 || dadoK[0] < 0 || dadoO[0] < 0)
        {
            printf("valor fora do limite!\n");
            return 0;
        }

    int Vo = dadoO[0] + dadoO[x-1] + dadoO[x/2]; //arrays ja ordenados p fazer isso aq
    int Vk = dadoK[0] + dadoK[x-1] + dadoK[x/2]; //menor maior do meio

    //regras O
    int pontosO = 0;
    int pontosK = 0;

    if(primos(Vo,2) == 1)
    {
        pontosO += 1;
    }
   if(mdc(Vo,dadoO[x - 1]) == 1)
    {
         pontosO += 1;
    }
     if(primos(soma(proximo(Vo + 1)),2) == 1)
    {
         pontosO += 1;
    }



     if(primos(Vk,2) == 1)
    {
        pontosK += 1;
    }
     if(mdc(Vk,dadoK[x - 1]) == 1)
    {
         pontosK += 1;
    }
     if(primos(soma(proximo(Vk + 1)),2) == 1)
    {
         pontosK += 1;
    }
    
    if(pontosK > pontosO)
    {
        printf("Kcaj %d\n", Vk);
        
    }
    else if (pontosO > pontosK){
        printf("Ordep %d\n", Vo);
        
    }
    else
    {
        printf("empate\n");
        
    }
    

    }

int ler (int dadoO[],int dadoK[], int i,int x)
{
   
    if(x == i) 
  {
   
    return 0;
  }
 else
    {
        scanf("%d%d", &dadoO[i], &dadoK[i]);
        ler(dadoO,dadoK,i + 1,x);
    }
    
  }
int ajeitar(int n, int dadoO[], int dadoK[],int cont)
  {
if (cont != n)
    {
    int x;
    scanf("%d", &x);
    ler(dadoO,dadoK,0,x);
    partida(dadoO,dadoK,x);
    ajeitar(n,dadoO,dadoK,cont + 1);
}
else
{
    return 0;
}
}
int main()
{
    int n; //numero de partidas
    scanf("%d", &n);

    int dadoO[15002];
    int dadoK[15002];
    ajeitar(n,dadoO,dadoK,0);
   
    return 0;
}