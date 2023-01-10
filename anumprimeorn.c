#include <stdio.h>
#include <math.h>
int main()
{
    int x, a, c;
    printf("Enter A Number\n");
    scanf("%d", &x);
    for (a = 2; a < x; a++)
    {
        if (x % a == 0)
            break;
    }

    if (a == x)
    {
        printf("Your Number Is Prime\n");
    }
    else
    {
        printf("Your Number is Not Prime!\n");
    }

    return 0;
}