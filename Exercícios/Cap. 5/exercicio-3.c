#include <stdio.h>

int n_segundos(int n);
int main (void)
{
    int segundos, res;

    printf("Quantas horas você deseja calcular em segundos?\n");
    scanf("%d", &segundos);

    res = n_segundos(segundos);
    printf("%d horas -----> %d segundos\n", segundos, res);
}

int n_segundos(int n)
{
    return n * 3600;
}