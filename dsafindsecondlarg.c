#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    if (b > a && b > c)
    {
        if (a > c)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    if (c > a && c > b)
    {
        if (a > b)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", b);
        }
    }

    return 0;
}