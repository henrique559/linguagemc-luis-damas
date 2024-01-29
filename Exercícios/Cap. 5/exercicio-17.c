#include <stdio.h>

int minus(int x);

void main()
{
    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    printf("Resultado: %d\n", minus(num));
}


int minus(int x)
{
    if(x < 0)
        return x;
    else
        return (x - x - x);
}