#include <stdio.h>

char *strdel(char *s);
int main (void)
{
    char teste[] = "Pedro";
    printf("Antes: %s\n", teste);

    strdel(teste);
    printf("Depos: %s\n", teste);

}
char *strdel(char *s)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
        s[i] = '\0';
    return s;
}