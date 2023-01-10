#include <string.h>
#include <stdio.h>
int main()
{
    int len, i;
    char str[1001];
    gets(str);
    len = strlen(str);//to count lenght of string...(use with only string.h header file)

    for (i = 0; i <len; i++)
    {
        if (str[i] == ' ')//if we get get space we will change line 
        {
            printf("\n");
        }

        else//else we will keep printing charachter single by single present in array
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}