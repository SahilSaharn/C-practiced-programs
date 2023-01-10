#include<stdio.h>
#include<string.h>
#include<math.h>

int array_sum (int * , int  );

int main()
{
    int size ;
    printf("enter the size:");
    scanf("%d", &size);

    int arr[size] , *addr;
    addr= arr;

    //inout the elements of array ...
    
    for(int i=0 ;i < size ;i++){
        scanf("%d", &arr[i]);
    }

    printf("the total is : %d\n",array_sum(arr,size));


    return 0;
}

int array_sum (int *array , int size )  // fuction to calculate the sum of 1d array...
{
    int sum = 0;

    for(int i = 0 ;i< size ;i++)
    {
        sum += *(array + i);
    }

    return sum ;
}