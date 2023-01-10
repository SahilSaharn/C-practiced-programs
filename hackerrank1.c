#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a, b = 0, i, sum;
   
    printf("ENTER A FOUR DIGIT NUMBER\n");
    scanf("%d", &a);
    sum = 0;
    for (i = 0; i < 4; i++)
    {
        b = a % 10;
        sum = sum + b;
        a = a / 10;
    }
    printf("%d\n", sum);

    return 0;
}
