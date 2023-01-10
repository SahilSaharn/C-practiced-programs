
// this is the program to remove the dupli elements from array...***...
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int size, i, j, k, count = 0;
    printf("enter the size of array:=");
    scanf("%d", &size);
    int ar1[size];
    printf("enter your elements now\n");
    for (i = 0; i < size; i++) // to take inputs from user...
    {
        scanf("%d", &ar1[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (ar1[i] == ar1[j])
            {
                for (k = j; k < size; k++)
                {
                    ar1[k] = ar1[k + 1];
                }
                size = size - 1; // dont forget to decrement the size of array but in if statement nt in for loop...
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d  ", ar1[i]);
    }

    return 0;
}