#include <stdio.h>
#include <ctype.h>

char *strlwr(char *str);
int stricmp(char *s1, char *s2);
int main(void)
{
    char cmp1[25] = "rafaellaA";
    char cmp2[25] = "RAFAELLA";

    if(stricmp(cmp1, cmp2) > 0)
        printf("String 1 é maior que a string 2\n");

    else if(stricmp(cmp1, cmp2) == 0)
        printf("String 1 é igual a string 2\n");

    else
        printf("String 1 é menor que a string 2\n");
}
int stricmp(char *s1, char *s2)
{
    for(int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;

    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}