#include <stdio.h>

int main (void)
{
    float perimetro, raio;
    const double PI = 3.1415927;
    double area;

    printf("Insira aqui o tamanho do raio\n");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    perimetro = 2 * PI * raio;

    printf("Área: %.2f\nPerimetro: %.2f\n", area, perimetro);
}