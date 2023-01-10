#include<stdio.h>
#include<string.h>
#include<math.h>
int summ(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int sum = summ(num);
    printf("%d\n",sum);
    return 0;
}

int summ(int n)
{
    if(n ==0 ){
        return 0;
    }
    int last,sum ;
    last = n % 10;
    sum = last + summ(n/10);
    return sum;
}