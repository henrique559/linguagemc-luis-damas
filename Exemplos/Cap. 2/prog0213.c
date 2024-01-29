#include <stdio.h>

int main (void)
{
    // char ch;
    // printf("Digite aqui um caractere: \n");
    // ch = getchar();

    // printf("O caractere '%c' tem o ASCII n° %d\n", ch, ch);
    int lenght;
    char ch = 64;

    printf("Qual o tamanho da piramide ascii?\n");
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