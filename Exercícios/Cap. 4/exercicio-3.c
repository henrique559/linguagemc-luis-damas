#include <stdio.h>

int main (void)
{
    char ch = ('A' - 1);
    int lenght = 0;
    
    printf("Qual o tamanho da pirâmide ASCII??\n");
    scanf("%d", &lenght);

    for(int i = 0; i <= lenght; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
}