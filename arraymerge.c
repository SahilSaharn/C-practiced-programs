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
    int size1,size2;
    printf("enter the size of first array:");
    scanf("%d",&size1);
    printf("enter the size of second array:");
    scanf("%d",&size2);
    int arr1[size1],arr2[size2];
    printf("enter the first array elements now\n");
    inputarr(arr1,size1,0);
    printf("enter the second array elements now\n");
    inputarr(arr2,size2,0);
    int size3= size1+size2;
    int arr3[size3],i,j;
    for(i=0;i<size1;i++){
        arr3[i] = arr1[i];
    }
    for(j=0;j<size2;j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    for(i=0;i<size3;i++){
        printf("%d  ",arr3[i]);
    }
    return 0;
}
//completed...