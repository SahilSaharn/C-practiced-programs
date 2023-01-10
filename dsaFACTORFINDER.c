#include <stdio.h>
int main()
{
    int num1, i, o = 0;
    scanf("%d", &num1);
    for (i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            o++;
        }
    }
    printf("%d\n", o);
    for (i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            printf("%d  ", i);
        }
    }

    return 0;
}