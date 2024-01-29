#include <stdio.h>

int isUpper(char c);
int main (void)
{
    char letra;

    printf("Digite uma letra: \n");
    letra = getchar();

    if(isUpper(letra) == 0)
        printf("Essa letra é minúscula.\n");
    else
        printf("Essa letra é maiúscula.\n");
}

int isUpper(char c)
{
    return(c >= 'A' && c <= 'Z');
}