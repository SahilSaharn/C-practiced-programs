// this is a program to insert a element into a array and shift others by ...***...
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int size, posi, elem;
    printf("enter the size of array you want:");
    scanf("%d", &size);
    int ad[size];
    printf("enter your elements now:-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ad[i]);
    }
    printf("enter the position you want to insert element:");
    scanf("%d", &posi);
    size += 1;
    ad[size];
    printf("enter the new element:");
    scanf("%d", &elem);

    for (int i = size; i != posi; i--)
    {
        ad[i] = ad[i - 1];
    }
    ad[posi] = elem;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ad[i]);
    }
    return 0;
}