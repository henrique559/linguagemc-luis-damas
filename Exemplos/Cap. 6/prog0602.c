#include <stdio.h>
#define ENUM 5

void inic1 (int *s);
int main(void)
{
    int teste[ENUM];
    inic1(teste);

    for(int i = 0; i < ENUM; i++)
        printf("Posição [%d] = %d\n", i, teste[i]);
}

void inic1 (int *s)
{
    for(int i = 0; i < ENUM; i++)
        s[i] = 2;
}