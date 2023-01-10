#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test,d,n,i,j,sum=0;
    scanf("%d",&test);
    while(test)
    {
        scanf("%d %d",&d,&n);
        for(i=1;i<=d;i++)
        {
            for(j=1,sum=0;j<=n;j++)
            {
                sum=sum+j;
            }
            n=sum;
                   
        }
        printf("%d\n",sum);
        test--;
    }
    return 0;
}