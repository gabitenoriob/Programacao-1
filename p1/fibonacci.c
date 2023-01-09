#include <stdio.h>

int fibonacci(int n)
{
    scanf("%d", &n);

    if(n == 2 || n == 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(n) + fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    printf("%d\n", fibonacci(n));
    
}