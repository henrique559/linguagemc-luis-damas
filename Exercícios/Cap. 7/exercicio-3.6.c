#include <stdio.h>
#include <stdlib.h>

char max_ascii(char *str);
int main (void)
{
    char teste[50] = "dalva";
    printf("%c\n", max_ascii(teste));
}

char max_ascii(char *str)
{
    char tmp = str[0];
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] > tmp)
            tmp = str[i];
    }
    return tmp;
}