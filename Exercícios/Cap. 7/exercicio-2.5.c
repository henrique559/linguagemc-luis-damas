#include <stdio.h>

char *strnset(char *s, char ch, int n);
int main (void)
{
    char teste[25] = "alfabeto";

    printf("%s\n", teste);
    strnset(teste, 'y', 3);
    printf("%s\n", teste);
}

char *strnset(char *s, char ch, int n)
{
    for(n--; s[n] != '\0'; n--)
        s[n] = ch;

    return s;
}