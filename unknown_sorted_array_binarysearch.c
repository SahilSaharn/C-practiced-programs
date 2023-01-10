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

void sort(int array[],int size)
{
    for(int i=0;i<size-1;i++){

        for(int j=0;j<size-1;j++){
            if(array[j]<array[j+1]){
                int temp = array[j];
                array[j]= array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element of array:-\n");
    inputarr(arr,size,0);
    int st,end,mid,key,flag=0;
    printf("enter the key:");
    scanf("%d",&key);
    st =0;
    end = size-1;
    //we will chech that array i sorted in which way by checking the first two elements of that array and use binary search accordin to that type...
    if(size>1){
    if(arr[0]>arr[1])       //means desecnding...
    {
        while(st<=end){
            mid= (st+end)/2;
            if(arr[mid]==key){
                printf("elment found at index %d \n",mid);
                flag =1;
                break;
            }
            else if(arr[mid]>key){
                st = mid +1;
            }
            else if(arr[mid]<key){
                end = mid -1;
            }
        }
        if(flag ==0){
            printf("element not found\n");
        }
    }
    else                    //or it is ascending it is in ascending order...
    {
        while(st<=end){
            mid= (st+end)/2;
            if(arr[mid]==key){
                printf("elment found at index %d \n",mid);
                flag =1;
                break;
            }
            else if(arr[mid]<key){
                st = mid +1;
            }
            else if(arr[mid]>key){
                end = mid -1;
            }
        }
        if(flag ==0){
            printf("element not found\n");
        }          
    }
    }
    else{
        if(arr[0]==key){
            printf("element present at 0 index");
        }
        else{
            printf("elemnt not found\n");
        }
    }
    return 0;
}