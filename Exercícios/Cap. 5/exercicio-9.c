#include <stdio.h>

char toLower(char x);
int isAlpha(char c);
int main (void)
{
    char test;

    printf("Digite uma letra: \n");
    test = getchar();

    if(isAlpha(test) == 1)
        printf("%c é uma letra\n", test);
    else
        printf("%c não é uma letra\n", test);
}

int isAlpha(char c)
{
    char res = toLower(c);
    return (res >= 'a' && res <= 'z');
}

char toLower(char x)
{
    if (x >= 'A' && x <= 'Z')
        return (x - 'A' + 'a');
    else 
        return x;
}