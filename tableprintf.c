#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);

    for(int i =1 ;i<= 10 ;i++){
        printf(" %d x %d = %d\n",size, i, size * i);
    }
    return 0;
}

//task completed...