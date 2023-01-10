#include<stdio.h>
int main()
{
    int start ,end,i;
    scanf("%d",&start);
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        if(i % 2!=0)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}