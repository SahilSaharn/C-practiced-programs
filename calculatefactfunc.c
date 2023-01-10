#include<stdio.h>
#include<string.h>
#include<math.h>
int facct(int a);


int main()
{
    int num2,fact,sum=0,i,last;
    printf("enter the number series you want factorial of");
    scanf("%d",&num2);
    for(i=0;num2!=0;i++)
    {
        last=num2%10;
        sum=sum+facct(last);
        num2=num2/10;
    }
    printf("the sum of the series is %d\n",sum);
    return 0;
}


int facct(int a)
{
    int sup=1,i;
    for(i=1;i<=a;i++){
        sup=sup*i;
    }
    return sup;
}