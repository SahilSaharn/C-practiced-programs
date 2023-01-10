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
int linrserch(int arr[],int size_m1,int flag,int element)
{
    if(flag >=0 || size_m1<0){
        return flag;
    }
    if(arr[size_m1] == element){
        flag = size_m1;
    }
    linrserch(arr,size_m1-1,flag,element);

}
int main()
{
    int size,i,element;
    printf("enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("enter the elements of array:--\n");
    inputarr(a,size,0);
    printf("enter the element you wnat to search:");
    scanf("%d",&element);
    int o = linrserch(a,size-1,-1,element);
    if(o<0){
        printf("element not found\n");
    }
    else{
        printf("element is present at %d index\n",o);
    }

    return 0;
}