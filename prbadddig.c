#include<stdio.h>
#include<string.h>
#include<math.h>
int adddig(int a);//function declared...

int main()
{
    int num,summ;
    printf("enter your digit:");
    scanf("%d", &num);
    summ=adddig(num);
    printf("%d  \n",summ);
    while (summ>9)
    {
        summ=adddig(summ);
    }
    printf("%d  \n",summ);
    
    return 0;
}

int adddig(int a)//functuon defined... to return the sum of digits passed 
{
    int last,sum=0;
    while(a!=0)
    {
        last=a%10;
        sum+=last;
        a=a/10;    
    }
    return sum;
}