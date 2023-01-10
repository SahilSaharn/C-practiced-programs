//to find the minimum and max && second max & minimum...***...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max ,second_max, min,second_min;
    max=0,second_max=0;//intialise the max and second max with 0 only ...
    for(i=0;i<size;i++){
        if(max<arr[i])
            max=arr[i];
    }
    //we got the max and use anither loop for second max and use not equal to max same in minimum case...
    printf("the max is:");
    printf("%d\n",max);
    for(i=0;i<size;i++){
        if(second_max<arr[i] && arr[i]!=max)
            second_max=arr[i];
    }
    printf("the second max is:");
    printf("%d\n",second_max);

    min=__INT_MAX__,second_min=__INT_MAX__;
    //printf("%d\n",min); printf("%d\n",second_min);
    for(i=0;i<size;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("the min is:%d\n",min);

    for(i=0;i<size;i++)
    {
        if(second_min>arr[i]  && arr[i]!=min)
          {  second_min=arr[i];}
    }

    printf("the second min is:%d\n",second_min);
    return 0;
}