/* PROGRAM TO PRINT THE SUM OF FIRST & LAST DIGIT OF A MULTI DIGIT NUMBER LIKE 12345 AND TO PRINT 6...*/
#include <stdio.h>
int main()
{
    int size, i, rem;
    scanf("%d", &size);
    int arra[size], arr2[size], arr3[size];
    for (i = 0; i < size; i++)//loop to make size of array...
    {
        scanf("%d", &arra[i]);
    }
    for (i = 0; i < size; i++)//loop to store last integer & remove it...
    {
        arr2[i] = arra[i] % 10;
        arra[i] = arra[i] / 10;
        arr3[i] = 0;
    }
    for (i = 0; i < size; i++)//loop to reverse the number and now its first digit is last digit and store it in another loop...
    {
        while (arra[i] != 0)
        {
            rem = arra[i] % 10;
            arr3[i] = arr3[i] * 10 + rem;
            arra[i] = arra[i] / 10;
        }
    }
    for (i = 0; i < size; i++)//loop to print result...
    {
        arr3[i] = arr3[i] % 10;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr2[i] + arr3[i]);
    }
    return 0;
}