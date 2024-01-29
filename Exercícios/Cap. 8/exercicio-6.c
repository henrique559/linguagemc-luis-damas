#include <stdio.h>
#include <string.h>

char *strins(char *dest, char *orig);
int main (void)
{
    char teste[100] = "Autonoma";
    char teste2[100] = "Universidade";

    printf("%s\n", strins(teste,teste2));
}

char *strins(char *dest, char *orig)
{
    char *tmp = orig;
    int i, j;

    for(i = 0, j = strlen(orig); dest[i] != '\0'; i++, j++)
    {
        orig[j] = dest[i];
    }    
    orig[j] = '\0';
    return tmp;
}