#include<stdio.h>
int main()
{
    int x,y,i,poe=1;
    printf("enter the base number:");
    scanf("%d",&x);
    printf("enter the ratio to power:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        poe=(poe*x);
    }
    printf("%d\n",poe);

    return 0;
}