#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int num,multi;
        scanf("%d",&num);
        if(num % 10 == 0){
            printf("0\n");
        }
        else if((num * 2) % 10 == 0){
            printf("1\n");
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}