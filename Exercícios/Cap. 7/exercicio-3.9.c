#include <stdio.h>
#include <ctype.h>

char *updown(char *str);
int main (void)
{
    char teste[50] = "Alfabeto Grego";

    printf("%s\n", updown(teste));

}
char *updown(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((i % 2) == 0)
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    return str;
}