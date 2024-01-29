#include <stdio.h>

char lower(char ch);
int isvogal (char ch);
int main (void)
{
    char ch;

    printf("Insira aqui uma letra: \n");
    ch = getchar();

    if(isvogal(ch) == 1)
        printf("%c é uma vogal.\n", ch);
    else
        printf("%c não é uma vogal.\n", ch);
}

int isvogal (char ch)
{
    char new = lower(ch);

    switch(new)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        
        default:
            return 0;
    }
}

char lower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ch - 'A' + 'a';
    else
        return ch;
}