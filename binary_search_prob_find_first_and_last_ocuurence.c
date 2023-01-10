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
            if(array[j]>array[j+1]){
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
    inputarr(arr,size,0);
    sort(arr,size);                  //array is sorted in ascending arder.
    
    int start,end,mid,flag=0,ind,key;
    start = 0;
    end = size - 1;
    printf("enter the key:");
    scanf("%d",&key);

    while(start<=end)
    {
        mid = (start+ end) /2;

        if(arr[mid]==key){
            flag =1;
            ind= mid;
            end = mid -1;
        }

        else if(arr[mid] > key){
            end = mid -1;
        }

        else if(arr[mid]< key){
            start = mid +1;
        }
    }
    if(flag ==1 ){
        printf("element found at %d index\n",ind);
        
    }
    else{
        printf("element not found !sorry :( \n");
    }



    return 0;
}