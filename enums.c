#include<stdio.h>
#include<string.h>
#include<math.h>

enum key
{
    false,true
};

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("%d",true);
    }
    else{
        printf("%d",false);
    }
}
//completed...