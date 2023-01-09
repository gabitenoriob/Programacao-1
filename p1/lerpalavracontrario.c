#include <stdio.h>
void ler(char letras) 
{
    if (scanf(" %c", &letras) == EOF)
    {
       return;
    }
    else
    {
        ler(letras);
        scanf(" %c", &letras);
        printf("%c", letras);
    }
}
int main()
{
    char letras;
    ler(letras);
   
    return 0;
}

#include <stdio.h>
void inverter(char string[] , int i , int n)
{
    if(i >= n /2)
    {
        printf("%s", string);
        return ;
    }
    else
    {
        int aux = string[i];
        string[i] = string[n - i - 1];// 6 - 0 - 1 = 5, tem 6 espaços mas 5 caracteres
        string[n - i - 1] = aux;
        
        inverter(string,i + 1, n);
        
    }
}
int main()
{
    char string[256];
    scanf("%s", &string);
    int n = strlen(string);
    
    
    inverter(string,0,n);
}

