#include <stdio.h>


float Max(float x, float y, float w);
int main (void)
{
    float num1, num2, num3, res;

    printf("Insira aqui 3 números:\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    res = Max(num1, num2, num3);
    printf("O Maior número é: %.1f", res);
}

float Max(float x, float y, float w)
{
    if(x > y && x > w)
        return x;
    else if(y > x && y > w)
        return y;
    else
        return w;
  
}