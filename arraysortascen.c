#include<stdio.h>
int main()
{
    int size,i,temp ,j;
    printf("enter the size of array req...\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter your elements now:-\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<size-1;j++)
    {
        for(i=0;i<size;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("YOUR SORTED ARRAY IS-----\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    
    return 0;
}