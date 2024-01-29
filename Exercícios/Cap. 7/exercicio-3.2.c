#include <stdio.h>
#include <string.h>

char n_esimo (char *str, int n);
int main (void)
{
    printf("%c\n", n_esimo("EraUmaVez", 3));
}

char n_esimo (char *str, int n)
{
    n -= 1;
    return str[n];
}