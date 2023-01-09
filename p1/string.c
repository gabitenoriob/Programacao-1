#include <stdio.h>
#include <string.h> //p acessar as funcoes 

int main()
{
    char a[1000];
    //entrada o rato
    // p declarar a string so na declaracao da viavel
    char a[1000] = "o rato";
    // NAO a = "o rato"

    gets(a); // vai ler 1000 mesmo q so tenha 6, melhor usar esse no huxley 
    fgets(a,7,stdin); //le so o que tem + 2 ( /0 e /n)

    printf("%s", a); //melhor usar esse 
    puts(a); //printar
    
    //p ler a qntd de caracteres da string
    strlen(a);
    // strlen(a) = 5 (nao conta o /0 mas le ate o /0)
    char b[1000];
    strcmp(a,b); //compara p ver se sao iguais , igauis retorna 0, diferentes retorna -1 se o caracter vier antes e 1 se vier dps 
    //exemplo a =  vaco b = vaca retorna 1 pq o vem dps de a

    // passar o valor de um p outro a recebe b
    strcpy(a,b);

    //p ler uma string qtem mais de um espaço gabi tenorio
    scanf("%[^\n]", string);

    //p a proxima entrada n ser prejudicada dps de uns fgets,gets,scanf p n ficar c lixo no buffer
    fflush(stdin); strcat(a,b);

    //inicializar array tudo 0
    memset()

}