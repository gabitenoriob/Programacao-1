#include <stdio.h>
int menor(int a, int b, int c)
{
    if(a <= c && a <= b)
    {
        printf("Pior -> Coldplay");
    }
    else if(b <= c && b <= a)
    {
        printf("Pior -> Dua Lipa");
    }
    else if (c <= a && c <= b)
    {
        printf("Pior -> Imagine Dragons");
    }

    return 0;
}
int maior(int a, int b, int c)
{
    if(a >= c && a >= b)
    {
        printf("Melhor -> Coldplay\n");
    }
    else if(b >= c && b >= a)
    {
        printf("Melhor -> Dua Lipa\n");
    }
    else if (c >= a && c >= b)
    {
        printf("Melhor -> Imagine Dragons\n");
    }

    return 0;
}
int main()
{
    int C,D,I;
    scanf("%d%d%d", &C, &D, &I);

    int todos = (C - (C * 0.35)) + (D - (D * 0.25)) + (I - (I * 0.20));
    printf("%d\n", todos);

    //banda que trouxe mais =
    int todosC = (C - (C * 0.35));
    int todosD = (D - (D * 0.25));
    int todosI = (I - (I * 0.20));

    maior(todosC,todosD,todosI);
    menor(todosC,todosD,todosI);
}