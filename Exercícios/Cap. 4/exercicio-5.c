#include <stdio.h>

int main(void)
{
    int pausa = 20;

    for(int i = 0; i <= 255; i++)
    {
        if(i == pausa)
        {
            printf("pressione 'C' para continuar\n");
            getchar();
            pausa += 20;
            system("clear");
        }
        else
            printf("%d --> %c\n", i, (char) i);
    }
}