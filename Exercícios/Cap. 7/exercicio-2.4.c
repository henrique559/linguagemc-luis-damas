#include <stdio.h>

char *strlwr(char *str);
int main (void)
{
    char teste[20] = "P E I D O";
    printf("Antes: %s\n", teste);
    printf("Depos: %s\n", strlwr(teste));
}

char *strlwr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            i++;
        
        str[i] = str[i] + (char) 32; 
        i++;
    }
    return str;
}