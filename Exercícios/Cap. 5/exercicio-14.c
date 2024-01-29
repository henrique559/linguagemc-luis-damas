#include <stdio.h>

char toLower(char x);
int main (void)
{
    char n;

    printf("Digite aqui uma letra: \n");
    n = getchar();
    
    printf("Inserido: [%c]\nFunção tolower: [%c]\n", n, toLower(n));
}

char toLower(char x)
{
    if (x >= 'A' && x <= 'Z')
        return (x - 'A' + 'a');
    else 
        return x;
}