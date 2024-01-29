#include <stdio.h>

int main (void)
{
    int dia, mes, ano;
    printf("Digite aqui sua data de nascimento no padrão americano. (aaaa-mm-dd):\n");
    scanf("%d%d%d", &ano, &mes, &dia);

    printf("\nOriginal: %d/%d/%d\nFormatado: %d/%d/%d\n", ano, mes, dia, dia, mes, ano);
}