#include <stdio.h>

int Entre(int x, int lim_inf, int lim_sup);
int main (void)
{
    int lim_inf, lim_sup, x, tmp;
    
    printf("Digite um intervalo de números entre 1 a 1000\n");
    scanf(" %d %d", &lim_inf, &lim_sup);
    
    if(lim_inf > lim_sup)
    {
        tmp = lim_inf;
        lim_inf = lim_sup;
        lim_sup = tmp;
    }

    printf("Digite um número: \n");
    scanf(" %d", &x);

    if(Entre(x, lim_inf, lim_sup) == 1)
        printf("O número se encontra no intervalo inserido\n");
    else
        printf("O número não se encontra no intervalo inserido\n");
}

int Entre(int x, int lim_inf, int lim_sup)
{
    if(x >= lim_inf && x <= lim_sup)
        return 1;
}
