//we will take input of array by a recursive function...
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
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter your elements:--\n");
    inputarr(arr,n,0);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}

