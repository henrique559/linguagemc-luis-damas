#include <stdio.h>

char *lastname(char *s);
char *strrchrr(char *s, char ch);

int main (void)
{
    char teste[100];
    char opt;

    printf("Insira aqui o seu nome: \n");
    fgets(teste, sizeof(teste), stdin);

    printf("Sobrenome: %s\n", lastname(teste));

    printf("Insira um caractere: \n");
    opt = getchar();

    printf("Endereço do caractere: %s\n", strrchrr(teste, opt));
}

char *strrchrr(char *s, char ch)
{
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            return &s[i];
    
    return NULL;
}

char *lastname(char *s)
{
    int i = 0;
    char *tmp = s;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            int j = 0;
            while(s[j] = s[++i])
                j++;

            s[j] = '\0';
            return tmp;
        }
        else
            i++;
    }
    return tmp;
}