#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char *wordupr(char *str);
int main (void)
{
    char nome_completo[MAX];
    char sobrenome_completo[MAX];
    
    do
    {
        printf("Insira aqui o seu nome completo: \n");
        scanf("%s %s", nome_completo, sobrenome_completo);

        printf("%s, %s\n", wordupr(sobrenome_completo), wordupr(nome_completo));

        while(getchar() != '\n');


    }
    while(strcmp(nome_completo, "sair"));

    printf("Terminou o programa. \n");
}

char *wordupr(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(islower(str[0]))
            str[0] = toupper(str[0]);

        if(str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);

        if(isupper(str[i]))
        {
            int j = i;
            while(str[j] != ' ')
            {
                str[j + 1] = tolower(str[j + 1]);
                j++;
            }
        }
    }
    return str;
}
