#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    int a1[a];
    int a2[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &a1[i]);
        scanf("%d", &a2[i]);
    }
    for (i = 0; i < a; i++)
    {
        printf("%d\n", a1[i] + a2[i]);
    }
    return 0;
}