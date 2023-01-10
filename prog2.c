//program to find maxximum among array....

#include <stdio.h>
int main()
{
    int a, i;
    int max , min;
    printf("ENETR THE NUMBER YOU WANT TO ENTER \n");
    scanf("%d", &a);
    int as[a];
    printf("NOW INPUT YOUR NUMBERS:");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &as[i]);
    }
    max=as[0];
    for (i = 1; i < a; i++)
    {
        if (as[i] > max)
        {
            max = as[i];
        }
    }

    printf("THE MAXIMUM AMONG THEM IS %d\n", max);

    return 0;
}