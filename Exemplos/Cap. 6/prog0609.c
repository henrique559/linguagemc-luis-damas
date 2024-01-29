#include <stdio.h>

char *memset (char *v[], char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = ch;

        return v;
    }
}