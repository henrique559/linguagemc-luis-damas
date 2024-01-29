#include <stdio.h>
#define MESES 12

int main (void)
{
    float sal[MESES], total = 0;

    for(int i = 0; i < MESES; i++)
    {
        printf("Introd. o salário do mês: %d\n", (i+1));
        scanf(" %f", &sal[i]);
    }
    printf("\n%2s %12s\n", "Mês", "Valor");
        
    for(int j = 0; j < MESES; j++)
    {
        printf("%2d %12.2f\n", j+1, sal[j]);
        total += sal[j];
    }
    printf("\nTotal Anual: R$%8.2f\n", total);
}