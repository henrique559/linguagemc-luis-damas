#include <stdio.h>

float Pot(float x, float n)
{  
    float num = x;
    for(int i = 1; i < n; i++)
        num = num * x;

    return num;
}

void main()
{
    float num = Pot(2, 3);
    printf("%f", num);
}