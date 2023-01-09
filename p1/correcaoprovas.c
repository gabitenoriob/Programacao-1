#include <stdio.h>
#include <string.h>

double freq(double frequencia[], int i, double atual, double antiga, int cont, int aux, int n)
{// 0 0 10, 3, 0,0,0,0,3
//         2, 0, 10, 0, 3
//         1, 0, 10, 0 , 3
//         0, 0, 10, 0 , 3 //vai testar agr se sao igual 9,8,7,6...


    if(cont == 11)
    {
        printf("%.1lf", atual);
        return 0;
    }
    else
    {
        if(i == 0)//sim, 
        {
            if(antiga >= atual) //10> 0 sim atual = 10 antiga = 0 recome?a
            {
                atual = antiga;
                antiga = 0;
            }
            freq(frequencia,n,atual,antiga,cont +1,aux - 1,n);
        }
        else if (frequencia[i - 1] == aux)//[2] == 10 sim 
        {
            antiga = aux; // antiga = 10
            freq(frequencia,i - 1,atual,antiga,cont,aux,n); //verificar se o [1] == 10
        }
        else
        {
            freq(frequencia,i  - 1,atual,antiga,cont,aux,n);
        }
        
    }
}
double notas(char gabarito[], int i, double cont, char nota[])
{
    if(i > 9)
    {
        return cont;
    }
    if(gabarito[i] == nota[i])
    {
        notas(gabarito,i + 1, cont + 1.0,nota);
    }
    else
    {
        notas(gabarito,i + 1, cont,nota);
    }

}
double ler_num(char gabarito[], double alunos, double porcentagem, int aux, double frequencia[])
{
    
    int num;
    scanf("%d", &num);



    alunos += 1.00;

    if(num == 9999)
    {
        printf("%.1lf%%\n", (100 * porcentagem) / (alunos - 1));
        freq(frequencia,alunos - 1,0,0,0,10,alunos - 1);
        return 0;
    }

    printf("%d ", num);

    char nota[11];
    scanf(" %s", nota);

    double notax = notas(gabarito,0,0,nota);
    printf("%.1lf\n", notax);

    if(notax >= 6.00)
    {
    porcentagem += 1.00;
    }

    aux += 1;
    
    frequencia[aux] = notax;

    
    
    ler_num(gabarito,alunos,porcentagem,aux,frequencia);

}
int main()
{
    char gabarito[11];
    scanf("%s", gabarito);

    double frequencia[100];

    memset(frequencia,0,sizeof(frequencia));

    ler_num(gabarito,0,0,-1,frequencia);

}