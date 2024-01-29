#include <stdio.h>

int main (void)
{
    int num = 0;
    do
    {
        printf("Insira um número de 1 a 100\n");
        scanf("%d", &num);

        num = num > 100 || num <= 0 ?  printf("Tente novamente\n") : printf("Numero utilizado: %d\n", num);
    }
    while(num <= 0 || num > 100);
}