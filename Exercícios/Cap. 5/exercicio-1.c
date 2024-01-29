#include <stdio.h>

int Abs(int x);

int main (void)
{
    int num; 

    printf("Digite um número negativo: \n");
    scanf("%d", &num);

    printf("O número absoluto de %d é: %d\n", num, Abs(num));
}   

int Abs(int x)
{
    if(x < 0)
        return -1 * x;
    else
        return x;
}