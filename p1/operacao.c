#include <stdio.h>

int main()
{
   double a[100][2];
   double credito,debito,saldo = 0;

    for(int j = 0;j < 1;j++) // lendo so a 1 coluna(0) q é os indices de credito ou debito
    {
        for(int i = 0; i < 100; i ++)
        {
            scanf("%lf", &a[i][j]);
            if(a[i][j] == -1)
            {
                i = 100;
            }
            else if(a[i][j] == 1)
            {
                scanf("%lf", &a[i][1]);
                credito += a[i][1];
            }
            else
            {
                scanf("%lf", &a[i][1]);
                debito += a[i][1];
            }
        }
    }


    saldo = credito - debito;

    printf("Creditos: R$ %.2lf", credito);
    printf("Debitos: R$ %.2lf", debito);
    printf("Saldo: R$ %.2lf", saldo);


   


}