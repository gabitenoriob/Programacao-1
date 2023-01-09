#include <stdio.h>

/*  
// ponteiro = tipo de varaivel = variavel de endereço de  memoria 
int x;
scanf("%d", &x); // & = ponteiro = esta acessando o endereco de memoria da variavel x ex: x = 4 &x = 0408048u78u

// como declarar um ponteiro


int * p;
p = &x; // p = 0408048u78u 
*p = 5 // mudou o valor de x pq desreferencia o ponteiro *p é onde ele aponta q é p o x q virou 5, pode tanto printar x ou *p

*/


/*void troca(int *x, int *y) // receberá o endereço p trocar n so os valores mas sim os endereços 
{
    int aux = *x;
    *x = *y;
    *y = aux;
    return;
}

int main()
{
    int a,b;
    a = 50;
    b = 30;
    troca(&a,&b);
    printf("a = %d, b = %d \n", a , b);
}

*/

/*void main()
{
    int f, s;
    int *m;
    m = &f;
    *m = 10;
    m = &s;
    *m = 20;
    printf("%d", f);
    printf("%d", s);

}*/

/*void main()
{
    int f = 5;
    int s= 15;
    int *p1, *p2;

    p1 = &f;
    p2 = &s;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;
printf("%d", f);
    printf("%d", s);
    

}*/

void main()
{
    int y= 0;
    int *p = &y;
    int x;
    x = *p;
    x = 4;
    (*p)++;
    (*p) += x;
    printf("%d", y);
}