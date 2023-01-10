#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,k,n,w,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum = sum+(i*k);
    }
    if(n>=sum)
    {
        printf("0\n");
    }
    else
    {
        printf("%d",sum-n);
    }
    return 0;
}