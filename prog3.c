#include<stdio.h>
//program to find odd and even numbers among arrays...


int main()
{
    int a,i,o=0;
    printf("enter the numbers you want to enter\n");
    scanf("%d",&a);
    int eve[a];
    int scrap[a];
    for(i=0;i<a;i++)
    {
        printf("ENTER YOUR NUM:");
        scanf("%d",&eve[i]);
    }
    printf("EVEN NUMBERS---\n");
    for(i=0;i<a;i++)
    {
        if(eve[i]%2==0)
        {
            printf("%d\n",eve[i]);
        }

    }
    printf("ODD NUMBERS---\n");
    for(i=0;i<a;i++)
    {
        if(eve[i]%2!=0)
        {
            printf("%d\n",eve[i]);
        }
    }
    return 0;
}