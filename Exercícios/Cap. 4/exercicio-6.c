#include <stdio.h>

int main (void)
{
    int num1, num2, tmp;

    printf("Introd. dois N°:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    for(int i = num1; i <= num2; i++)
    {
        printf("%d --> %c\n", i, (char) i);
    }
}