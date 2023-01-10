#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements--\n");
    for(int i=0;i<size ;i++){
        scanf("%d",&arr[i]);
    }//inputed the array...

    int *k;
    k = arr;
    int key;
    printf("enter the element you want to search:\n");
    scanf("%d",&key);

    for(int i=0 ;i<size ;i++)
    {
        if(*(k+i)  ==  key)
        {
            printf("element found at index %d\n",i);
            break;
        }
    }
    return 0;
}

//completdd...