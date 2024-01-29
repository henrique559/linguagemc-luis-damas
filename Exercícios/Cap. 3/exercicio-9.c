#include <stdio.h>

// Sem breaks.

int main (void)
{
    int num;

    printf("Quantos dias tem no mês: \n1-Janeiro\t2- Fevereiro\n3- Março\t4- Abril\n5- Maio\t\t6- Junho\n7- Julho\t8- Agosto\n9- Setembro\t10- Outubro\n11- Novembro\t12- Dezembro\n");
    printf("\n[ESCOLHA UMA OPÇÃO]:\n");
    scanf("%d", &num);

    switch(num)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Esse mês tem 30 dias!\n");
        
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Esse mês tem 31 dias!\n");

        case 2:
            printf("Esse mês tem 28 dias! (Caso seja ano bissexto, 29 dias.)\n");

        default:
            printf("Mês inválido.\n");
    }

}