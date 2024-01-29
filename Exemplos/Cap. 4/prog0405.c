#include <stdio.h>

int main (void)
{
    system("clear");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\nPressione [ENTER] para continuar\n");
        getchar();
        system("clear");
    }
}

// For = Melhor para ocasiões onde precisa repetir por determinado n° de vezes;
// While = Melhor para ocasiões onde uma condição precisa ser analisada;