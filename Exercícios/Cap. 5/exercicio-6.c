#include <stdio.h>

int impar(int x);
int main (void)
{
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);

    if(impar(num) == 0)
        printf("Esse número é par.\n");
    else
        printf("Esse número é impar.\n");
}

int impar(int x)
{
    return (x % 2 == 1);
}