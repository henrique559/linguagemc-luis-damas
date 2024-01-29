#include <stdio.h>

int main (void)
{
    int num;

    printf("Quantos dias tem no mês: \n1-Janeiro\t2- Fevereiro\n3- Março\t4- Abril\n5- Maio\t\t6- Junho\n7- Julho\t8- Agosto\n9- Setembro\t10- Outubro\n11- Novembro\t12- Dezembro\n");
    printf("\n[ESCOLHA UMA OPÇÃO]:\n");
    scanf("%d", &num);

    if(num == 4 || num == 6 || num == 9 || num == 11)
    {
        printf("Esse mês tem 30 dias!\n");
    }
    else if(num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
    {
        printf("Esse mês tem 31 dias!\n");
    }
    else if(num == 2)
    {
        printf("Esse mês tem 28 dias! (Caso seja ano bissexto, 29 dias.)\n");
    }
    else
    {
        printf("Mês inválido.\n");
    }


}