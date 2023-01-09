#include <stdio.h>

int pontuacao(int num, int num2, int vezes, int rodadas, int pontosp, int pontost)
{
    
    
    vezes++;
    if(vezes == rodadas)
    {
        if (pontosp > pontost)
        {
            printf("Pedro foi vitorioso com %d pontos", pontosp);
        }
        else if(pontost > pontosp)
        {
            printf("Túlio foi vitorioso com %d pontos", pontost);
        } 
        else
        {
            printf("Túlio e Pedro empataram com %d pontos", pontosp);
        }
        return 0;
        
    }
    else{

    if(num > num2)
    {
        
        pontosp += pontosp;

    }
    else
    {
        pontost += pontost;
       
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

int partidat(int tulio[], int tam2, int i)
{
     ordenar(tulio,tam2);
    int num2 = 0;
    if(i == tam2)
    {
        printf("tulio: %d\n", num2);
        return num2;

    }
    if(tulio[i] == tulio [i + 1])
    {
        int num2 = tulio[i];
         printf("esse é o numero %d", num);
        partidat(tulio,tam2, i +1);
    }
    else
    {
        partidat(tulio,tam2, i +1);
    }
}
int partida(int pedro[],int tam1, int i)
{
    //ver qual numero se repete mais vezes na sequencia de cada um e ver qual maior
    ordenar(pedro,tam1);
    if(i == tam1)
    {
        printf("pedro: %d ", pedro[i]);
        return pedro[i];

    }
    if(pedro[i] == pedro [i + 1])
    {
        int num = pedro[i];
        printf("esse é o numero %d", num);
        partida(pedro,tam1 ,i +1);
    }
    else
    {
        partida(pedro,tam1,i +1);
    }
  
    

}
int ler(int rodadas)
{
    if(rodadas == 0)
    {
    
       return 0;
    }
    else//rod = 2 
    {
        int tam1,tam2;
        scanf("%d%d", &tam1, &tam2); // tamanho 5 e 5
        int pedro[tam1];
        int tulio[tam2];
        partida(pedro,tam1,0); //leva o pedro[5];
        partidat(tulio,tam2,0);
        pontuacao(partida,partidat,0,rodadas,0,0);
        ler(rodadas - 1);
    }
}
int main()
{
   int rodadas;
   scanf("%d", &rodadas);// se for 2
   ler(rodadas); //ler rodadas

}