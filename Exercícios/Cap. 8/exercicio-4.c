#include <stdio.h>
#include <string.h>

char *strst(char *str, char *sub_s);
int main (void)
{
    char teste1[100] = "Teste";
    char teste2[100] = "ste";

    printf("strstr: %s\n", strst(teste1, teste2));
}
char *strst(char *str, char *sub_s)
{
    char *tmp = NULL;
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == sub_s[i])
        {
            printf("teste");
        }
    }
    return NULL;

}