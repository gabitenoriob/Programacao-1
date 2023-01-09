#include <stdio.h>
 
void calcular(int num) // p calcular tem q analisar digito por digito e p isso faz o resto por  10
{
    if (num == 0) {
        return;
    }
 
    int unidade = num % 10;
 
    if (unidade % 2 == 0) //par
     {
        printf(".");
    } 
    else //impar
    {
        printf("-");
    }
    calcular(num / 10); // o msm c o proximo digito
}

int ler(int n, int vezes)// ler no maximo 10 vezes pq a entrada sao 10 e sai 10 filas 
 {
    if (vezes == n) {
        return 0;
    }
    int num;
    scanf("%d", &num); // le
 
    calcular(num); //calcular = converter p . ou -
    ler(n, vezes + 1);//lendo o proximo e contando q é a 2 vez
    int i;
}
int main() 
{
    int n;
    scanf("%d", &n);// qual inteiro q for dado na entrada
    ler(n, 0); // ler
}