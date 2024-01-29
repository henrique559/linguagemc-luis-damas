#include <stdio.h>

int isSpace(char c);
int main (void)
{
    char letra;

    printf("Digite uma letra: \n");
    letra = getchar();

    if(isSpace(letra) == 1)
        printf("É um espaço ou um TAB.\n");
    else
        printf("Não é um espaço ou um TAB.\n");
}

int isSpace(char c)
{
    return(c == ' ' || c == '\b' || c == '\t' || c == 32);
}