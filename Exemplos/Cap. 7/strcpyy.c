#include <stdio.h>

char *strcpyy (char *dest, char *orig);
int main (void)
{
    char teste1[64] = "RAFAELLA PEIDONA";
    char teste2[64];

    strcpyy(teste2, teste1);
    printf("%s\n%s\n", teste1, teste2);
}
char *strcpyy (char *dest, char *orig)
{

    int i = 0;
    while(dest[i] = orig[i])
        i++;

    return dest;
}