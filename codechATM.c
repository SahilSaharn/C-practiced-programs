#include <stdio.h>

int main()
{
    int x;
    float y;
    float z;
    scanf("%d", &x);
    scanf("%f", &y);

    if (x % 5 == 0)
    {

        z = x;
        z = z + 0.50;
        if (z <= y)
        {
            printf("%.2f\n", y - z);
        }
        else
        {
            printf("%.2f\n", y);
        }
    }
    else
    {
        printf("%.2f\n", y);
    }

    return 0;
}
