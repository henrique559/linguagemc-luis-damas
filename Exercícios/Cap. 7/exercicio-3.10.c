#include <stdio.h>

char *allspaces(char *str);

int main (void)
{
    char mystring[50] = "Alfa";

    printf("(%s) <-- Normal\n", mystring);
    printf("(%s) <-- All spaces\n", allspaces(mystring));
}
char *allspaces(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        str[i] = ' ';
    }
    return str;
}