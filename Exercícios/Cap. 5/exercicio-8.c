#include <stdio.h>

int isDigit(char c);

void main()
{
    char a;
    printf("Insira algo: \n");
    scanf("%c", &a);

    if(isDigit(a) == 0)
        printf("%c não é um digito.\n", a);
    else
        printf("%c é um digito.\n", a);
}

int isDigit(char c)
{
    return (c >= '0' && c <= '9');
}