#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];

    printf("enter the elements of array:\n");
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }//inputed the elements of array...

    int ele ,posi;
    printf("enter the element you want to insert:");
    scanf("%d",&ele);
    printf("enter the position where you want to enter the element:");
    scanf("%d",&posi);

    posi -=1;
    //because the array index starts from 0 and user calculated the position from 1

    for(int i=size ; i > posi; i--){
        arr[i] = arr[i-1];
    }
    arr[posi] = ele;
    printf("element inserted...\n");
    size+=1;
    for(int i=0 ; i<size ;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
// completed...