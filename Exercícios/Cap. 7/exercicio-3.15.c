#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *lower_upper(char *s);
void main()
{
    char my_string[50] = "PedroSzz";

    printf("%s\n", lower_upper(my_string));
}

char *lower_upper(char *s)
{
    char lwr_tmp[25];
    char up_tmp[25];
    int i = 0;

    while(s[i] != '\0')
    {
        if(islower(s[i]))
            lwr_tmp[i] = s[i];

        if(isupper(s[i]))
            up_tmp[i] = s[i];

        i++;
    }
    printf("%s\n%s\n", lwr_tmp, up_tmp);

    return s;
}