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

        for(int j=0;j<size;j++){
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
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:-\n");
    inputarr(arr,size,0);
    sort(arr,size);//this fuction will sort the array in order to use binary search,....

    int st,low,mid,key,flag,in;
    st = 0;             //starting pointer...
    low = size-1;       //end pointer of array index will be size -1
    flag = 0;

    printf("enter the element you want to seacrh..\n");
    scanf("%d",&key);
    printf(" Searching.....\n");
    while(st<=low)
    {
        mid = (st+low)/2;  //mid will be low +start /2

        if(arr[mid]==key){
            printf("element found at %d index\n",mid);
            in = mid;
            flag = 1;
            break;
        }

        else if(arr[mid]>key){
            low = mid -1;
        }

        else if (arr[mid]<key){
            st = mid +1;
        }

    }
    if(flag==0){
        printf("element not found !SoRrY!\n");
    }


    return 0;
}