// program to delete the number from array and shift others in front...
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int size, i, posi;
    printf("enter the size of array:");
    scanf("%d", &size);
    int ace[size];
    for (i = 0; i < size; i++)
    {
        printf("enter the number at position %d :-", i);
        scanf("%d", &ace[i]);
    }
    printf("enter the position number you want to delete:-");
    scanf("%d", &posi);
    size -= 1;
    ace[posi] = 0;
    for (i = posi; i < size; i++)
    {
        ace[i] = ace[i + 1];
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", ace[i]);
    }
    printf("\n");
    return 0;
}