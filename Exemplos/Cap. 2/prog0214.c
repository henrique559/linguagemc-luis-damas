#include <stdio.h>

int main (void)
{
    int num = 0;

    printf("Digite aqui um número de 0 a 255: \n");
    scanf("%d", &num);

    printf("Você digitou o número '%d', cujo caractere é a letra '%c'\n", num, (char) num);
    printf("O caractere seguinte é a letra: '%c'\n", (char) num + 1);

    if(num >= 65 || num <= 90)
    {
        printf("\nO caractere selecionado é em maiuscúlo.\nEm minuscúlo seria: '%c'\n", (char) num + 32);
    }
    else if(num >= 97 || num <= 122)
    {
        printf("\nO caractere selecionado é em minuscúlo.\nEm maiuscúlo seria: '%c'\n", (char) num - 32);
    }  
    else
    {
        return 0;
    }

}