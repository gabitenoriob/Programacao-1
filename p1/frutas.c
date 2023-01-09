#include <stdio.h>
#include <string.h>


int main()
{
    int n;
    scanf("%d", &n);
    float consumo =0;
    int kg = 0;

    for(int rodadas = 1; rodadas <= n; rodadas++)
    {
        float a[1];
        char  b[1000];
         
        scanf("%f", &a[1]);
        consumo += a[1];
        
        scanf("%[^\n]s",&b[1000]);
        int tamanho = strlen(b);

        for(int i = 0; i < tamanho; i++)
        {
            if(b[i] == ' ')
            {
                 kg += 1;
            }
           
        }

       printf("dia %d: %d kg\n", rodadas,kg);
    }

    float consumo_mediokg = kg / n;
    float consumo_reais = consumo / n;

    printf("%0.2f kg por dia\n", consumo_mediokg);
    printf("R$ %0.2f por dia\n", consumo_reais);

}