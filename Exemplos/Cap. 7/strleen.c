#include <stdio.h>

char *strcatt(char *dest, char *orig);
int strlenz (char *s);
int main (void)
{
    char nome1[100];
    char nome2[100];

    printf("Digite aqui o seu nome: \n");
    scanf("%s", nome1);
    printf("Digite aqui o seu sobrenome: \n");
    scanf("%s", nome2);
    strcatt(nome1, nome2);
    printf("Seu nome completo é: %s", nome1);
}

int strlenz(char *s)
{
    int i = 0;
    while(s[i] != '\0')
        i++;

    return i;
}

char *strcatt(char *dest, char *orig)
{
    int i, len;
    for(int i = 0, len = strlenz(dest); orig[i] != '\0'; i++, len++)
        dest[len] = orig[i];

    dest[len] = '\0';
    return dest;
}