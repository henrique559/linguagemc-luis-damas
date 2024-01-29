#include <stdio.h>

int power(int x, int y);

int main (void)
{
    printf("%d", power(4,1));
}

int power(int x, int y)
{
    int tmp;
    for(int i = 1, tmp = 1; i <= y; i++);
        tmp *= x;

    return tmp;
}

