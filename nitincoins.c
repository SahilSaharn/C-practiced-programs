#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a < b && a != b)
        {
            a += c;
        }
        else
        {
            b += c;
        }

        if (a < b && a != b)
        {
            a += d;
        }
        else
        {
            b += d;
        }
        // printf("%d , %d\n",a,b);
        if (a == b)
        {
            printf("N\n");
        }
        else if (a > b)
        {
            printf("N\n");
        }
        else
        {
            printf("S\n");
        }
    }
    return 0;
}
// submitted...