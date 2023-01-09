#include <stdio.h>
char rodadas(int maior, char maior_nome[], int n)
{
     for(int y = 1; y <= 2 ; y++)// n vezes
        {
            char nome[20];
            int matriz[5][5];
            int diagonal_principal = 0;
            int diagonal_secundaria = 0;

            scanf("%s",nome);
            for (int i = 0; i < 5 ; i++)//ler matriz
            {
                for (int j = 0; j < 5; j++)
                {
                    scanf("%d", &matriz[i][j]);
                    if(i == j)
                    {
                        diagonal_principal += matriz[i][j];
                    }
                    if(j == 4 - i)
                    {
                        
                        diagonal_secundaria += matriz[i][j];
                    }
                }
            }
        if((diagonal_principal + diagonal_secundaria) > maior && y == 2)
        {
            maior = diagonal_principal + diagonal_secundaria;
            strcpy(maior_nome,nome);
            printf("%s venceu com valor %d\n",maior_nome,maior);
           
           
            
        }
        else if((diagonal_principal + diagonal_secundaria) > maior && y != 2)
        {
            maior = diagonal_principal + diagonal_secundaria;
            strcpy(maior_nome,nome);
            
           
        }
        else if((diagonal_principal + diagonal_secundaria) == maior && y == 2)
        {
            printf("Empataram com o valor %d\n",maior);
            
        }
        else{
            maior = maior;
        }
        
        }
}
int main()
{
    int n;
    scanf("%d", &n);
    
    int x = 1;
    while(x != n + 1)//rodadas
    {
        int maior = 0;
        char maior_nome[20] = {" "};
        
        rodadas(0,maior_nome,n);
        x++;
    }
}