#include <stdio.h>

int isAlnum(char c);
int main (void)
{
    char num;
    printf("Digite algo: \n");
    scanf("%c", &num);

    if(isAlnum(num) == 1)
        printf("O caractere inserido é uma letra ou um número\n");
    else
        printf("O caractere inserido não é uma letra ou um número\n");
}


int isAlnum(char c)
{
    return((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}