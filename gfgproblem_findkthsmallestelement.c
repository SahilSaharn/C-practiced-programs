// to find the ideA to find the kth smallest number is simple just sort the array in ascending oredr
// and the print k-1 element of tht sorted array...its done...***...
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int size, i, j, temp;
    printf("enter the size of array:");
    scanf("%d", &size);
    int are[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &are[i]);
    }
    for (j = 0; j < size; j++)
    {
        for (i = 0; i < size; i++)
        {
            if (are[i] > are[i + 1])
            {
                temp = are[i];
                are[i] = are[i + 1];
                are[i + 1] = temp;
            }
        }
    }
    printf("the sorted array is:-");
    for (i = 0; i < size; i++)
    {
        printf("%d ", are[i]);
    }
    printf("\n");
    printf("enter the number of smallest element you want:- ");
    scanf("%d", &temp);
    printf("the %d smallest element is %d \n", temp, are[temp - 1]);
    return 0;
}