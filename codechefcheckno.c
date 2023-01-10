#include <stdio.h>
int main()
{
    int siz, i, checker;
    scanf("%d", &siz);
    int mai[siz], count[siz];
    for (i = 0; i < siz; i++)
    {
        scanf("%d", &mai[i]);
        count[i] = 0;
    }
    for (i = 0; i < siz; i++)
    {
        while (mai[i] > 0)
        {
            checker = mai[i] % 10;
            if (checker == 4)
                count[i]++;

            mai[i] = mai[i] / 10;
        }
    }
    for (i = 0; i < siz; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}