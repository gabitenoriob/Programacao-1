#include <stdio.h>
int muralha( int n,int x,int y, char reinoanterior, int moedas)
{
    char dir; //os movimentos sao Cima ou Direita
    scanf(" %c", &dir);
    
    if( n == 0) //quando le todas as posiçoes de n ate 0 retorna
    {
        printf("%d\n", moedas);
        return 0;
    }
    if(dir == 'C') //cima = eixo y
    {
        y = y + 1;

    }
    else if(dir == 'D') // direita = eixo x
    {
        x = x + 1;
    }

    if(reinoanterior == 'a' && y < x) //se ele estava no reino a que pela questao = y > x e se torno y < x é pq mudou de reino 
    {
        moedas++;
    }
    else if(reinoanterior == 'b' && y > x) //estava no b que é y < x e ficou y > x
    {
        moedas++;
    }
    
    if(y < x)
    {
        reinoanterior = 'b' ; // a partir dessa avaliaçao a cima vai trazer o novo reino anterior p fazer a proxima consideraçao c o proximo movimento
    }
    else if (y > x)
    {
        reinoanterior = 'a';
    }

    muralha(n -  1,x,y,reinoanterior,moedas);

}
int main()
{
    int n; 

    scanf("%d", &n); // vai ler quantos movimentos ele fez

    muralha(n,0,0,'o',0); // vai calcular oq esses movimentos significaram
    //aqui foi passado o caracter 'o' aleatoriamente pq n se sabe em qual reino começa ent na 1 chamada da função ele n vai ter nenhum reino anterior definido 
    return 0;
}
