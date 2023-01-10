#include <stdio.h>
int main()
{
    int n, loop, sum = 0;
    scanf("%d", &n);
    for (loop = 1; loop <= n; loop++)
    {
        if (loop % 2 == 0)
        {
            sum = sum + (loop * loop);
        }
    }
    printf("the sum of even number squares till %d = %d\n", n, sum);

    return 0;
}