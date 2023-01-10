#include <stdio.h>
#include <string.h>
#include <math.h>
void eveodd(int *);
void swap(int *a, int *b) // swapping by call by reference we have to pass the addresses while calling...
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1, num2;
    printf("enter number 1:");
    scanf("%d", &num1);
    printf("enter number 2:");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("%d  %d\n", num1, num2);
    eveodd(&num1);
    eveodd(&num2);
    return 0;
}
void eveodd(int *a)
{
    if (*a % 2 == 0)
        printf("even\n");

    else
        printf("odd\n");
}