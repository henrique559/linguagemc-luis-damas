#include <stdio.h>

char *prox_char (char *str);
int main (void)
{
    char teste[25] = "A8M0";

    printf("%s\n", prox_char(teste));
}
char *prox_char (char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        str[i] += 1;
    }

    return str;
}