#include <stdio.h>
#include <string.h>
// TERMÌNAR
char *repeticoes (char *s);
int main (void)
{
    char teste[20] = "PARALELEPIPEDO"; 

    printf("%s\n", repeticoes(teste));

}

char *repeticoes (char *s)
{
    int i, j;
    char tmp[100] = "";

    for(i = j = 0; s[i] != '\0'; i++, j++)
    {
        if(s[i] == s[i+1])
        {
            tmp[i] =
        }
    }

    //strcpy(s, tmp);

    return s;
}