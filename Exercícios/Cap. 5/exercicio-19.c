#include <stdio.h>

int cubic(int x);
int main(void)
{
    int num;

    printf("Digite um número para calcular seu valor cúbico.\n");
    scanf("%d", &num);

    printf("%d^3 é %d\n", num, cubic(num));
}

int cubic(int x)
{
    int num = x;

    for(int i = 1; i < 3; i++)
        num *= x;

    return num;
}