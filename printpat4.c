#include <stdio.h>
int main()
{
    int rowtotal, row, a, b;
    printf("ENTER THE NO. OF ROWS YOU WANT\n");
    scanf("%d", &rowtotal);

    for (a = rowtotal; a != 0; a--)
    {
        for (b = 1; b <= a; b++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}
