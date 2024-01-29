#include <stdio.h>

int main (void)
{
    int num1, num2, res = 0;
    char opt;

    printf("Escreva aqui uma expressão de matématica: \n");
    scanf("%d %c %d", &num1, &opt, &num2);

    switch(opt)
    {
        case '+':
            res = num1 + num2;
            break;

        case '-':
            res = num1 - num2;
            break;

        case '*':
        case 'x':
        case 'X':
            res = num1 * num2;
            break;
        
        case '/':
        case '\\':
        case ':':
            if(num1 == 0 || num2 == 0)
                printf("Não é possível dividir por zero.");
            else
            {
                res = num1 / num2;
                break;
            }
    }

    printf("\nResultado: %d\n", res);
}