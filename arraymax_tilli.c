#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }//input arr...

    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max< arr[i]){
            max = arr[i];
        }
        printf("%d  ",max);
    }
    return 0;
}