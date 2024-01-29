#include <stdio.h>

void main ()
{
    // for(int i = 1; i < 10; i++)
    // {
    //     for(int j = 1; j < i ; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     putchar('\n');

    // }

  for(int i = 33; i <= 126; i++)
  {
    printf("%d -> %c\n", i, (char) i);
  }
}