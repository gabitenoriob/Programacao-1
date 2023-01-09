#include <stdio.h>
//24 4 , 18 6 10 2 n = 4
// 0, 1, 2
// 0, 1 , 3
//0, 2, 3 , cont 1


int contar( int valores[], int total, int n, int i1, int i2, int i3, int cont)
{
        if(n == n/2 || (i3 >= n - 1 && i1 >= n - 2))
    {
       printf("Aurelio perdeu a aposta");
       return 0;
    }
    else if(cont == n - 1)
        {
            i1++;
            i2 = i1 + 1;
            i3 = i1 + 2;

            contar(valores,total,n - 1,i1,i2, i3,0);
        }
  
    else
    {
        
            if(i1 == n - 1)
            {
                 printf("Aurelio perdeu a aposta");
                 return 0;
    
            }
          
            else if(valores[i1] + valores[i2] + valores[i3] == total)
            {
                //printf("TA DANDO ESSA SOMA AQ %d", valores[i1] + valores[i2] + valores[i3]);
                //printf("COM ESSES VALORES DO ARRAY %d, %d, %d", valores[i1], valores[i2], valores[i3]);
                printf("Aurelio ganhou a aposta");
                return 0;
            }
            else if(i3 == n - 1 && cont == 0)
            {
                i2++;
                 i3 = i2 + 1;
                 cont ++;
                contar(valores,total,n - 1,i1,i2, i3,cont);
                
            }
            else if(i3 >= n - 1 && cont != 0)
            {
                if(valores[i1] + valores[i2] + valores[i3] == total)
                {
                     printf("Aurelio ganhou a aposta");
                return 0;
                }
                else{
                    cont = n - 1;
                    contar(valores,total,n,i1,i2, i3,cont);
                }
            }
            else
            {
                contar(valores,total,n,i1,i2,i3 + 1,cont);
            }
        }
    }
int ler_array( int valores[], int n, int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        scanf("%d", &valores[i]);
        //printf("%d", valores[i]);
        ler_array(valores,n,i + 1);
    }
}
int main()
{
    int x; // valor a ser alcan?ado //24
    int n; // quantas pessoas ele pede dinheiro //4

    scanf("%d%d", &x, &n);

    if(n < 3)
    {
        printf("Aurelio perdeu a aposta");
        return 0;
    }

    int valores[n]; //array contendo os valores dados  // 18 6 10 2 

    // a soma de 3 independente da posi??o precisa ser EXATAMENTE X 

    ler_array(valores,n,0);
    
    contar(valores,x,n,0,1,2,0);

}