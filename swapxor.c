#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, b;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("%d  %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d  %d\n", a, b);
    return 0;
}