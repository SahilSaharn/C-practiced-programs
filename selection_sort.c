#include <stdio.h>
#include <string.h>
#include <math.h>
void inputarr(int array[], int size, int start)
{
    if (start == size)
    {
        return;
    }
    scanf("%d", &array[start]);
    inputarr(array, size, start + 1);
}
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d", &size);
    int arr[size];
    inputarr(arr, size, 0);
    int i;
    printf("array before sorting:-\n");
    for( i=0 ;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int min,min_posi,j;

    for(i=0 ;i< size -1 ;i++)
    {
        min = arr[i];
        min_posi=i;
        for(j=i+1 ;j<size ;j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                min_posi=j;
            }

        }
        int temp = arr[i];//donot use the xor method to swap okk...
        arr[i] = arr[min_posi];
        arr[min_posi] = temp;
    }
    printf("array after sorting :-\n");
    for(i=0 ;i<size;i+=1)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

//completed...