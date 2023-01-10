#include<stdio.h>
#include<string.h>
#include<math.h>
void sortarr(int arr[],int size){

    for(int i=0;i<size-1;i++){

        for(int j=0;j<size;j++){

            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}
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
    int ar[size];
    inputarr(ar,size,0);
    sortarr(ar,size);
    for(int i=0;i<size;i++){
        printf("%d\t",ar[i]);
    }//array is sorted..
    printf("\n");

    //binary search begins now...***... 
    int ele,flag=0;
    printf("enter the number you wnat to search:");
    scanf("%d",&ele);

    int start_p,end_p,mid_p;
    start_p = 0;//it is start of index
    end_p = size -1;//end index of array


    while(start_p <= end_p)//because if they cross each other means element is not found...
    {
        mid_p = (start_p + end_p ) / 2 ;

        if(ar[mid_p] == ele){
            printf("element found at index= %d\n",mid_p);
            flag =1;
            break;
        }

        else if( ar[mid_p]<ele){
            start_p = mid_p+1;
        }

        else if(ar[mid_p]> ele){
            end_p = mid_p - 1;
        }

    }
    if(flag ==0){
        printf("element no found !soaaary!\n");
    }


    return 0;
}