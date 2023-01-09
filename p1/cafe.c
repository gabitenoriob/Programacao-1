#include <stdio.h>
int caixas(int qntd, int size, int cont,int caps)
{
    scanf("%d %c", &qntd, &size);
    
    if(cont == 7)
    {
        return caps;
    }

    if(size == 'p' || size == 'P')
    {
      caps = caps +  (qntd * 10)  ;
       caixas(qntd,size,cont +1,caps);
      
    }
    else if(size == 'g' || size == 'G')
    {
      caps = caps +  (qntd * 16) ;
      caixas(qntd,size,cont +1,caps);
    }

    
}
int main()
{
    int qntd; 
    char size; 

    int total = caixas(qntd,size,0,0) ;

    printf("%d\n%d",total, (total * 2) / 7); 

}