#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int circles, i;
        scanf("%d", &circles);
        int count = 0, s , step = 0 ;
        while (circles > 0)
        {
            for (i = 1; (i * i) <= circles; i++)
            {
                count++;
            }
            circles = circles - (count * count);
            step++;
            count = 0;
        }
        printf("%d\n",step);
    }
    return 0;
}

//completed... done .. great question ...s