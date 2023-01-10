#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int test, x, y, k;
    scanf("%d", &test);
    while (test)
    {
        scanf("%d  %d", &x, &y);
        if (x == 0)
        {
            if (y % 2 == 0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        test--;
    }
    return 0;
}