#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    printf("entre the size:");
    scanf("%d",&size);
    int arr[size],j[size];
    int *one;
    one = arr;
    for(int i=0;i< size ;i++){
        scanf("%d",one+i);
    }
    for(int i=0; i<size ;i++)
    {
        j[i] = *(one + i);
    }
    int *p = j;
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
//completed...