#include <stdio.h>

int main (void)
{
    int piramide = 0;

    printf("Qual o tamanho da pirâmide?\n");
    scanf("%d", &piramide);

    for(int i = 0; i <= piramide; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}