#include <stdio.h>

int main (void)
{
    int num;

    printf("Insira um número\n");
    scanf("%d", &num);

    if (num)
    {
        printf("Esse número é diferente de zero\n");
    }
    else if(num == 0)
    {
        printf("Esse número é igual a zero\n");
    }
}