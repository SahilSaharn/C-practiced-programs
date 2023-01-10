//pattern to print hollow rectangle... 
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("ENTER A ROW NUMBER\n");
    scanf("%d", &a);


    for (b = 1; b <= a; b++)
    {
        for (c = 1; c <= a; c++)
        {
            if (b == 1 || b == a)
            {
                printf(" * ");
            }
            else if (c == 1 || c == a)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }

    return 0;
}