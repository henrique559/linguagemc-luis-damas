#include <stdio.h>
#define num 3

char *memcpyz(char *dest, char*orig, int n);
int main (void)
{
    char destino[num];
    char origem[num] = {'a', 'b', 'z'};

    memcpyz(destino, origem, num);
    
    for(int i = 0; i < num; i++)
    {
        printf("%c", destino[i]);
    }
    putchar('\n');
}
char *memcpyz(char *dest, char*orig, int n)
{
    for(int i = 0; i < n; i++)
    {
        dest[i] = orig[i];
    }
    return dest;
}