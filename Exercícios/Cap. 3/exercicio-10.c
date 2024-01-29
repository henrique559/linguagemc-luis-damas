#include <stdio.h>

int main (void)
{
    short unsigned int dia, mes, ano;

    printf("Insira aqui uma data válida: \n");
    scanf("%hu %hu %hu", &dia, &mes, &ano);

    if((dia == 0 || dia > 31) && (mes <= 0 || mes > 12) && (ano <= 999 || ano > 9999))
        printf("\nData inválida.\n");
    else
        printf("\nData válida!\n[%hu/%hu/%hu]\n", dia, mes, ano);
}