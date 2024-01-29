#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
    long randomization;
    time(&randomization);
    srand((unsigned) randomization);
    
    int indice = rand() % randomization - 1;
    

    printf("%d", indice);
}