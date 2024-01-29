#include <stdio.h>
#include <string.h>

char *format_s (char *s);
int main(void)
{
    char teste[50] = "pedro henrique";

    printf("%s\n", teste);
    printf("%s\n", format_s(teste));
}


char *format_s (char *s)
{
    char sobrenome[50];

    int i = 0, j = 0;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            sobrenome[i] = s[i++];
        }
        i++;
    }
    puts(sobrenome);
    strcpy(s, sobrenome);

    return s;
}