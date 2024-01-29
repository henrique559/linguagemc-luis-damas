#include <stdio.h>

int main (void)
{
    float salario;
    printf("Qual o salario?\n");
    scanf("%f", &salario);

    // Usar o operador condicional '?' apenas se ambas as condições modificarem a mesma variável.

    // salario = salario > 1000 ? salario*1.05 : salario * 1.07;
    // lê-se: salario é igual (=) a salario maior que 1000 (?) se sim, multiplique por 5/100, se não (:) multiplique por 7/100.
    // 

    // salario = salario * (salario > 1000) ? 1.05 : 1.07;

    printf("Novo salario: %.2f\n", salario);
}