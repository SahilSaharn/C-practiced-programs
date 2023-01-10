#include <stdio.h>
int main()

{
    int a, b, c, sum1;

    scanf("%d", &a);
    int sum[a];
    for (b = 0; b < a; b++)
    {
        scanf("%d", &sum[b]);
    }
    sum1 = 0;
    for (c = 0; c < a; c++)
    {
        sum1 = sum1 + sum[c];
    }
    printf("%d\n", sum1);
    return 0;
}
