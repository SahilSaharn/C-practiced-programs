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

int max_num(int array[],int size,int start,int maxn)//alwayys pass maxn & start as 0...
{
    if(start == size){
        return maxn;
    }

    if(maxn < array[start]){
        maxn = array[start];
    }

    max_num(array,size,start+1,maxn);

} 

int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:==\n");
    inputarr(arr,size,0);
    int max = max_num(arr,size,0,0);
    printf("the max number is = %d\n",max);

    return 0;
}

//completed...