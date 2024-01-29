#include <stdio.h>

int main (void)
{
    int x, y, temp;

    printf("Insira aqui dois N°: \n");
    scanf("%d %d", &x, &y);

    if(x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    printf("%d %d\n", x, y);
}