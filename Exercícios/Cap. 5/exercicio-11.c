#include <stdio.h>

int isLower(char c);
int main (void)
{
    char letra;

    printf("Digite uma letra: \n");
    letra = getchar();

    if(isLower(letra) == 1)
        printf("Essa letra é minúscula.\n");
    else
        printf("Essa letra é maiúscula.\n");
}

int isLower(char c)
{
    return(c >= 'a' && c <= 'z');
}