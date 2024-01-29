#include <stdio.h>
#include <string.h>
#define num 25


int strpal(char *s);
int main(void)
{
    char teste[num] = "";

    printf("Insira aqui alguma palavra: \n");
    fgets(teste, num, stdin);

    printf("%d", strpal(teste));
}


int strpal(char *s)
{
    int i, j;
    for(i = 0, j = (strlen(s) - 1); i < j; i++, j--)
    {
        if(s[i] == s[j])
            return 0;
        return 1;
    }
}