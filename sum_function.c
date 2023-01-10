#include<stdio.h>
#include<string.h>
#include<math.h>
void sum (int ,int);
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}

void sum(int a,int b){
    printf("the sum is = %d \n",a+b);
}