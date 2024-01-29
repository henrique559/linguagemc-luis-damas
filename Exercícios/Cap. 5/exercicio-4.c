#include <stdio.h>

long int num (int n_horas, char tipo);
int main (void)
{
    int tempo;
    char tipo;
    printf("Digite aqui quantas horas que você deseja calcular\n");
    scanf(" %d", &tempo); while(getchar() != '\n');

    printf("Digite aqui opção de tempo:\n[S] -> Segundos, [M] -> Minutos, [H] -> Horas.\n");
    tipo = getchar();
    
    printf("* Original: %2d\n* Resultado: %2d\n", tempo, num(tempo, tipo));
}

long int num (int n_horas, char tipo)
{
    switch(tipo)
    {
        case 'h':
        case 'H':
            return n_horas;
            break;
        
        case 'm':
        case 'M':
            return n_horas * 60;
            break;
        
        case 's':
        case 'S':
            return n_horas * 3600;
            break;

        default:
            printf("Opção incorreta, tente novamente.\n");
            return 0;
    }
}