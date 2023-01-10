#include <stdio.h>
#include <string.h>
int main()
{
    int test, leng, i, x = 0;
    char s[50];

    scanf("%d\n", &test);
    while (test)
    {
        gets(s);
        leng = strlen(s);
        for (i = 0; i < leng; i++)
        {
            if (s[i] == '+')
            {
                x++;
                break;
            }
            else if (s[i] == '-')
            {
                x--;
                break;
            }
        }
        if (test == 1)
            printf("%d\n", x);

        test--;
    }

    return 0;
}