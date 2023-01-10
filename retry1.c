/* PROGRAM TO PRINT THE SUM OF FIRST & LAST DIGIT OF A MULTI DIGIT NUMBER LIKE 12345 AND TO PRINT 6...*/
#include<stdio.h>
#include <math.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int a1[size],lastdig[size],du[size],count[size],tens[size];
    for(i=0;i<size;i++)
    {
        scanf("%d" ,&a1[i]);
        lastdig[i]=a1[i]%10;
        a1[i]=a1[i]/10;
        count[i]=0;
    }
    for(i=0;i<size;i++)
    {
            printf("%d  %d\n",lastdig[i],a1[i]);
            du[i]=a1[i];
    }
    for(i=0;i<size;i++)
    {
        while(du[i]!=0)
        {
            du[i]=du[i]/10;
            count[i]++;
        }
    }
    for(i=0;i<size;i++)
    {
        count[i]=count[i]-1;
        tens[i]=pow(10,count[i]);   
        a1[i]=a1[i]/tens[i];
        printf("%d\n",a1[i]+lastdig[i]);
    }
    return 0;
}