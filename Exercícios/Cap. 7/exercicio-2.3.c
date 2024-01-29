#include <stdio.h>

int strleen(char *s);
int ult_ind_chr(char *s, char ch);
int main (void)
{
    char teste[] = "analuisa";
    char teste2;
    printf("Insira um caractere: \n");
    teste2 = getchar();

    printf("String: %s\nUltimo indice da palavra: %c\nIndice: %d\n", teste, teste2, ult_ind_chr(teste, teste2));
}

int ult_ind_chr(char *s, char ch)
{
    int i = (strleen(s) - 1);
        //for(i = (strleen(s)); s[i] != ch; i--)
        //;
    while(s[i] != ch)
        i--;

    if(s[i] == '\0')
        return -1;

    else
        return (i+1);
    
    

}

int strleen(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}














/*
#include <stdio.h>

char *strdel(char *s);
int main (void)
{
    char teste[] = "Pedro";
    printf("Antes: %s\n", teste);

    strdel(teste);
    printf("Depos: %s\n", teste);

}
*/