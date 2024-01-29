#include <stdio.h>

char toUpper(char x);
int main (void)
{
    char n;

    printf("Digite aqui uma letra: \n");
    n = getchar();
    
    printf("Inserido: [%c]\nFunção toupper: [%c]\n", n, toUpper(n));
}

char toUpper(char x)
{
    if (x >= 'a' && x <= 'z')
        return (x + 'A' - 'a');
    else 
        return x;
}