#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <string.h>

/*atof() Conversão de string em float
atoi() Conversão de string to int
atol() Conversão de string to long
itoa() Conversão de int to string
ltoa() Conversão de long to string*/


int main()
{
    
    char a[1000];
    char b[1000];

    scanf("%[^\n]s", a);
    scanf("%[^\n]s", b);

    

    printf(" %s\n", a + b);
    

	return 0;
}