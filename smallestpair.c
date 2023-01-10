#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int compare(const void *a,const void *b)
{
    const int *aa=a;
    const int *bb=b;
    return *aa-*bb;
}
int main()
{
    int test,size,i,j,temp;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&size);
        int arr[size];
        for(i=0;i<size;i++){scanf("%d",&arr[i]);}

        qsort(arr,size,sizeof(int),compare);//this fuction is present in stdlib.h libraray and sort the array 
        for(i=0;i<size;i++)
        {
            printf("%d  ",arr[i]);
        }
        printf("\n%d",arr[0]+arr[1]);
    }
    return 0;
}