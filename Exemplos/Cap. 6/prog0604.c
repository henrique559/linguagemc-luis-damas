#include <stdio.h>
#define DIM 3

void main()
{
    /*Um vetor nada mais é que um vetor com N indices
    por exemplo:
    
    O Vetor -> char teste[2][4], nada mais é que um vetor de caracteres de duas dimensões, onde o [2] é um vetor com 4 caracteres
    e o [4] e a quantidade de caracteres presente no vetor [2].
    
    seria mais ou menos assim:           ou assim:

                          1 2 3 4                                   0 1 2
        teste[2][4] =   1 [][][][]            char velha[3][3] =  0 [][][]
                        2 [][][][]                                1 [][][]
                                                                  2 [][][]

    Como pode perceber, velha[3][3] nada mais é que um vetor de caracteres com duas dimensões, onde o vetor [3] é um vetor com 3 caracteres.
                                                        */
    char velha[DIM][DIM] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

    velha[0][0] = 'X';
    velha[1][1] = 'X';
    velha[0][2] = 'O';
    velha[2][2] = 'O';
    velha[1][2] = 'O';

    /*É Possível passar condições '?' por argumentos dentro de funções.*/
    /*obs: condição '?' é utilizada somente quando queremos verificar a condição de uma única variável.*/

    for(int i = 0; i < DIM; i++)
    {
        for(int j = 0; j < DIM; j++)
        {
            printf("%c %c", velha[i][j], j == DIM - 1 ? ' ' : '|');
        }
        if(i != DIM - 1)
            printf("\n------\n");
    }
    
}