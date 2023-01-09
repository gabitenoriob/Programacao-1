#include <stdio.h>
int procurar_x(int array[],int x,int tamanho)
{
    if(tamanho == 10)
    {
        return 0;
    }
    else if(array[tamanho] == x)
    {
        return 1 + procurar_x(array,x,tamanho + 1);
    }
    else
    {
        return 0 + procurar_x(array,x,tamanho + 1);
    }
}
int ler_array(int array[], int tamanho)
{
    if(tamanho == 10)
    {
       return 0; 
    }
    else 
    {
        scanf("%d", &array[tamanho]);
        ler_array(array,tamanho + 1);
        
    }
}
int main()
{
    int array[10];
    ler_array(array,0);

    int x; //procurar por esse x;
    scanf("%d", &x);

    int soma = procurar_x(array,x,0);
    printf("%d", soma);

    return 0;
}