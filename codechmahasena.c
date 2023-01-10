#include <stdio.h>
int main()
{
    int num_of_soldiers, i, a;
    int eve = 0, odd = 0;
    scanf("%d", &num_of_soldiers);
    for (i = 0; i < num_of_soldiers; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            eve++;
        }
        else
        {
            odd++;
        }
    }
    if (eve > odd)
    {
        printf("READY FOR BATTLE\n");
    }
    else
    {
        printf("NOT READY\n");
    }

    return 0;
}