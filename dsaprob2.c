#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    
    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("BOTH\n");
    }
    else if (a % 5 == 0 || a % 11 == 0)
    {
        printf("ONE\n");
    }
    else
    {
        printf("NONE\n");
    }
    return 0;
}