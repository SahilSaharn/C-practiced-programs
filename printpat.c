#include<stdio.h>
int main()
{
    int a,num1,i,j;
    scanf("%d",&a);
    num1=a+(a-1);
    for(i=1;i<=num1;i++)
    {
        for(j=1;j<=num1;j++)
        {
            if(i==1||i==num1||j==1||j==num1)
                printf(" %d",a);


            else
                printf("  ");
           
        }
        printf("\n");
    }
    
}
