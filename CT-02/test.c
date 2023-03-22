#include <stdio.h>

int my_strcmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else
    {
        return (str1[i] - str2[i]);
    }
}

int main()
{
    char str1[] = "bfb";
    char str2[] = "gfg";
    int result = my_strcmp(str1, str2);
    printf("%d", result);
    return 0;
}