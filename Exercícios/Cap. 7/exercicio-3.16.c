#include <stdio.h>
#include <ctype.h>

char *all_big(char *s);
int main ()
{
    char teste[25] = "pedro123a";

    printf("%s\n", all_big(teste));
}
char *all_big(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(islower(s[i]))
            s[i] = toupper(s[i]);
        
        i++;
    }

    return s;
}