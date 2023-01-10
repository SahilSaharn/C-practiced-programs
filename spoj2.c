#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    a = a + 2;
    i = 1;
    while (i <= a)
    {
        if (i == 1)
        {
            printf("W");
        }
        else if (i == a)
        {
            printf("w");
        }
        else
        {
            printf("o");
        }
        i++;
    }

    return 0;
}