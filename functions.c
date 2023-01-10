// #include<stdio.h>
void sort_array (int size ,int arr[])
{
    for(int i=0 ; i<size-1 ;i++)
    {
        for(int j=0 ;j<size -1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}//bubble sort function...

#define     PRINTARRAY(size,array) for(int i=0 ;i<size ;i++){\
                                        printf("%d  ",array[i]);\
                                    }
