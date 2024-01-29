#include <stdio.h>

int main (void)
{
    int num;

    printf("Insira um número\n");
    scanf("%d", &num);

    num = num == 0 ? printf("Esse número é igual a zero\n") : printf("Esse número é diferente de zero\n");
}