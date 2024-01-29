#include <stdio.h>

int square(int x, int y);
int is_special(int x, int y);
void main()
{
    int num1, num2;
    
    printf("Insira dois números: \n");
    scanf("%d %d", &num1 ,&num2);

    if(is_special(num1, num2) == 1)
        printf("%d * 2 é igual a %d^2", num1, num2);
    else
        printf("%d * 2 não é igual a %d^2", num1, num2);
}

int is_special(int x, int y)
{
    return((x * 2) == square(y, 2));
}

int square(int x, int y)
{
    int num = x;

    for(int i = 1; i < y; i++)
        num *= x;

    return num;
}