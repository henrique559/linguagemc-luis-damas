#include <stdio.h>

int main (void)
{
    int num;

    printf("Insira a quantidade de dias em um ano: \n");
    scanf("%d", &num);

    if(num == 366)
    {
        printf("Ano bissexto!\n");
    }
    else if(num == 365)
    {
        printf("Ano normal\n");
    }
    else
    {
        printf("Invalido\n");
    }
}