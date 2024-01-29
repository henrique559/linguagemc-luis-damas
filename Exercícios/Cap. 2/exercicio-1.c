#include <stdio.h>

int main (void)
{
    short int dia, mes, ano;

    printf("Digite aqui o seu dia, mês e ano de nascimento respectivamente: \n");
    scanf("%hd%hd%hd", &dia, &mes, &ano);

    printf("Sua data de nascimento: %0hd/%0hd/%hd\n", dia, mes, ano);
}