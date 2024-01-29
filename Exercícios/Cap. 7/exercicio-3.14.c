#include <stdio.h>
#include <ctype.h>

char *wordupr(char *str);
int main(void)
{
    char teste[25] = "ERA uma VeZ";
    
    printf("%s\n", wordupr(teste));
}
char *wordupr(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);

        if(isupper(str[i]))
        {
            int j = i;
            while(str[j] != ' ')
            {
                str[j + 1] = tolower(str[j + 1]);
                j++;
            }
        }
    }
    return str;
}