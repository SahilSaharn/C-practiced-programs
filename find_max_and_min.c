#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,max=0,min;
    printf("enter the size of array :-");
    scanf("%d",&size);
    int arr[size];
    printf("enter your inputs:-\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    min=arr[0];
    printf("the largest number is %d ",max);
    for(i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d\n",min);
    return 0;
}