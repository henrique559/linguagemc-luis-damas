#include <stdio.h>
#include <string.h>
char *strduplicar (char *str);
int main (void)
{
    char mystring[50] = "Ana";

    printf("(%s) <-- Normal\n", mystring);
    printf("(%s) <-- Copy\n", strduplicar(mystring));
}

char *strduplicar (char *str)
{
    char test[50] = "";
    int i = 0, len;

    while(test[i] = str[i])
    i++;

    for(i = 0, len = strlen(test); str[i] != '\0'; i++, len++)
            str[len] = test[i];
    
    // Concatenar strings ^^

    return str;
    
}
