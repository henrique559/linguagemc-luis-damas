#include <stdio.h>
#include <ctype.h>

int atoi (char *s);
int main (void)
{
    char *s = "1234";
    printf("%d\n", atoi(s));
}
int atoi (char *s)
{
    int num;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(isdigit(s[i]) != 0)
        {
            num = num * 10 + (s[i] - 48);
        }
    }
    int j = 0;
    while(s[j] != '\0')
    {
        if(s[j] == '-')
            return (num * -1);

        j++;
    }
    
    return num;
}
