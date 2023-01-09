#include <stdio.h>

int meta(int prog,int linhas,int cont, int cumpriu,int cumpriu2,int maxlinhas, int dia)
{
    scanf("%d %d", &prog, &linhas);

    if (cont == 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", cumpriu);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", cumpriu2);

        if(dia == 0)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO");
        }
        if(dia == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
        }
        if(dia == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: TERÇA");
        }
        if(dia == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA");
        }
        if(dia == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA");
        }
        if(dia == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA");
        }
        if(dia == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SÁBADO");
        }
    }

    else{
    
        if (prog >= 5 && linhas >= 100)
        {
            cumpriu++;
            cumpriu2++;
        }
        else if (prog >= 5 && linhas <= 100)
        {
            cumpriu++;
        }
        else if (prog <= 5 && linhas >= 100)
        {
            cumpriu2++;
        }
        
        if(linhas > maxlinhas)
        {
            maxlinhas = linhas;
            dia = cont;
        }

        meta(prog,linhas,cont+1,cumpriu,cumpriu2,maxlinhas,dia); //cada vez q chama a função cont + 1 = ler ais um dia 
    }
}

int main()
{
    int prog,linhas;
    
    //meta = 5 prog e 100 linhas por dia
    meta(prog,linhas,0,0,0,0,0);
   
}