//using two pointer algo and completed...
#include<stdio.h>
#include<string.h>
#include<math.h>
void inputarr(int array[],int size,int start)
{
    if(start==size){
        return;
    }
    scanf("%d",&array[start]);
    inputarr(array,size,start+1);
}
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:\n");
    inputarr(arr,size,0);
    //input over...
    int point2 =0;
    for(int i=0;i<size;i++)
    {
        if( arr[i] % 2 == 0){

            int temp = arr[i];
            arr[i] = arr[point2];
            arr[point2] = temp;
            point2++;
        }

    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}