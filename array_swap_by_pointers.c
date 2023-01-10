#include<stdio.h>
#include<string.h>
#include<math.h>
void inputarry(int [],int );
void printarry(int [],int );
void swap_arrays(int *a,int *b,int size);
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    printf("enter the elements of first array--\n");
    inputarry(arr1,size);
    printf("enter the elements of second array--\n");
    inputarry(arr2,size);

    swap_arrays(arr1,arr2,size);

    printarry(arr1,size);
    printarry(arr2,size);

    return 0;
}

void swap_arrays(int *a,int *b, int size)//function to swap two array...
{
    for(int i=0 ;i<size ;i++)
    {
        int temp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = temp;

    }

}

void inputarry(int ar[],int n)
{
    for(int i=0 ; i<n ;i++)
    {
        scanf("%d",&ar[i]);
    }
}

void printarry(int ara[],int n)
{
    for(int i=0 ; i<n ;i++)
    {
        printf("%d  ",ara[i]);
    }
    printf("\n");
}
//completed...***...

