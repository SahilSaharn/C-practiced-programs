//program to print hollow triangle...


#include <stdio.h>
int main()
{
    int row, coll, a, b;
    printf("ENTER THE NO. OF ROWS YOU WANT \n");
    scanf("%d", &a);
    for (row = 1; row <= a; row++)
    {

        for (coll = 1; coll <= row; coll++)
        {

            if (coll == 1 || coll == row)
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
    a=a+1;
    for (row = 1; row <= a; row++)
    {
        printf(" * ");
    }

    return 0;
}