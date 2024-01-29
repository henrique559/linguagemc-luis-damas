#include <stdio.h>

int is_len_ok (char *str, int cm);
int main (void)
{
    char teste[25] = "PE";
    
    printf("String: %s\n", teste);

    printf("%s\n", is_len_ok(teste, 3) == 1 ? "Verdadeiro" : "Falso");
}

int is_len_ok (char *str, int cm)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    
    return (i == cm);
}