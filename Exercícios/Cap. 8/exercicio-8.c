#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *StrDelUpper(char *s);
int main (void)
{
    char teste[25] = "CaRlInHoS";

    printf("%s", StrDelUpper(teste));
}
char *StrDelUpper(char *s)
{
    char *tmp = NULL;
    int len = strlen(s);

    for(tmp = s; *tmp != '\0'; tmp++)
    {
        if(isupper(*tmp))
        {
            *tmp = *tmp + 1;

        }
    }
    return tmp;
}