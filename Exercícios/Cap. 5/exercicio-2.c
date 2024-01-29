#include <stdio.h>
#include <math.h>

float Pot(float x, float n);
float VAL(float x, int n, float t);

int main (void)
{
    float valor, taxas, resposta;
    int anos;

    printf("Insira aqui, respectivamente:\n * Valor\n * Anos\n * Taxas:\n");
    scanf("%f %d %f", &valor, &anos, &taxas);

    resposta = VAL(valor, anos, taxas);
    printf("A resposta é: %.2f", resposta);

    return 0;
    
}

float Pot(float x, float n)
{  
    float num = x;
    for(int i = 1; i < n; i++)
        num = num * x;

    return num;
}


float VAL(float x, int n, float t)
{
    float val = x / Pot((1+t), n);

    return val;
}