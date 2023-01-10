#include <stdio.h>
int main()
{
    int a, b, c, j;
    printf("ENTER THE NUMBER OF LINES YOU WANT...\n");
    scanf("%d", &a);

    for (b = 1; b <= a; b++)
    {
        for (c = 1; c <= b; c++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}
