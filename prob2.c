//prob:-statuus--submitted...
#include <stdio.h>
int main()
{
    int test, i;
    int pe, va, to, o = 0;
    scanf("%d", &test);
    while (test)
    {
        scanf("%d %d %d", &pe, &va, &to);
        if ((pe + va + to) >= 2)
        {
            o++;
        }

        test--;
    }
    printf("%d", o);

    return 0;
}