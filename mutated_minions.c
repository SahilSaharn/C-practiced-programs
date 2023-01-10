#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int k, n;
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr[i] += k;
        }
        int count = 0;

        for (int i = 0; i < n; i++)
            if (arr[i] % 7 == 0)
                count++;

        printf("%d\n", count);
    }
    return 0;
}
//completed...