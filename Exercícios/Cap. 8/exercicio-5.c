#include <stdio.h>
#include <string.h>

char *first_vogal(char *s);
int main (void)
{
    char teste [100];

    printf("Insira aqui o seu nome: \n");
    fgets(teste, sizeof(teste), stdin);

    printf("first_vogal: %s\n", first_vogal(teste));
}

char *first_vogal(char *s)
{

    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        return &s[i];

    return NULL;
}