#include <stdio.h>

void main()
{
    char s[100];
    char *ptr = s;

    printf("Introduza uma string: \n");
    fgets(s, 100, stdin);

    if(*ptr == '\0')
        return;

    while(*ptr != '\0')
        putchar(*ptr++);

    ptr--;

    while(ptr >= s)
        putchar(*ptr--);    
}