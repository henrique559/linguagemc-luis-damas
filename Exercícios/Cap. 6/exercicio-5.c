#include <stdio.h>

int memcmpz (char *s1, char*s2, int n);
int main (void)
{
    char teste[2] = {'a','b'};
    char teste2[3] = {'a', 'b', 'c'};

    int nz = 0; 
    nz = memcmpz(teste, teste2, 3);
    if(nz > 1)
        printf("String 1 maior que String 2\n");
    else if(nz <= 0)
        printf("String 1 menor que string 2\n");
    else
    printf("quero caga");

}

int memcmpz(char *s1, char*s2, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(s1[i] > s2[i])
            return -1;
        else if(s1[i] < s2[i])
            return 1;
    }
    return 0;
}