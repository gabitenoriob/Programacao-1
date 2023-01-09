#include <stdio.h>
#include <string.h>
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
int printar(int s[], int n, int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        printf("%d ", s[i]);
        printar(s,n,i + 1);
    }
}
int atribuir(int c, int f, int s[], int cont, int aux)
{
    if(c == f + 1)
    {
        if(cont >= aux)
        {
            return aux;
        }
        return 0;
    }
    else
    {
        s[c] = s[c] + 1;// contando as suspeiitas
        atribuir(c + 1,f,s,cont + 1,aux);
    }
}
int ler_tes(int tes, int i, int susp[], int sus)
{
    if(i == tes )
    {   
        printar(susp,sus,0);
        ordenar(susp,sus);
        printf("\n%d", susp[sus - 1]);
        return 0;
    }
    else
    {
        int c,f;
        scanf("%d%d", &c, &f);
        
        atribuir(c,f,susp, 0,0);

        ler_tes(tes,i+1,susp,sus);
    }
}

int main()
{
    int sus,tes;
    scanf("%d%d", &sus, &tes);
    int suspeitos[sus]; //todos os suspeitos estao nesse array c o tamanho dito 
    memset(suspeitos,0,sizeof(suspeitos));
    ler_tes(tes,0,suspeitos,sus);

    
}