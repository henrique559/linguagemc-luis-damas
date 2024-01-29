#include <stdio.h>

int square(int x, int y);
int is_square(int x, int y);
void main()
{
    int num1, num2;
    
    printf("Insira dois números: \n");
    scanf("%d %d", &num1 ,&num2);

    if(is_square(num1, num2) == 1)
        printf("%d é igual a %d^2", num1, num2);
    else
        printf("%d não é igual a %d^2", num1, num2);
}

int is_square(int x, int y)
{
    return(x == square(y, 2));
}

int square(int x, int y)
{
    int num = x;

    for(int i = 1; i < y; i++)
        num *= x;

    return num;
}