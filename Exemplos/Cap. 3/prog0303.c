#include <stdio.h>

int main (void)
{
    int x;
    printf("Insira um N°: \n");
    scanf("%d", &x);

    if(x)
        printf("%d é diferente de zero.\n", x);
    else
        printf("%d é zero.\n");
}