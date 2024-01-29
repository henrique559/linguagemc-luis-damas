#include <stdio.h> 
#include <ctype.h>

int strcounta(char *s);
int main() 
{
    char teste[] = "pedro123";
    printf("String: %s\nN° de letras: %d\n", teste, strcounta(teste));
}
int strcounta(char *s)
{
    int i, count;
    for(i = count = 0; s[i] != '\0'; i++)
    {
        if(isalpha(s[i]))
        count++;
    }
    return count;
}