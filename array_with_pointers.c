#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size], *p;
    p = arr;//we only have to point the base address of array...
    for(int i=0; i< size ;i++)
    {
        scanf("%d",p+i);
    }

    for(int i=0;i<size;i++)
    {
        printf("%d   ",*(p+i));
    }


    return 0;
}