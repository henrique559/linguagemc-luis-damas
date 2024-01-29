#include <stdio.h>
#include <string.h>

char *estremeador(char *s, int n);
int main (void)
{
    char teste[100] = "ABCDEFGHIJLMN";

    printf("Antes: %s\nDepois: %s\n", teste, estremeador(teste, 3));
}

char *estremeador(char *s, int n)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        s[(i+=n)] = s[i];
    }
    return s;
}