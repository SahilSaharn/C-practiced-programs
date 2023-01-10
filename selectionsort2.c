#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,j,min_posi,pos;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements yours now:--\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        min_posi=i;//dont forget this step...
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_posi])
            {
                min_posi=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_posi];
        arr[min_posi]=temp;
    }
    for(i=0;i<size;i++){printf("%d  ",arr[i]);}printf("\n");
    return 0;
}