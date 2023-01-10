#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int flag = 0;
    for(int i=0;i<size;i++){
        if(a[i] == 1){
            flag = 1;
        }
    }
    if( flag == 1)
        printf("Hard\n");

    else
        printf("Easy\n");

        
    return 0;
}