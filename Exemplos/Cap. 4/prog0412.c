#include <stdio.h>

int main (void)
{
    for(int i = 0; i <= 100; i++)
    {
        if(i == 60)
            break;
        else if(i % 2 == 1)
            continue;
        else
            printf("%2d\n", i);
    }
}