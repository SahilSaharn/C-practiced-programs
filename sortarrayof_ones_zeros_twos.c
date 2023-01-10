//this is the brute force  approach for this question to sort one ,zeros,twos best approach is
//dutch national flag algorith in O(n) tc also known as duf sort ,,,....""""
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,one,two,zero;
    printf("enter the size of your array:");
    scanf("%d",&size);
    int arr[size];
    zero=one=two=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]==0){zero++;}
        else if(arr[i]==1){one++;}
        else if(arr[i]==2){two++;}
    }

    for(i=0;i<zero;i++)
    {
        arr[i]=0;
    }
    for(i=zero;i<zero+one;i++)
    {
        arr[i]=1;
    }
    for(i=zero+one;i<zero+one+two;i++)
    {
        arr[i]=2;
    }
    printf("Sorted array is ............\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}