#include <stdio.h>

void inic1 (int s[], int n);
int main(void)
{
    int teste[10];
    inic1(teste, 3);

    for(int i = 0; i < 10; i++)
        printf("Posição [%d] = %d\n", i, teste[i]);
}

void inic1 (int s[], int n)
{
    for(int i = 0; i < n; i++)
        s[i] = 2;
}