#include <stdio.h>
#define num 10

float max (float v[], int n);
int main (void)
{
    float teste[num];
    float maxi;

    for(int i = 0; i < num; i++)
    {
        printf("Digite o valor do indíce [%d]\n", (i+1));
        scanf("%f", &teste[i]);
    }

    maxi = max(teste, num);

    printf("O maior selecionado: %.2f", maxi);


}

float max (float v[], int n)
{
    float receive = v[0];
    for(int i = 0; i < n; i++)
    {
        if(v[i] > receive)
        {
            receive = v[i];
        }
    }
    return (float) receive;
}